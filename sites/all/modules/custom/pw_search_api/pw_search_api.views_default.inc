<?php
/**
 * @file
 * pw_search_api.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_search_api_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pw_search_api_main';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_multi';
  $view->human_name = 'PW Search API Main';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Suchergebnisse';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Jetzt suchen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Erweiterte Optionen',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'search_api_multi_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'main_index_type' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => 'All|Ganze Plattform durchsuchen
Alle|Ganze Plattform durchsuchen
0|Ganze Plattform durchsuchen 0',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'weiter';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'pw-list-item clearfix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'search_api_multi';
  $handler->display->display_options['row_options']['view_mode'] = array(
    'node' => 'search_result',
    'user' => 'search_result',
  );
  /* Verhalten, wenn keine Ergebnisse vorliegen: Global: Textbereich */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Suche erfolglos';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Leider liegen für Ihre Anfrage keine Suchergebnisse vor.';
  $handler->display->display_options['empty']['area']['format'] = 'managed_content';
  /* Feld: Suchen: Node Index results */
  $handler->display->display_options['fields']['node_index']['id'] = 'node_index';
  $handler->display->display_options['fields']['node_index']['table'] = 'search_api_multi';
  $handler->display->display_options['fields']['node_index']['field'] = 'node_index';
  /* Sortierkriterien: Politician Index: URI (indexed) */
  $handler->display->display_options['sorts']['politician_index_search_api_url']['id'] = 'politician_index_search_api_url';
  $handler->display->display_options['sorts']['politician_index_search_api_url']['table'] = 'search_api_multi';
  $handler->display->display_options['sorts']['politician_index_search_api_url']['field'] = 'politician_index_search_api_url';
  /* Sortierkriterien: Main Index: Ordinal date for search results (indexed) */
  $handler->display->display_options['sorts']['main_index_field_search_sort_date']['id'] = 'main_index_field_search_sort_date';
  $handler->display->display_options['sorts']['main_index_field_search_sort_date']['table'] = 'search_api_multi';
  $handler->display->display_options['sorts']['main_index_field_search_sort_date']['field'] = 'main_index_field_search_sort_date';
  $handler->display->display_options['sorts']['main_index_field_search_sort_date']['order'] = 'DESC';
  /* Filterkriterium: Suchen: Fulltext search */
  $handler->display->display_options['filters']['search_api_multi_fulltext']['id'] = 'search_api_multi_fulltext';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['table'] = 'search_api_multi';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['field'] = 'search_api_multi_fulltext';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_multi_fulltext']['expose']['operator_id'] = 'search_api_multi_fulltext_op';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['expose']['label'] = 'Suchbegriff';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['expose']['operator'] = 'search_api_multi_fulltext_op';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['expose']['identifier'] = 's';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['search_api_multi_fulltext']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['search_api_multi_fulltext']['expose']['remember_roles'] = array(
    2 => 0,
    1 => 0,
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
    29859578 => 0,
  );
  /* Filterkriterium: Suchen: Index */
  $handler->display->display_options['filters']['search_api_multi_index']['id'] = 'search_api_multi_index';
  $handler->display->display_options['filters']['search_api_multi_index']['table'] = 'search_api_multi';
  $handler->display->display_options['filters']['search_api_multi_index']['field'] = 'search_api_multi_index';
  $handler->display->display_options['filters']['search_api_multi_index']['value'] = array(
    'politician_index' => 'politician_index',
    'main_index' => 'main_index',
  );
  /* Filterkriterium: Main Index: Inhaltstyp (indexed) */
  $handler->display->display_options['filters']['main_index_type']['id'] = 'main_index_type';
  $handler->display->display_options['filters']['main_index_type']['table'] = 'search_api_multi';
  $handler->display->display_options['filters']['main_index_type']['field'] = 'main_index_type';
  $handler->display->display_options['filters']['main_index_type']['value'] = array(
    'poll' => 'poll',
    'blogpost' => 'blogpost',
    'page' => 'page',
    'dialogue' => 'dialogue',
    'pw_petition' => 'pw_petition',
  );
  $handler->display->display_options['filters']['main_index_type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['main_index_type']['expose']['operator_id'] = 'main_index_type_op';
  $handler->display->display_options['filters']['main_index_type']['expose']['label'] = 'Ergebnis beschränken auf';
  $handler->display->display_options['filters']['main_index_type']['expose']['operator'] = 'main_index_type_op';
  $handler->display->display_options['filters']['main_index_type']['expose']['identifier'] = 'typ';
  $handler->display->display_options['filters']['main_index_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
    29859578 => 0,
  );
  $handler->display->display_options['filters']['main_index_type']['expose']['reduce'] = 1;
  $handler->display->display_options['filters']['main_index_type']['group_info']['identifier'] = 'blog';
  $handler->display->display_options['filters']['main_index_type']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['main_index_type']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Inhaltstyp',
      'operator' => '=',
      'value' => array(
        'poll' => 'poll',
        'blogpost' => 'blogpost',
        'dialogue' => 'dialogue',
        'page' => 'page',
        'pw_petition' => 'pw_petition',
        'announcement' => 0,
        'calendar_entry' => 0,
        'committee_membership' => 0,
        'pw_kc_position' => 0,
        'pw_kc_thesis' => 0,
        'newsletter' => 0,
        'press_release' => 0,
        'press_article' => 0,
        'sidejob' => 0,
        'pw_slider' => 0,
        'speech' => 0,
        'trustee' => 0,
        'vote' => 0,
        'election_programme' => 0,
        'webform' => 0,
      ),
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'suche';
  $translatables['pw_search_api_main'] = array(
    t('Master'),
    t('Suchergebnisse'),
    t('mehr'),
    t('Jetzt suchen'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Erweiterte Optionen'),
    t('All|Ganze Plattform durchsuchen
Alle|Ganze Plattform durchsuchen
0|Ganze Plattform durchsuchen 0'),
    t('Elemente pro Seite'),
    t('- Alle -'),
    t('Offset'),
    t('« erste Seite'),
    t('‹ vorherige Seite'),
    t('weiter'),
    t('letzte Seite »'),
    t('Suche erfolglos'),
    t('Leider liegen für Ihre Anfrage keine Suchergebnisse vor.'),
    t('Node Index results'),
    t('Suchbegriff'),
    t('Ergebnis beschränken auf'),
    t('Page'),
  );
  $export['pw_search_api_main'] = $view;

  return $export;
}
