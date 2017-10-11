<?php
/**
 * @file
 * pw_sidejobs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_sidejobs_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pw_list_politician_entities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'PW List Politician Entities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '-';
  /* Feld: Excluded: Last Name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['ui_name'] = 'Excluded: Last Name';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  /* Feld: Excluded: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['ui_name'] = 'Excluded: First Name';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  /* Feld: Excluded: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Excluded: Name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['format_username'] = FALSE;
  /* Feld: Excluded: Party */
  $handler->display->display_options['fields']['field_user_party']['id'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['table'] = 'field_data_field_user_party';
  $handler->display->display_options['fields']['field_user_party']['field'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['ui_name'] = 'Excluded: Party';
  $handler->display->display_options['fields']['field_user_party']['label'] = '';
  $handler->display->display_options['fields']['field_user_party']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_party']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party']['delta_offset'] = '0';
  /* Feld: Excluded: Parliament */
  $handler->display->display_options['fields']['field_user_parliament']['id'] = 'field_user_parliament';
  $handler->display->display_options['fields']['field_user_parliament']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['fields']['field_user_parliament']['field'] = 'field_user_parliament';
  $handler->display->display_options['fields']['field_user_parliament']['ui_name'] = 'Excluded: Parliament';
  $handler->display->display_options['fields']['field_user_parliament']['label'] = '';
  $handler->display->display_options['fields']['field_user_parliament']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_parliament']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_parliament']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_parliament']['delta_offset'] = '0';
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
print $data->field_field_user_lname[0][\'raw\'][\'value\'].\', \'.$data->field_field_user_fname[0][\'raw\'][\'value\'].\' (\'.$data->field_field_user_party[0][\'rendered\'][\'#markup\'].\')\';
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sortierkriterien: Benutzer: Parliament (field_user_parliament) */
  $handler->display->display_options['sorts']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['sorts']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['sorts']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Sortierkriterien: Benutzer: Last name (field_user_lname) */
  $handler->display->display_options['sorts']['field_user_lname_value']['id'] = 'field_user_lname_value';
  $handler->display->display_options['sorts']['field_user_lname_value']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['sorts']['field_user_lname_value']['field'] = 'field_user_lname_value';
  /* Filterkriterium: Benutzer: Rollen */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    181527986 => '181527986',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'field_user_lname' => 0,
    'field_user_fname' => 0,
    'field_user_party' => 0,
    'field_user_parliament' => 0,
    'php' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['pw_list_politician_entities'] = array(
    t('Master'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Entity Reference'),
  );
  $export['pw_list_politician_entities'] = $view;

  return $export;
}
