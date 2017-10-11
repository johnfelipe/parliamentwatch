<?php

/*
 * @file
 * pw_api.parliaments.inc
 */


/**
 *
 * @return array $parliaments
 *   All parliaments as array.
 */

function pw_api_parliaments() {

  $parliaments = array();

  $parliaments_voc = taxonomy_vocabulary_machine_name_load('parliaments');

  // query for all terms
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'taxonomy_term')
    ->propertyCondition('vid', $parliaments_voc->vid);
  $result = $query->execute();
  if($result['taxonomy_term']){

    // load all terms by tids
    $terms = taxonomy_term_load_multiple(array_keys($result['taxonomy_term']));
    foreach ($terms as $tid => $term) {

      // add name & uuid
      $parliament = array();
      $parliament['name'] = $term->name;
      $parliament['uuid'] = $term->uuid;

      // find & add valid dates
      $field_valid = field_get_items('taxonomy_term', $term, 'field_parliament_valid');
      $date_earliest = '';
      $date_latest = '';
      foreach ($field_valid as $date) {
        if($date['value'] < $date_earliest || empty($date_earliest)){
          $date_earliest = $date['value'];
        }
        if($date['value2'] > $date_latest){
          $date_latest = $date['value2'];
        }
      }
      $parliament['dates'] = array();
      $parliament['dates']['start'] = strlen($date_earliest) > 0?substr($date_earliest, 0, 10):'';
      $parliament['dates']['end'] = strlen($date_latest) > 0?substr($date_latest, 0, 10):'';

      // add election date
      $field_election = field_get_items('taxonomy_term', $term, 'field_parliament_election');
      $parliament['dates']['election'] = strlen($field_election[0]['value']) > 0?substr($field_election[0]['value'], 0, 10):'';

      // add to array
      $parliaments['parliament_'.$tid] = $parliament;
    }
  }

// wrap into parliaments root element
  $parliaments = array('parliaments' => $parliaments);

  return $parliaments;
}
