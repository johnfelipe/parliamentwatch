<?php

/*
 * @file
 * pw_api.committees.inc
 */



/**
 *
 * @param $parliament
 *    Can be parliament name or term uuid.
 * @return array $committees
 *   Returns all committees of a parliament
 */

function pw_api_committees($parliament) {

  $committees = array();

    // translate uuid into parliament name
  if(preg_match('/[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}/i', $parliament, $uuid)){
    $parliament_term = array_pop(entity_uuid_load('taxonomy_term', $uuid));
  }
  else{
    $parliament_term = array_pop(taxonomy_get_term_by_name($parliament, 'parliaments'));
  }

  $parameters = drupal_get_query_parameters();
  $subsets = isset($parameters['subsets'])?[$parameters['subsets']]:[];

  // query for all nodes of type committee
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'committee')
  ->fieldCondition('field_parliament', 'tid', $parliament_term->tid)
  ->propertyCondition('status', NODE_PUBLISHED)
  ->propertyOrderBy('title');
  $result = $query->execute();

  if(isset($result['node'])){
    foreach(array_keys($result['node']) as $nid){
      $committees['committee_'.$nid] = pw_api_committee($parliament_term, $nid, $subsets);
    }
  }

  // add meta data and return
  return pw_api_meta_data($committees, 'committees', ['members'], $contributer);
}


/**
 *
 * @param $parliament
 *    Can be parliament name, term uuid or term object.
 * @param $committee
 *    Can be name, nid or node uuid
 * @param array $subsets
 *    Array of subsets that should be expanded
 * @return array $committee
 *    Array for committee
 */

function pw_api_committee($parliament, $committee, $subsets = ['members']) {

  // translate uuid into parliament name
  if (is_object($parliament)) {
    $parliament_term = $parliament;
  }
  elseif (preg_match('/[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}/i', $parliament, $uuid)){
    $parliament_term = array_pop(entity_uuid_load('taxonomy_term', $uuid));
  }
  else {
    $parliament_term = array_pop(taxonomy_get_term_by_name($parliament, 'parliaments'));
  }

  // translate uuid into committee
  if (preg_match('/[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}/i', $committee, $uuid)) {
    $nid = entity_get_id_by_uuid('node', [$uuid]);
    $node = node_load(array_pop($nid));
  }
  elseif (is_int($committee)) {
    $node = node_load($committee);
  }
  else {

     // query for committee by committe name and parliament
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'committee')
    ->fieldCondition('field_parliament', 'tid', $parliament_term->tid)
    ->propertyCondition('title', $committee)
    ->propertyCondition('status', NODE_PUBLISHED);
    $result = $query->execute();
    if ($result['node']) {
      $node = node_load(key($result['node']));
    }
  }

  if (!$node) {
    return MENU_NOT_FOUND;
  }

  // load topics
  $vocabulary = taxonomy_vocabulary_machine_name_load('topics');
  $terms_topics = entity_load('taxonomy_term', FALSE, ['vid' => $vocabulary->vid]);

  // add committee data
  $committee = pw_api_committee_data($node, $parliament_term, $terms_topics);

  if (in_array('members', $subsets)) {

    // add members
    foreach (pw_committees_get_membership_config() as $role_name => $field_name) {
      $user_references = field_get_items('node', $node, $field_name);
      if (!empty($user_references)) {
        $uids = array_map(function($item) { return $item['target_id']; }, $user_references);
        $query = db_select('user_archive_cache', 'uac');
        $query->fields('uac', array('vid'));
        _pw_uac_add_conditions($query, array(
            'parliament' => $parliament_term->name,
            'uid' => $uids,
            )
        );
        $vids = $query->execute()->fetchCol();
        $politicians = pw_userarchives_politician_load_multiple($vids);

        // pre fetch terms
        $terms_tid = [];
        foreach ($politicians as $politician) {
          $terms_tid[] = field_get_items('user', $politician, 'field_user_party')[0]['tid'];
          $terms_tid[] = field_get_items('user', $politician, 'field_user_fraction')[0]['tid'];
          $terms_tid[] = field_get_items('user', $politician, 'field_user_constituency')[0]['tid'];
          $terms_tid[] = field_get_items('user', $politician, 'field_user_list')[0]['tid'];
        }
        $terms = taxonomy_term_load_multiple($terms_tid);

        // build members array
        foreach ($politicians as $politician) {
          $party_tid = field_get_items('user', $politician, 'field_user_party')[0]['tid'];
          $fraction_tid = field_get_items('user', $politician, 'field_user_fraction')[0]['tid'];
          $constituency_tid = field_get_items('user', $politician, 'field_user_constituency')[0]['tid'];
          $list_tid = field_get_items('user', $politician, 'field_user_list')[0]['tid'];

          $member = [];
          $member['meta']['uuid'] = $politician->uuid;
          $member['meta']['name'] = $politician->name;
          $dataset_types = ['profile'];
          $path_types = ['name' => $politician->name, 'uuid' => $politician->uuid];
          $path_types_parliaments = ['name' => $parliament_term->name, 'uuid' => $parliament_term->uuid];
          $member['meta']['datasets'] = pw_api_urls_datasets($dataset_types, $path_types, $path_types_parliaments);
          $member['fullname'] = _pw_get_fullname($politician);
          $member['party'] = $terms[$party_tid]->name;
          $member['fraction'] = $terms[$fraction_tid]->name;
          $member['constituency'] = $terms[$constituency_tid]->name;
          $member['list'] = $terms[$list_tid]->name;
          $member['role'] = t($role_name);

          $committee['members']['member_'.$politician->uid] = $member;
        }
      }
    }
  }

  return ['committee' => $committee];
}


/**
 *
 * @param object $node
 *    Committee node.
 * @param object $parliament_term
 *    Parlaiment term.
 * @param array $terms_topics
 *    Array of all topics
 * @return array $committee
 *    Data array of single committee
 */

function pw_api_committee_data($node, $parliament_term, $terms_topics) {

  // add committee data
  $committee = [];
  $committee['meta'] = [];
  $committee['meta']['uuid'] = $node->uuid;
  $committee['meta']['edited'] = date('Y-m-d H:i', $node->changed);
  $topics = field_get_items('node', $node, 'field_topics');
  $committee['meta']['topics'] = [];
  foreach ($topics as $topic) {
    $committee['meta']['topics']['topic_'.$topic['tid']] = $terms_topics[$topic['tid']]->name;
  }
  $committee['meta']['url'] = url('node/' . $node->nid, ['absolute' => TRUE]);

  // add sub datasets
  $pathinfo = pathinfo(current_path());
  if ($pathinfo['filename'] == 'committees') {
    $dataset_types = ['committee'];
    $path_types_parliaments = ['name' => strtolower($parliament_term->name), 'uuid' => $parliament_term->uuid];
    $path_types = ['name' => strtolower($node->title), 'uuid' => $node->uuid];
    $committee['meta']['datasets'] = pw_api_urls_datasets($dataset_types, $path_types, $path_types_parliaments);
  }
  else {
    $dataset_types = ['committees'];
    $path_types = ['name' => strtolower($parliament_term->name), 'uuid' => $parliament_term->uuid];
    $committee['meta']['datasets'] = pw_api_urls_datasets($dataset_types, $path_types);
  }

  $committee['title'] = $node->title;
  $body = field_get_items('node', $node, 'body');
  $committee['summary'] = trim(strip_tags($body[0]['value']));

  return $committee;
}
