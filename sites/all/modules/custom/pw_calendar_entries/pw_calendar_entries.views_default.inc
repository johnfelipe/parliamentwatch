<?php
/**
 * @file
 * pw_calendar_entries.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_calendar_entries_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pw_calendar_entries';
  $view->description = 'Political Roles, Sidejobs and Speeches Displays for User Profiles';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PW Calendar Entries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Politische Funktionen von ';
  $handler->display->display_options['css_class'] = 'clearfix';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'weiter';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Alle Anzeigen';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['pager']['options']['load_all'] = 1;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Feld: Inhalt: Date */
  $handler->display->display_options['fields']['field_valid']['id'] = 'field_valid';
  $handler->display->display_options['fields']['field_valid']['table'] = 'field_data_field_valid';
  $handler->display->display_options['fields']['field_valid']['field'] = 'field_valid';
  $handler->display->display_options['fields']['field_valid']['label'] = '';
  $handler->display->display_options['fields']['field_valid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_valid']['settings'] = array(
    'format_type' => 'date_only_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sortierkriterien: Inhalt: Income Min Total (field_sidejob_income_min_total) */
  $handler->display->display_options['sorts']['field_sidejob_income_min_total_value']['id'] = 'field_sidejob_income_min_total_value';
  $handler->display->display_options['sorts']['field_sidejob_income_min_total_value']['table'] = 'field_data_field_sidejob_income_min_total';
  $handler->display->display_options['sorts']['field_sidejob_income_min_total_value']['field'] = 'field_sidejob_income_min_total_value';
  $handler->display->display_options['sorts']['field_sidejob_income_min_total_value']['order'] = 'DESC';
  /* Sortierkriterien: Inhalt: Organization (field_sidejob_organization) */
  $handler->display->display_options['sorts']['field_sidejob_organization_tid']['id'] = 'field_sidejob_organization_tid';
  $handler->display->display_options['sorts']['field_sidejob_organization_tid']['table'] = 'field_data_field_sidejob_organization';
  $handler->display->display_options['sorts']['field_sidejob_organization_tid']['field'] = 'field_sidejob_organization_tid';
  /* Sortierkriterien: Inhalt: Datum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontextfilter: Inhalt: Politician (field_politician) */
  $handler->display->display_options['arguments']['field_politician_target_id']['id'] = 'field_politician_target_id';
  $handler->display->display_options['arguments']['field_politician_target_id']['table'] = 'field_data_field_politician';
  $handler->display->display_options['arguments']['field_politician_target_id']['field'] = 'field_politician_target_id';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_politician_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_politician_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_politician_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_politician_target_id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_politician_target_id']['validate_options']['type'] = 'either';
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Political Roles */
  $handler = $view->new_display('block', 'Political Roles', 'political_roles');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Politische Funktionen von [php] ';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_valid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_valid' => 'field_valid',
    'fieldset' => 'fieldset',
    'field_political_role' => 'field_political_role',
    'field_committee' => 'field_committee',
    'field_parliament' => 'field_parliament',
    'nid' => 'nid',
    'php' => 'php',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_valid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'fieldset' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_political_role' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_committee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_parliament' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Textbereich */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="ic-info"><div class="info-title"></div><div class="info-content element-hidden">Politische Funktionen in der Legislaturperiode</div></div>
<div id="political-roles" class="add-sharethis" title="<?php print t(\'Politcial Roles of \'); ?> [php]"></div>
';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_politician_target_id']['id'] = 'field_politician_target_id';
  $handler->display->display_options['relationships']['field_politician_target_id']['table'] = 'field_data_field_politician';
  $handler->display->display_options['relationships']['field_politician_target_id']['field'] = 'field_politician_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Exluded | Date */
  $handler->display->display_options['fields']['field_valid']['id'] = 'field_valid';
  $handler->display->display_options['fields']['field_valid']['table'] = 'field_data_field_valid';
  $handler->display->display_options['fields']['field_valid']['field'] = 'field_valid';
  $handler->display->display_options['fields']['field_valid']['ui_name'] = 'Exluded | Date';
  $handler->display->display_options['fields']['field_valid']['label'] = '';
  $handler->display->display_options['fields']['field_valid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_valid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_valid']['settings'] = array(
    'format_type' => 'date_only_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Excluded | Committee */
  $handler->display->display_options['fields']['field_committee']['id'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['table'] = 'field_data_field_committee';
  $handler->display->display_options['fields']['field_committee']['field'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['ui_name'] = 'Excluded | Committee';
  $handler->display->display_options['fields']['field_committee']['label'] = '';
  $handler->display->display_options['fields']['field_committee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['alter']['text'] = '[field_committee],';
  $handler->display->display_options['fields']['field_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Feld: Excluded | Organization */
  $handler->display->display_options['fields']['field_sidejob_organization']['id'] = 'field_sidejob_organization';
  $handler->display->display_options['fields']['field_sidejob_organization']['table'] = 'field_data_field_sidejob_organization';
  $handler->display->display_options['fields']['field_sidejob_organization']['field'] = 'field_sidejob_organization';
  $handler->display->display_options['fields']['field_sidejob_organization']['ui_name'] = 'Excluded | Organization';
  $handler->display->display_options['fields']['field_sidejob_organization']['label'] = '';
  $handler->display->display_options['fields']['field_sidejob_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_organization']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_organization']['alter']['text'] = '[field_sidejob_organization], ';
  $handler->display->display_options['fields']['field_sidejob_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidejob_organization']['type'] = 'taxonomy_term_reference_plain';
  /* Feld: Excluded | Job */
  $handler->display->display_options['fields']['field_job']['id'] = 'field_job';
  $handler->display->display_options['fields']['field_job']['table'] = 'field_data_field_job';
  $handler->display->display_options['fields']['field_job']['field'] = 'field_job';
  $handler->display->display_options['fields']['field_job']['ui_name'] = 'Excluded | Job';
  $handler->display->display_options['fields']['field_job']['label'] = '';
  $handler->display->display_options['fields']['field_job']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_job']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_job']['alter']['text'] = '[field_job],  ';
  $handler->display->display_options['fields']['field_job']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_job']['settings'] = array(
    'linked' => 0,
  );
  /* Feld: Excluded | Address */
  $handler->display->display_options['fields']['field_sidejob_address']['id'] = 'field_sidejob_address';
  $handler->display->display_options['fields']['field_sidejob_address']['table'] = 'field_data_field_sidejob_address';
  $handler->display->display_options['fields']['field_sidejob_address']['field'] = 'field_sidejob_address';
  $handler->display->display_options['fields']['field_sidejob_address']['ui_name'] = 'Excluded | Address';
  $handler->display->display_options['fields']['field_sidejob_address']['label'] = '';
  $handler->display->display_options['fields']['field_sidejob_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidejob_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_sidejob_address']['type'] = 'addressfield_state';
  $handler->display->display_options['fields']['field_sidejob_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Feld: Excluded | Parliament */
  $handler->display->display_options['fields']['field_parliament']['id'] = 'field_parliament';
  $handler->display->display_options['fields']['field_parliament']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['fields']['field_parliament']['field'] = 'field_parliament';
  $handler->display->display_options['fields']['field_parliament']['ui_name'] = 'Excluded | Parliament';
  $handler->display->display_options['fields']['field_parliament']['label'] = '';
  $handler->display->display_options['fields']['field_parliament']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parliament']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parliament']['type'] = 'taxonomy_term_reference_plain';
  /* Feld: Excluded | NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Excluded | NID';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Excluded | PHP | FName + LName */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Excluded | PHP | FName + LName';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
$user = _pw_get_current_user();
$fname =  $user->field_user_fname[\'und\'][0][\'value\'];
$lname =  $user->field_user_lname[\'und\'][0][\'value\'];
echo $fname." ".$lname;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Rewritten Output */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Rewritten Output';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_committee] [field_sidejob_organization] [field_job] [field_sidejob_address] ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Inhalt: Politician (field_politician) */
  $handler->display->display_options['arguments']['field_politician_target_id']['id'] = 'field_politician_target_id';
  $handler->display->display_options['arguments']['field_politician_target_id']['table'] = 'field_data_field_politician';
  $handler->display->display_options['arguments']['field_politician_target_id']['field'] = 'field_politician_target_id';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_politician_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_politician_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_politician_target_id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_politician_target_id']['validate_options']['type'] = 'either';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committee_membership' => 'committee_membership',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['group'] = 1;
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$parliament_tag = $row->field_parliament;
$user_parliament_tag = _pw_get_current_parliament_term();
$user_parliament_tid = $user_parliament_tag->tid;
$nid = $row->nid;
$node_parliament_tid = _pw_get_parliament_term_tid_by_nid($nid);

if($node_parliament_tid == $user_parliament_tid)
{
  return FALSE;
}
else return TRUE;
';
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'sidejob' => 'sidejob',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filterkriterium: Global: PHP */
  $handler->display->display_options['filters']['php_1']['id'] = 'php_1';
  $handler->display->display_options['filters']['php_1']['table'] = 'views';
  $handler->display->display_options['filters']['php_1']['field'] = 'php';
  $handler->display->display_options['filters']['php_1']['group'] = 2;
  $handler->display->display_options['filters']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php_1']['php_filter'] = '$parliament_tag = $row->field_parliament;
$user_parliament_tag = _pw_get_current_parliament_term();
$nid = $row->nid;
$node_parliament_tid = _pw_get_parliament_term_tid_by_nid($nid);
$user_parliament_tid = $user_parliament_tag->tid;

if($node_parliament_tid == $user_parliament_tid)
{
  return FALSE;
}
else return TRUE;
';
  /* Filterkriterium: Inhalt: Sectors (field_sectors) */
  $handler->display->display_options['filters']['field_sectors_tid']['id'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['filters']['field_sectors_tid']['field'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['value'] = array(
    17345 => '17345',
  );
  $handler->display->display_options['filters']['field_sectors_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_sectors_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sectors_tid']['vocabulary'] = 'sidejob_sectors';

  /* Display: Speeches */
  $handler = $view->new_display('block', 'Speeches', 'speeches');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gehaltene Reden von [php]';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'zebra clearfix';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_valid' => 'field_valid',
    'title' => 'title',
    'field_duration' => 'field_duration',
    'php' => 'php',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_valid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_duration' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Textbereich */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="print"></div>
<div class="ic-info"><div class="info-title"></div><div class="info-content element-hidden"><?php print t(\'Gehaltene Reden in der Legislaturperiode \'); ?></div></div>
<div id="speeches" class="add-sharethis" title="<?php print t(\'Speeches of \'); ?> [php]"></div>';
  $handler->display->display_options['header']['area']['format'] = 'managed_content';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_politician_target_id']['id'] = 'field_politician_target_id';
  $handler->display->display_options['relationships']['field_politician_target_id']['table'] = 'field_data_field_politician';
  $handler->display->display_options['relationships']['field_politician_target_id']['field'] = 'field_politician_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Date */
  $handler->display->display_options['fields']['field_valid']['id'] = 'field_valid';
  $handler->display->display_options['fields']['field_valid']['table'] = 'field_data_field_valid';
  $handler->display->display_options['fields']['field_valid']['field'] = 'field_valid';
  $handler->display->display_options['fields']['field_valid']['label'] = '';
  $handler->display->display_options['fields']['field_valid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_valid']['settings'] = array(
    'format_type' => 'date_only_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Inhalt: Duration */
  $handler->display->display_options['fields']['field_duration']['id'] = 'field_duration';
  $handler->display->display_options['fields']['field_duration']['table'] = 'field_data_field_duration';
  $handler->display->display_options['fields']['field_duration']['field'] = 'field_duration';
  $handler->display->display_options['fields']['field_duration']['label'] = '';
  $handler->display->display_options['fields']['field_duration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_duration']['settings'] = array(
    'format' => 'h:mm:ss',
    'leading_zero' => 1,
  );
  /* Feld: Excluded | PHP | FName + LName */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Excluded | PHP | FName + LName';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
$user = _pw_get_current_user();
$fname =  $user->field_user_fname[\'und\'][0][\'value\'];
$lname =  $user->field_user_lname[\'und\'][0][\'value\'];
echo $fname." ".$lname;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Inhalt: Politician (field_politician) */
  $handler->display->display_options['arguments']['field_politician_target_id']['id'] = 'field_politician_target_id';
  $handler->display->display_options['arguments']['field_politician_target_id']['table'] = 'field_data_field_politician';
  $handler->display->display_options['arguments']['field_politician_target_id']['field'] = 'field_politician_target_id';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_politician_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_politician_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_politician_target_id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_politician_target_id']['validate_options']['type'] = 'either';
  /* Kontextfilter: Feld: Parliament (field_parliament) */
  $handler->display->display_options['arguments']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['arguments']['field_parliament_tid']['field'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['field_parliament_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parliament_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_parliament_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_parliament_tid']['default_argument_options']['code'] = '$current_parliament_term = _pw_get_current_parliament_term();
$tid = $current_parliament_term->tid;
return $tid;';
  $handler->display->display_options['arguments']['field_parliament_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parliament_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parliament_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'speech' => 'speech',
  );
  /* Filterkriterium: Inhalt: Titel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'not empty';

  /* Display: Political Roles Page */
  $handler = $view->new_display('page_with_page_title', 'Political Roles Page', 'political_roles_page');

  /* Display: Sidejobs Page */
  $handler = $view->new_display('page_with_page_title', 'Sidejobs Page', 'sidejobs_page');

  /* Display: Speeches Page */
  $handler = $view->new_display('page_with_page_title', 'Speeches Page', 'speeches_page');
  $translatables['pw_calendar_entries'] = array(
    t('Master'),
    t('Politische Funktionen von '),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Elemente pro Seite'),
    t('- Alle -'),
    t('Offset'),
    t('« erste Seite'),
    t('‹ vorherige Seite'),
    t('weiter'),
    t('letzte Seite »'),
    t('Alle Anzeigen'),
    t('Alle'),
    t('Political Roles'),
    t('Politische Funktionen von [php] '),
    t('<div class="ic-info"><div class="info-title"></div><div class="info-content element-hidden">Politische Funktionen in der Legislaturperiode</div></div>
<div id="political-roles" class="add-sharethis" title="<?php print t(\'Politcial Roles of \'); ?> [php]"></div>
'),
    t('Benutzer entity referenced from field_politician'),
    t('[field_committee],'),
    t('[field_sidejob_organization], '),
    t('[field_job],  '),
    t('[field_committee] [field_sidejob_organization] [field_job] [field_sidejob_address] '),
    t('Speeches'),
    t('Gehaltene Reden von [php]'),
    t('<div class="print"></div>
<div class="ic-info"><div class="info-title"></div><div class="info-content element-hidden"><?php print t(\'Gehaltene Reden in der Legislaturperiode \'); ?></div></div>
<div id="speeches" class="add-sharethis" title="<?php print t(\'Speeches of \'); ?> [php]"></div>'),
    t('Political Roles Page'),
    t('Sidejobs Page'),
    t('Speeches Page'),
  );
  $export['pw_calendar_entries'] = $view;

  return $export;
}
