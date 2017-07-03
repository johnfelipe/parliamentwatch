<?php
/**
 * @file
 * pw_profiles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_profiles_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'politicians';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Politicians';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Politicians Overview';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer users';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Politiker pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 20, 50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle anzeigen -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'weiter';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'mail' => 'mail',
    'field_user_party' => 'field_user_party',
    'field_user_parliament' => 'field_user_parliament',
    'field_user_constituency' => 'field_user_constituency',
    'field_user_commitee' => 'field_user_commitee',
    'field_user_questions_get' => 'field_user_questions_get',
    'field_user_answers_give' => 'field_user_answers_give',
    'field_user_address_locality' => 'field_user_address_locality',
    'rid' => 'rid',
    'field_user_list_position' => 'field_user_list_position',
    'edit_node' => 'edit_node',
    'field_user_fname' => 'field_user_fname',
    'field_user_lname' => 'field_user_lname',
  );
  $handler->display->display_options['style_options']['default'] = 'field_user_list_position';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_party' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_user_parliament' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_user_constituency' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_user_commitee' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_user_questions_get' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_user_answers_give' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_user_address_locality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_list_position' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_fname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_user_lname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  /* Feld: Stapelverarbeitungen: Benutzer */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pw_login_once_send_mail_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Feld: Benutzer: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Feld: Benutzer: E-Mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Feld: Benutzer: Party */
  $handler->display->display_options['fields']['field_user_party']['id'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['table'] = 'field_data_field_user_party';
  $handler->display->display_options['fields']['field_user_party']['field'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['delta_offset'] = '0';
  /* Feld: Benutzer: Parliament */
  $handler->display->display_options['fields']['field_user_parliament']['id'] = 'field_user_parliament';
  $handler->display->display_options['fields']['field_user_parliament']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['fields']['field_user_parliament']['field'] = 'field_user_parliament';
  $handler->display->display_options['fields']['field_user_parliament']['delta_offset'] = '0';
  /* Feld: Benutzer: Constituency */
  $handler->display->display_options['fields']['field_user_constituency']['id'] = 'field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency']['field'] = 'field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency']['label'] = 'Wahlkreis';
  $handler->display->display_options['fields']['field_user_constituency']['delta_offset'] = '0';
  /* Feld: Benutzer: Committee */
  $handler->display->display_options['fields']['field_user_commitee']['id'] = 'field_user_commitee';
  $handler->display->display_options['fields']['field_user_commitee']['table'] = 'field_data_field_user_commitee';
  $handler->display->display_options['fields']['field_user_commitee']['field'] = 'field_user_commitee';
  $handler->display->display_options['fields']['field_user_commitee']['delta_offset'] = '0';
  /* Feld: Beschädigte/fehlende Behandlungsroutine */
  $handler->display->display_options['fields']['field_user_questions_get']['id'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['table'] = 'field_data_field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['field'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['label'] = 'Fragen';
  /* Feld: Beschädigte/fehlende Behandlungsroutine */
  $handler->display->display_options['fields']['field_user_answers_give']['id'] = 'field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['table'] = 'field_data_field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['field'] = 'field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['label'] = 'Antworten';
  /* Feld: Benutzer: Address - Ort (z.B. Stadt) */
  $handler->display->display_options['fields']['field_user_address_locality']['id'] = 'field_user_address_locality';
  $handler->display->display_options['fields']['field_user_address_locality']['table'] = 'field_data_field_user_address';
  $handler->display->display_options['fields']['field_user_address_locality']['field'] = 'field_user_address_locality';
  $handler->display->display_options['fields']['field_user_address_locality']['label'] = 'Ort';
  /* Feld: Benutzer: Rollen */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Feld: Benutzer: List Position */
  $handler->display->display_options['fields']['field_user_list_position']['id'] = 'field_user_list_position';
  $handler->display->display_options['fields']['field_user_list_position']['table'] = 'field_data_field_user_list_position';
  $handler->display->display_options['fields']['field_user_list_position']['field'] = 'field_user_list_position';
  $handler->display->display_options['fields']['field_user_list_position']['label'] = 'Listenplatz';
  /* Feld: Benutzer: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Feld: Benutzer: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['label'] = 'hidden';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  /* Feld: Benutzer: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['label'] = 'hidden';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  /* Sortierkriterien: Benutzer: Erstellungsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Benutzer: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Benutzer: First Name (field_user_fname) */
  $handler->display->display_options['filters']['field_user_fname_value']['id'] = 'field_user_fname_value';
  $handler->display->display_options['filters']['field_user_fname_value']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['filters']['field_user_fname_value']['field'] = 'field_user_fname_value';
  $handler->display->display_options['filters']['field_user_fname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_fname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_fname_value']['expose']['operator_id'] = 'field_user_fname_value_op';
  $handler->display->display_options['filters']['field_user_fname_value']['expose']['label'] = 'Vorname';
  $handler->display->display_options['filters']['field_user_fname_value']['expose']['description'] = 'Suche nach Vornamen.';
  $handler->display->display_options['filters']['field_user_fname_value']['expose']['operator'] = 'field_user_fname_value_op';
  $handler->display->display_options['filters']['field_user_fname_value']['expose']['identifier'] = 'field_user_fname_value';
  $handler->display->display_options['filters']['field_user_fname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
  );
  /* Filterkriterium: Benutzer: Last name (field_user_lname) */
  $handler->display->display_options['filters']['field_user_lname_value']['id'] = 'field_user_lname_value';
  $handler->display->display_options['filters']['field_user_lname_value']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['filters']['field_user_lname_value']['field'] = 'field_user_lname_value';
  $handler->display->display_options['filters']['field_user_lname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_lname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['operator_id'] = 'field_user_lname_value_op';
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['label'] = 'Nachname';
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['description'] = 'Suche nach Nachnamen.';
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['operator'] = 'field_user_lname_value_op';
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['identifier'] = 'field_user_lname_value';
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
  );
  /* Filterkriterium: Benutzer: Rollen */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    181527986 => '181527986',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Filterkriterium: Benutzer: E-Mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-Mail';
  $handler->display->display_options['filters']['mail']['expose']['description'] = 'Suche nach E-Mail-Adressen.';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
  );
  /* Filterkriterium: Benutzer: Party (field_user_party) */
  $handler->display->display_options['filters']['field_user_party_tid']['id'] = 'field_user_party_tid';
  $handler->display->display_options['filters']['field_user_party_tid']['table'] = 'field_data_field_user_party';
  $handler->display->display_options['filters']['field_user_party_tid']['field'] = 'field_user_party_tid';
  $handler->display->display_options['filters']['field_user_party_tid']['value'] = '';
  $handler->display->display_options['filters']['field_user_party_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_party_tid']['expose']['operator_id'] = 'field_user_party_tid_op';
  $handler->display->display_options['filters']['field_user_party_tid']['expose']['label'] = 'Partei';
  $handler->display->display_options['filters']['field_user_party_tid']['expose']['description'] = 'Suche nach Parteien.';
  $handler->display->display_options['filters']['field_user_party_tid']['expose']['operator'] = 'field_user_party_tid_op';
  $handler->display->display_options['filters']['field_user_party_tid']['expose']['identifier'] = 'field_user_party_tid';
  $handler->display->display_options['filters']['field_user_party_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
  );
  $handler->display->display_options['filters']['field_user_party_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_user_party_tid']['type'] = 'textfield';
  $handler->display->display_options['filters']['field_user_party_tid']['vocabulary'] = 'party';
  /* Filterkriterium: Benutzer: Parliament (field_user_parliament) */
  $handler->display->display_options['filters']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['filters']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['filters']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['filters']['field_user_parliament_tid']['value'] = '';
  $handler->display->display_options['filters']['field_user_parliament_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_parliament_tid']['expose']['operator_id'] = 'field_user_parliament_tid_op';
  $handler->display->display_options['filters']['field_user_parliament_tid']['expose']['label'] = 'Parlament';
  $handler->display->display_options['filters']['field_user_parliament_tid']['expose']['description'] = 'Suche nach Parlamenten.';
  $handler->display->display_options['filters']['field_user_parliament_tid']['expose']['operator'] = 'field_user_parliament_tid_op';
  $handler->display->display_options['filters']['field_user_parliament_tid']['expose']['identifier'] = 'field_user_parliament_tid';
  $handler->display->display_options['filters']['field_user_parliament_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
  );
  $handler->display->display_options['filters']['field_user_parliament_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_user_parliament_tid']['type'] = 'textfield';
  $handler->display->display_options['filters']['field_user_parliament_tid']['vocabulary'] = 'parliaments';
  /* Filterkriterium: Benutzer: Constituency (field_user_constituency) */
  $handler->display->display_options['filters']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['filters']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['filters']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['filters']['field_user_constituency_tid']['value'] = '';
  $handler->display->display_options['filters']['field_user_constituency_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_constituency_tid']['expose']['operator_id'] = 'field_user_constituency_tid_op';
  $handler->display->display_options['filters']['field_user_constituency_tid']['expose']['label'] = 'Wahlkreis';
  $handler->display->display_options['filters']['field_user_constituency_tid']['expose']['description'] = 'Suche nach Wahlkreisen.';
  $handler->display->display_options['filters']['field_user_constituency_tid']['expose']['operator'] = 'field_user_constituency_tid_op';
  $handler->display->display_options['filters']['field_user_constituency_tid']['expose']['identifier'] = 'field_user_constituency_tid';
  $handler->display->display_options['filters']['field_user_constituency_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
  );
  $handler->display->display_options['filters']['field_user_constituency_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_user_constituency_tid']['type'] = 'textfield';
  $handler->display->display_options['filters']['field_user_constituency_tid']['vocabulary'] = 'constituency';
  /* Filterkriterium: Benutzer: Committee (field_user_commitee) */
  $handler->display->display_options['filters']['field_user_commitee_tid']['id'] = 'field_user_commitee_tid';
  $handler->display->display_options['filters']['field_user_commitee_tid']['table'] = 'field_data_field_user_commitee';
  $handler->display->display_options['filters']['field_user_commitee_tid']['field'] = 'field_user_commitee_tid';
  $handler->display->display_options['filters']['field_user_commitee_tid']['value'] = '';
  $handler->display->display_options['filters']['field_user_commitee_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_commitee_tid']['expose']['operator_id'] = 'field_user_commitee_tid_op';
  $handler->display->display_options['filters']['field_user_commitee_tid']['expose']['label'] = 'Ausschuss';
  $handler->display->display_options['filters']['field_user_commitee_tid']['expose']['description'] = 'Suche nach Ausschüssen.';
  $handler->display->display_options['filters']['field_user_commitee_tid']['expose']['operator'] = 'field_user_commitee_tid_op';
  $handler->display->display_options['filters']['field_user_commitee_tid']['expose']['identifier'] = 'field_user_commitee_tid';
  $handler->display->display_options['filters']['field_user_commitee_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
  );
  $handler->display->display_options['filters']['field_user_commitee_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_user_commitee_tid']['type'] = 'textfield';
  $handler->display->display_options['filters']['field_user_commitee_tid']['vocabulary'] = 'committee';
  /* Filterkriterium: Benutzer: Address - Ort (z.B. Stadt) */
  $handler->display->display_options['filters']['field_user_address_locality']['id'] = 'field_user_address_locality';
  $handler->display->display_options['filters']['field_user_address_locality']['table'] = 'field_data_field_user_address';
  $handler->display->display_options['filters']['field_user_address_locality']['field'] = 'field_user_address_locality';
  $handler->display->display_options['filters']['field_user_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_address_locality']['expose']['operator_id'] = 'field_user_address_locality_op';
  $handler->display->display_options['filters']['field_user_address_locality']['expose']['label'] = 'Wohnort';
  $handler->display->display_options['filters']['field_user_address_locality']['expose']['description'] = 'Suche nach Wohnorten.';
  $handler->display->display_options['filters']['field_user_address_locality']['expose']['operator'] = 'field_user_address_locality_op';
  $handler->display->display_options['filters']['field_user_address_locality']['expose']['identifier'] = 'field_user_address_locality';
  $handler->display->display_options['filters']['field_user_address_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
  );
  /* Filterkriterium: Benutzer: Dynamic Field Politicians View */
  $handler->display->display_options['filters']['dynamic-field']['id'] = 'dynamic-field';
  $handler->display->display_options['filters']['dynamic-field']['table'] = 'users';
  $handler->display->display_options['filters']['dynamic-field']['field'] = 'dynamic-field';
  $handler->display->display_options['filters']['dynamic-field']['ui_name'] = 'Benutzer: Dynamic Field Politicians View';
  $handler->display->display_options['filters']['dynamic-field']['expose']['operator_id'] = 'dynamic-field_op';
  $handler->display->display_options['filters']['dynamic-field']['expose']['label'] = 'Dynamic Fields';
  $handler->display->display_options['filters']['dynamic-field']['expose']['operator'] = 'dynamic-field_op';
  $handler->display->display_options['filters']['dynamic-field']['expose']['identifier'] = 'dynamic-field';
  $handler->display->display_options['filters']['dynamic-field']['filterable_fields'] = array(
    'name' => 'name',
    'mail' => 'mail',
    'field_user_party' => 'field_user_party',
    'field_user_parliament' => 'field_user_parliament',
    'field_user_constituency' => 'field_user_constituency',
    'field_user_commitee' => 'field_user_commitee',
    'field_user_questions_get' => 'field_user_questions_get',
    'field_user_answers_give' => 'field_user_answers_give',
    'field_user_address_locality' => 'field_user_address_locality',
    'rid' => 'rid',
    'field_user_list_position' => 'field_user_list_position',
    'views_bulk_operations' => 0,
    'edit_node' => 0,
  );
  $handler->display->display_options['filters']['dynamic-field']['defaults_filterable_fields'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'mail' => 'mail',
    'field_user_party' => 'field_user_party',
    'field_user_parliament' => 'field_user_parliament',
    'edit_node' => 'edit_node',
    'field_user_constituency' => 0,
    'field_user_commitee' => 0,
    'field_user_questions_get' => 0,
    'field_user_answers_give' => 0,
    'field_user_address_locality' => 0,
    'rid' => 0,
    'field_user_list_position' => 0,
  );
  /* Filterkriterium: Benutzer: Dynamic Field Politicians Edit */
  $handler->display->display_options['filters']['dynamic-field_1']['id'] = 'dynamic-field_1';
  $handler->display->display_options['filters']['dynamic-field_1']['table'] = 'users';
  $handler->display->display_options['filters']['dynamic-field_1']['field'] = 'dynamic-field';
  $handler->display->display_options['filters']['dynamic-field_1']['ui_name'] = 'Benutzer: Dynamic Field Politicians Edit';
  $handler->display->display_options['filters']['dynamic-field_1']['expose']['operator_id'] = 'dynamic-field_1_op';
  $handler->display->display_options['filters']['dynamic-field_1']['expose']['label'] = 'Dynamic Fields';
  $handler->display->display_options['filters']['dynamic-field_1']['expose']['operator'] = 'dynamic-field_1_op';
  $handler->display->display_options['filters']['dynamic-field_1']['expose']['identifier'] = 'dynamic-field_1';
  $handler->display->display_options['filters']['dynamic-field_1']['filterable_fields'] = array(
    'name' => 'name',
    'mail' => 'mail',
    'field_user_party' => 'field_user_party',
    'field_user_parliament' => 'field_user_parliament',
    'field_user_constituency' => 'field_user_constituency',
    'field_user_commitee' => 'field_user_commitee',
    'field_user_questions_get' => 'field_user_questions_get',
    'field_user_answers_give' => 'field_user_answers_give',
    'field_user_address_locality' => 'field_user_address_locality',
    'rid' => 'rid',
    'field_user_list_position' => 'field_user_list_position',
    'views_bulk_operations' => 0,
    'edit_node' => 0,
  );
  $handler->display->display_options['filters']['dynamic-field_1']['defaults_filterable_fields'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'mail' => 'mail',
    'field_user_party' => 'field_user_party',
    'field_user_parliament' => 'field_user_parliament',
    'edit_node' => 'edit_node',
    'field_user_constituency' => 0,
    'field_user_commitee' => 0,
    'field_user_questions_get' => 0,
    'field_user_answers_give' => 0,
    'field_user_address_locality' => 0,
    'rid' => 0,
    'field_user_list_position' => 0,
  );

  /* Display: Politicians Overview */
  $handler = $view->new_display('page', 'Politicians Overview', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'field_user_fname' => 'field_user_fname',
    'field_user_lname' => 'field_user_lname',
    'mail' => 'mail',
    'field_user_party' => 'field_user_party',
    'field_user_parliament' => 'field_user_parliament',
    'field_user_constituency' => 'field_user_constituency',
    'field_user_commitee' => 'field_user_commitee',
    'field_user_questions_get' => 'field_user_questions_get',
    'field_user_answers_give' => 'field_user_answers_give',
    'field_user_address_locality' => 'field_user_address_locality',
    'rid' => 'rid',
    'field_user_list_position' => 'field_user_list_position',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_user_list_position';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_fname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_user_lname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_party' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_user_parliament' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_user_constituency' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_user_commitee' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_user_questions_get' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_user_answers_give' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_user_address_locality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_list_position' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Stapelverarbeitungen: Benutzer */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pw_login_once_send_mail_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Feld: Benutzer: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Politiker';
  /* Feld: Benutzer: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['label'] = 'hidden';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  /* Feld: Benutzer: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['label'] = 'hidden';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  /* Feld: Benutzer: E-Mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Feld: Benutzer: Party */
  $handler->display->display_options['fields']['field_user_party']['id'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['table'] = 'field_data_field_user_party';
  $handler->display->display_options['fields']['field_user_party']['field'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['label'] = 'Partei';
  $handler->display->display_options['fields']['field_user_party']['delta_offset'] = '0';
  /* Feld: Benutzer: Parliament */
  $handler->display->display_options['fields']['field_user_parliament']['id'] = 'field_user_parliament';
  $handler->display->display_options['fields']['field_user_parliament']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['fields']['field_user_parliament']['field'] = 'field_user_parliament';
  $handler->display->display_options['fields']['field_user_parliament']['label'] = 'Parlament';
  $handler->display->display_options['fields']['field_user_parliament']['delta_offset'] = '0';
  /* Feld: Benutzer: Constituency */
  $handler->display->display_options['fields']['field_user_constituency']['id'] = 'field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency']['field'] = 'field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency']['label'] = 'Wahlkreis';
  $handler->display->display_options['fields']['field_user_constituency']['delta_offset'] = '0';
  /* Feld: Benutzer: Committee */
  $handler->display->display_options['fields']['field_user_commitee']['id'] = 'field_user_commitee';
  $handler->display->display_options['fields']['field_user_commitee']['table'] = 'field_data_field_user_commitee';
  $handler->display->display_options['fields']['field_user_commitee']['field'] = 'field_user_commitee';
  $handler->display->display_options['fields']['field_user_commitee']['label'] = 'Ausschuss';
  $handler->display->display_options['fields']['field_user_commitee']['delta_offset'] = '0';
  /* Feld: Beschädigte/fehlende Behandlungsroutine */
  $handler->display->display_options['fields']['field_user_questions_get']['id'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['table'] = 'field_data_field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['field'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['label'] = 'Fragen';
  /* Feld: Beschädigte/fehlende Behandlungsroutine */
  $handler->display->display_options['fields']['field_user_answers_give']['id'] = 'field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['table'] = 'field_data_field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['field'] = 'field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['label'] = 'Antworten';
  /* Feld: Benutzer: Address - Ort (z.B. Stadt) */
  $handler->display->display_options['fields']['field_user_address_locality']['id'] = 'field_user_address_locality';
  $handler->display->display_options['fields']['field_user_address_locality']['table'] = 'field_data_field_user_address';
  $handler->display->display_options['fields']['field_user_address_locality']['field'] = 'field_user_address_locality';
  $handler->display->display_options['fields']['field_user_address_locality']['label'] = 'Ort';
  /* Feld: Benutzer: Rollen */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Feld: Benutzer: List Position */
  $handler->display->display_options['fields']['field_user_list_position']['id'] = 'field_user_list_position';
  $handler->display->display_options['fields']['field_user_list_position']['table'] = 'field_data_field_user_list_position';
  $handler->display->display_options['fields']['field_user_list_position']['field'] = 'field_user_list_position';
  $handler->display->display_options['fields']['field_user_list_position']['label'] = 'Listenplatz';
  /* Feld: Benutzer: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Benutzer: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Benutzer: First Name (field_user_fname) */
  $handler->display->display_options['filters']['field_user_fname_value']['id'] = 'field_user_fname_value';
  $handler->display->display_options['filters']['field_user_fname_value']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['filters']['field_user_fname_value']['field'] = 'field_user_fname_value';
  $handler->display->display_options['filters']['field_user_fname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_fname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_fname_value']['expose']['operator_id'] = 'field_user_fname_value_op';
  $handler->display->display_options['filters']['field_user_fname_value']['expose']['label'] = 'Vorname';
  $handler->display->display_options['filters']['field_user_fname_value']['expose']['description'] = 'Suche nach Vornamen.';
  $handler->display->display_options['filters']['field_user_fname_value']['expose']['operator'] = 'field_user_fname_value_op';
  $handler->display->display_options['filters']['field_user_fname_value']['expose']['identifier'] = 'field_user_fname_value';
  $handler->display->display_options['filters']['field_user_fname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
  );
  /* Filterkriterium: Benutzer: Last name (field_user_lname) */
  $handler->display->display_options['filters']['field_user_lname_value']['id'] = 'field_user_lname_value';
  $handler->display->display_options['filters']['field_user_lname_value']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['filters']['field_user_lname_value']['field'] = 'field_user_lname_value';
  $handler->display->display_options['filters']['field_user_lname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_lname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['operator_id'] = 'field_user_lname_value_op';
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['label'] = 'Nachname';
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['description'] = 'Suche nach Nachnamen.';
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['operator'] = 'field_user_lname_value_op';
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['identifier'] = 'field_user_lname_value';
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
  );
  /* Filterkriterium: Benutzer: Rollen */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    181527986 => '181527986',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Filterkriterium: Benutzer: E-Mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-Mail';
  $handler->display->display_options['filters']['mail']['expose']['description'] = 'Suche nach E-Mail-Adressen.';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
  );
  /* Filterkriterium: Benutzer: Party (field_user_party) */
  $handler->display->display_options['filters']['field_user_party_tid']['id'] = 'field_user_party_tid';
  $handler->display->display_options['filters']['field_user_party_tid']['table'] = 'field_data_field_user_party';
  $handler->display->display_options['filters']['field_user_party_tid']['field'] = 'field_user_party_tid';
  $handler->display->display_options['filters']['field_user_party_tid']['value'] = '';
  $handler->display->display_options['filters']['field_user_party_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_party_tid']['expose']['operator_id'] = 'field_user_party_tid_op';
  $handler->display->display_options['filters']['field_user_party_tid']['expose']['label'] = 'Partei';
  $handler->display->display_options['filters']['field_user_party_tid']['expose']['description'] = 'Suche nach Parteien.';
  $handler->display->display_options['filters']['field_user_party_tid']['expose']['operator'] = 'field_user_party_tid_op';
  $handler->display->display_options['filters']['field_user_party_tid']['expose']['identifier'] = 'field_user_party_tid';
  $handler->display->display_options['filters']['field_user_party_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
  );
  $handler->display->display_options['filters']['field_user_party_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_user_party_tid']['type'] = 'textfield';
  $handler->display->display_options['filters']['field_user_party_tid']['vocabulary'] = 'party';
  /* Filterkriterium: Benutzer: Parliament (field_user_parliament) */
  $handler->display->display_options['filters']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['filters']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['filters']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['filters']['field_user_parliament_tid']['value'] = '';
  $handler->display->display_options['filters']['field_user_parliament_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_parliament_tid']['expose']['operator_id'] = 'field_user_parliament_tid_op';
  $handler->display->display_options['filters']['field_user_parliament_tid']['expose']['label'] = 'Parlament';
  $handler->display->display_options['filters']['field_user_parliament_tid']['expose']['description'] = 'Suche nach Parlamenten.';
  $handler->display->display_options['filters']['field_user_parliament_tid']['expose']['operator'] = 'field_user_parliament_tid_op';
  $handler->display->display_options['filters']['field_user_parliament_tid']['expose']['identifier'] = 'field_user_parliament_tid';
  $handler->display->display_options['filters']['field_user_parliament_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
  );
  $handler->display->display_options['filters']['field_user_parliament_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_user_parliament_tid']['type'] = 'textfield';
  $handler->display->display_options['filters']['field_user_parliament_tid']['vocabulary'] = 'parliaments';
  /* Filterkriterium: Benutzer: Constituency (field_user_constituency) */
  $handler->display->display_options['filters']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['filters']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['filters']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['filters']['field_user_constituency_tid']['value'] = '';
  $handler->display->display_options['filters']['field_user_constituency_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_constituency_tid']['expose']['operator_id'] = 'field_user_constituency_tid_op';
  $handler->display->display_options['filters']['field_user_constituency_tid']['expose']['label'] = 'Wahlkreis';
  $handler->display->display_options['filters']['field_user_constituency_tid']['expose']['description'] = 'Suche nach Wahlkreisen.';
  $handler->display->display_options['filters']['field_user_constituency_tid']['expose']['operator'] = 'field_user_constituency_tid_op';
  $handler->display->display_options['filters']['field_user_constituency_tid']['expose']['identifier'] = 'field_user_constituency_tid';
  $handler->display->display_options['filters']['field_user_constituency_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
  );
  $handler->display->display_options['filters']['field_user_constituency_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_user_constituency_tid']['type'] = 'textfield';
  $handler->display->display_options['filters']['field_user_constituency_tid']['vocabulary'] = 'constituency';
  /* Filterkriterium: Benutzer: Committee (field_user_commitee) */
  $handler->display->display_options['filters']['field_user_commitee_tid']['id'] = 'field_user_commitee_tid';
  $handler->display->display_options['filters']['field_user_commitee_tid']['table'] = 'field_data_field_user_commitee';
  $handler->display->display_options['filters']['field_user_commitee_tid']['field'] = 'field_user_commitee_tid';
  $handler->display->display_options['filters']['field_user_commitee_tid']['value'] = '';
  $handler->display->display_options['filters']['field_user_commitee_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_commitee_tid']['expose']['operator_id'] = 'field_user_commitee_tid_op';
  $handler->display->display_options['filters']['field_user_commitee_tid']['expose']['label'] = 'Ausschuss';
  $handler->display->display_options['filters']['field_user_commitee_tid']['expose']['description'] = 'Suche nach Ausschüssen.';
  $handler->display->display_options['filters']['field_user_commitee_tid']['expose']['operator'] = 'field_user_commitee_tid_op';
  $handler->display->display_options['filters']['field_user_commitee_tid']['expose']['identifier'] = 'field_user_commitee_tid';
  $handler->display->display_options['filters']['field_user_commitee_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
  );
  $handler->display->display_options['filters']['field_user_commitee_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_user_commitee_tid']['type'] = 'textfield';
  $handler->display->display_options['filters']['field_user_commitee_tid']['vocabulary'] = 'committee';
  /* Filterkriterium: Benutzer: Address - Ort (z.B. Stadt) */
  $handler->display->display_options['filters']['field_user_address_locality']['id'] = 'field_user_address_locality';
  $handler->display->display_options['filters']['field_user_address_locality']['table'] = 'field_data_field_user_address';
  $handler->display->display_options['filters']['field_user_address_locality']['field'] = 'field_user_address_locality';
  $handler->display->display_options['filters']['field_user_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_address_locality']['expose']['operator_id'] = 'field_user_address_locality_op';
  $handler->display->display_options['filters']['field_user_address_locality']['expose']['label'] = 'Wohnort';
  $handler->display->display_options['filters']['field_user_address_locality']['expose']['description'] = 'Suche nach Wohnorten.';
  $handler->display->display_options['filters']['field_user_address_locality']['expose']['operator'] = 'field_user_address_locality_op';
  $handler->display->display_options['filters']['field_user_address_locality']['expose']['identifier'] = 'field_user_address_locality';
  $handler->display->display_options['filters']['field_user_address_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
  );
  /* Filterkriterium: Benutzer: Dynamic Field Politicians View */
  $handler->display->display_options['filters']['dynamic-field']['id'] = 'dynamic-field';
  $handler->display->display_options['filters']['dynamic-field']['table'] = 'users';
  $handler->display->display_options['filters']['dynamic-field']['field'] = 'dynamic-field';
  $handler->display->display_options['filters']['dynamic-field']['ui_name'] = 'Benutzer: Dynamic Field Politicians View';
  $handler->display->display_options['filters']['dynamic-field']['exposed'] = TRUE;
  $handler->display->display_options['filters']['dynamic-field']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['dynamic-field']['expose']['label'] = 'Felder auswählen';
  $handler->display->display_options['filters']['dynamic-field']['expose']['operator'] = 'dynamic-field_op';
  $handler->display->display_options['filters']['dynamic-field']['expose']['identifier'] = 'dynamic-field-view';
  $handler->display->display_options['filters']['dynamic-field']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
  );
  $handler->display->display_options['filters']['dynamic-field']['filterable_fields'] = array(
    'name' => 'name',
    'mail' => 'mail',
    'field_user_party' => 'field_user_party',
    'field_user_parliament' => 'field_user_parliament',
    'field_user_constituency' => 'field_user_constituency',
    'field_user_commitee' => 'field_user_commitee',
    'field_user_questions_get' => 'field_user_questions_get',
    'field_user_answers_give' => 'field_user_answers_give',
    'field_user_address_locality' => 'field_user_address_locality',
    'rid' => 'rid',
    'field_user_list_position' => 'field_user_list_position',
    'views_bulk_operations' => 0,
    'edit_node' => 0,
  );
  $handler->display->display_options['filters']['dynamic-field']['defaults_filterable_fields'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'mail' => 'mail',
    'field_user_party' => 'field_user_party',
    'field_user_parliament' => 'field_user_parliament',
    'edit_node' => 'edit_node',
    'field_user_constituency' => 0,
    'field_user_commitee' => 0,
    'field_user_questions_get' => 0,
    'field_user_answers_give' => 0,
    'field_user_address_locality' => 0,
    'rid' => 0,
    'field_user_list_position' => 0,
  );
  $handler->display->display_options['path'] = 'admin/people/politicians';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Politicians';
  $handler->display->display_options['menu']['name'] = 'management';

  /* Display: Politicians Bulk Edit */
  $handler = $view->new_display('page_with_page_title', 'Politicians Bulk Edit', 'page_with_page_title_1');
  $translatables['politicians'] = array(
    t('Master'),
    t('Politicians Overview'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Politiker pro Seite'),
    t('- Alle anzeigen -'),
    t('Offset'),
    t('« erste Seite'),
    t('‹ vorherige Seite'),
    t('weiter'),
    t('letzte Seite »'),
    t('- Wählen Sie eine Aufgabe -'),
    t('Name'),
    t('E-Mail'),
    t('Party'),
    t('Parliament'),
    t('Wahlkreis'),
    t('Committee'),
    t('Fragen'),
    t('Antworten'),
    t('Ort'),
    t('Rollen'),
    t('Listenplatz'),
    t('hidden'),
    t('Vorname'),
    t('Suche nach Vornamen.'),
    t('Nachname'),
    t('Suche nach Nachnamen.'),
    t('Suche nach E-Mail-Adressen.'),
    t('Partei'),
    t('Suche nach Parteien.'),
    t('Parlament'),
    t('Suche nach Parlamenten.'),
    t('Suche nach Wahlkreisen.'),
    t('Ausschuss'),
    t('Suche nach Ausschüssen.'),
    t('Wohnort'),
    t('Suche nach Wohnorten.'),
    t('Dynamic Fields'),
    t('Politiker'),
    t('Felder auswählen'),
    t('Politicians Bulk Edit'),
  );
  $export['politicians'] = $view;

  return $export;
}
