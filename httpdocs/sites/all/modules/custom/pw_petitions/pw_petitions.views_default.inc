<?php
/**
 * @file
 * pw_petitions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_petitions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pw_petitions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PW Petitions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'PetitionPlus';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'weiter';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'pw-list-item clearfix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Feld: Beschädigte/fehlende Behandlungsroutine */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sharethis']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Sortierkriterien: Inhalt: Ordinal date for search results (field_search_sort_date) */
  $handler->display->display_options['sorts']['field_search_sort_date_value']['id'] = 'field_search_sort_date_value';
  $handler->display->display_options['sorts']['field_search_sort_date_value']['table'] = 'field_data_field_search_sort_date';
  $handler->display->display_options['sorts']['field_search_sort_date_value']['field'] = 'field_search_sort_date_value';
  $handler->display->display_options['sorts']['field_search_sort_date_value']['order'] = 'DESC';
  /* Sortierkriterien: Inhalt: Signings (field_petition_signings) */
  $handler->display->display_options['sorts']['field_petition_signings_value']['id'] = 'field_petition_signings_value';
  $handler->display->display_options['sorts']['field_petition_signings_value']['table'] = 'field_data_field_petition_signings';
  $handler->display->display_options['sorts']['field_petition_signings_value']['field'] = 'field_petition_signings_value';
  $handler->display->display_options['sorts']['field_petition_signings_value']['order'] = 'DESC';
  /* Sortierkriterien: Inhalt: Donation Amount (field_donation_amount) */
  $handler->display->display_options['sorts']['field_donation_amount_value']['id'] = 'field_donation_amount_value';
  $handler->display->display_options['sorts']['field_donation_amount_value']['table'] = 'field_data_field_donation_amount';
  $handler->display->display_options['sorts']['field_donation_amount_value']['field'] = 'field_donation_amount_value';
  $handler->display->display_options['sorts']['field_donation_amount_value']['order'] = 'DESC';
  /* Sortierkriterien: Inhalt: Datum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'hour';
  /* Kontextfilter: Feld: Parliament (field_parliament) */
  $handler->display->display_options['arguments']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['arguments']['field_parliament_tid']['field'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['field_parliament_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_parliament_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_parliament_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parliament_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parliament_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_parliament_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_parliament_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_parliament_tid']['validate_options']['vocabularies'] = array(
    'parliaments' => 'parliaments',
  );
  $handler->display->display_options['arguments']['field_parliament_tid']['validate_options']['type'] = 'convert';
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
    'pw_petition' => 'pw_petition',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Block Progress */
  $handler = $view->new_display('block', 'Block Progress', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Progress */
  $handler->display->display_options['fields']['field_petition_progress']['id'] = 'field_petition_progress';
  $handler->display->display_options['fields']['field_petition_progress']['table'] = 'field_data_field_petition_progress';
  $handler->display->display_options['fields']['field_petition_progress']['field'] = 'field_petition_progress';
  $handler->display->display_options['fields']['field_petition_progress']['label'] = '';
  $handler->display->display_options['fields']['field_petition_progress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_petition_progress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_petition_progress']['type'] = 'computed_field_unsanitized';
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<div class="pw-petition-progress-wrapper float-left"><div class="pw-petition-progress" style="width: <?php
  $required = $data->_field_data[\'nid\'][\'entity\']->field_petition_required[\'und\'][0][\'value\'];
  $signings = $data->_field_data[\'nid\'][\'entity\']->field_petition_signings[\'und\'][0][\'value\'];
  $progress = $data->_field_data[\'nid\'][\'entity\']->field_petition_progress[\'und\'][0][\'value\'];
  if($signings > $required){
    $progress = 100;
  }
  print $progress; ?>%;"></div></div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Inhalt: Beitrags-ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Menu Block */
  $handler = $view->new_display('block', 'Menu Block', 'menu_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Petitionen';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'alle Petitionen';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'views-row-item clearfix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Textbereich */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Zeichnen Sie die Petitionen von abgeordnetenwatch.de und bitten Sie über Ihre Netzwerke auch interessierte Freunde und Bekannte dies zu tun. Gemeinsam für mehr Transparenz und gegen Korruption! <a href="/petitionen" class="read-more">alle Petitionen</a>';
  $handler->display->display_options['header']['area']['format'] = 'managed_content';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Feld: Inhalt: Progress */
  $handler->display->display_options['fields']['field_petition_progress']['id'] = 'field_petition_progress';
  $handler->display->display_options['fields']['field_petition_progress']['table'] = 'field_data_field_petition_progress';
  $handler->display->display_options['fields']['field_petition_progress']['field'] = 'field_petition_progress';
  $handler->display->display_options['fields']['field_petition_progress']['label'] = '';
  $handler->display->display_options['fields']['field_petition_progress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_petition_progress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_petition_progress']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_petition_progress']['type'] = 'computed_field_unsanitized';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Signings */
  $handler->display->display_options['fields']['field_petition_signings']['id'] = 'field_petition_signings';
  $handler->display->display_options['fields']['field_petition_signings']['table'] = 'field_data_field_petition_signings';
  $handler->display->display_options['fields']['field_petition_signings']['field'] = 'field_petition_signings';
  $handler->display->display_options['fields']['field_petition_signings']['label'] = '';
  $handler->display->display_options['fields']['field_petition_signings']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_petition_signings']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_petition_signings']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_petition_signings']['settings'] = array(
    'thousand_separator' => '.',
    'prefix_suffix' => 1,
  );
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['php']['element_wrapper_class'] = 'float-left push-right-m';
  $handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<div class="pw-progress-wrapper pw-progress-wrapper-s"><div class="pw-progress" style="width: <?php
  $required = $data->_field_data[\'nid\'][\'entity\']->field_petition_required[\'und\'][0][\'value\'];
  $signings = $data->_field_data[\'nid\'][\'entity\']->field_petition_signings[\'und\'][0][\'value\'];
  $progress = $data->_field_data[\'nid\'][\'entity\']->field_petition_progress[\'und\'][0][\'value\'];
  if($signings > $required){
    $progress = 100;
  }
  print $progress; ?>%;"></div></div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Inhalt: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'link-sign float-right';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Diese Petition mitzeichnen';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sortierkriterien: Inhalt: Signings (field_petition_signings) */
  $handler->display->display_options['sorts']['field_petition_signings_value']['id'] = 'field_petition_signings_value';
  $handler->display->display_options['sorts']['field_petition_signings_value']['table'] = 'field_data_field_petition_signings';
  $handler->display->display_options['sorts']['field_petition_signings_value']['field'] = 'field_petition_signings_value';
  $handler->display->display_options['sorts']['field_petition_signings_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pw_petition' => 'pw_petition',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Partner Organization (field_petition_partner) */
  $handler->display->display_options['filters']['field_petition_partner_value']['id'] = 'field_petition_partner_value';
  $handler->display->display_options['filters']['field_petition_partner_value']['table'] = 'field_data_field_petition_partner';
  $handler->display->display_options['filters']['field_petition_partner_value']['field'] = 'field_petition_partner_value';
  $handler->display->display_options['filters']['field_petition_partner_value']['operator'] = 'empty';
  /* Filterkriterium: Inhalt: Inhalt UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['operator'] = '!=';
  $handler->display->display_options['filters']['uuid']['value'] = '46c8b047-f95f-4aea-982d-bf7e205ab3b0';

  /* Display: Petitions Sidebar */
  $handler = $view->new_display('block', 'Petitions Sidebar', 'sidebar');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Feld: Inhalt: Progress */
  $handler->display->display_options['fields']['field_petition_progress']['id'] = 'field_petition_progress';
  $handler->display->display_options['fields']['field_petition_progress']['table'] = 'field_data_field_petition_progress';
  $handler->display->display_options['fields']['field_petition_progress']['field'] = 'field_petition_progress';
  $handler->display->display_options['fields']['field_petition_progress']['label'] = '';
  $handler->display->display_options['fields']['field_petition_progress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_petition_progress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_petition_progress']['type'] = 'computed_field_unsanitized';
  /* Feld: Beschädigte/fehlende Behandlungsroutine */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sharethis']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Feld: Global: Feldgruppe */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Teaser image wrapper';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_teaser_image',
    1 => 'field_image_copyright',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'float-left push-bottom-s push-right-m';
  /* Feld: Inhalt: Teaser image */
  $handler->display->display_options['fields']['field_teaser_image']['id'] = 'field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['table'] = 'field_data_field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['field'] = 'field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_teaser_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_image']['settings'] = array(
    'image_style' => 'pw_landscape_l__normal',
    'image_link' => 'content',
  );
  /* Feld: Datei: copyright */
  $handler->display->display_options['fields']['field_image_copyright']['id'] = 'field_image_copyright';
  $handler->display->display_options['fields']['field_image_copyright']['table'] = 'field_data_field_image_copyright';
  $handler->display->display_options['fields']['field_image_copyright']['field'] = 'field_image_copyright';
  $handler->display->display_options['fields']['field_image_copyright']['relationship'] = 'field_teaser_image_fid';
  $handler->display->display_options['fields']['field_image_copyright']['label'] = '';
  $handler->display->display_options['fields']['field_image_copyright']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_copyright']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image_copyright']['element_wrapper_class'] = 'small medium';
  $handler->display->display_options['fields']['field_image_copyright']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Recipient */
  $handler->display->display_options['fields']['field_petition_recipient']['id'] = 'field_petition_recipient';
  $handler->display->display_options['fields']['field_petition_recipient']['table'] = 'field_data_field_petition_recipient';
  $handler->display->display_options['fields']['field_petition_recipient']['field'] = 'field_petition_recipient';
  $handler->display->display_options['fields']['field_petition_recipient']['label'] = '';
  $handler->display->display_options['fields']['field_petition_recipient']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_petition_recipient']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_petition_recipient']['element_wrapper_class'] = 'medium';
  $handler->display->display_options['fields']['field_petition_recipient']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'strong';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Feld: Global: Feldgruppe */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Progress';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'php',
    1 => 'field_petition_required',
    2 => 'field_petition_signings',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'clear';
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<div class="pw-progress-wrapper"><div class="pw-progress" style="width: <?php
  $required = $data->_field_data[\'nid\'][\'entity\']->field_petition_required[\'und\'][0][\'value\'];
  $signings = $data->_field_data[\'nid\'][\'entity\']->field_petition_signings[\'und\'][0][\'value\'];
  $progress = $data->_field_data[\'nid\'][\'entity\']->field_petition_progress[\'und\'][0][\'value\'];
  if($signings > $required){
    $progress = 100;
  }
  print $progress; ?>%;"></div></div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Inhalt: Required Signings */
  $handler->display->display_options['fields']['field_petition_required']['id'] = 'field_petition_required';
  $handler->display->display_options['fields']['field_petition_required']['table'] = 'field_data_field_petition_required';
  $handler->display->display_options['fields']['field_petition_required']['field'] = 'field_petition_required';
  $handler->display->display_options['fields']['field_petition_required']['label'] = 'Benötigte Unterschriften';
  $handler->display->display_options['fields']['field_petition_required']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_petition_required']['element_class'] = 'medium';
  $handler->display->display_options['fields']['field_petition_required']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['field_petition_required']['element_label_class'] = 'label-inline';
  $handler->display->display_options['fields']['field_petition_required']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_petition_required']['element_wrapper_class'] = 'medium clear';
  $handler->display->display_options['fields']['field_petition_required']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_petition_required']['settings'] = array(
    'thousand_separator' => '.',
    'prefix_suffix' => 0,
  );
  /* Feld: Inhalt: Signings */
  $handler->display->display_options['fields']['field_petition_signings']['id'] = 'field_petition_signings';
  $handler->display->display_options['fields']['field_petition_signings']['table'] = 'field_data_field_petition_signings';
  $handler->display->display_options['fields']['field_petition_signings']['field'] = 'field_petition_signings';
  $handler->display->display_options['fields']['field_petition_signings']['label'] = '';
  $handler->display->display_options['fields']['field_petition_signings']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_petition_signings']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_petition_signings']['element_wrapper_class'] = 'small light';
  $handler->display->display_options['fields']['field_petition_signings']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_petition_signings']['settings'] = array(
    'thousand_separator' => '.',
    'prefix_suffix' => 1,
  );
  /* Feld: Inhalt: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'text-right link-sign clear';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'zur Petition';
  /* Feld: Inhalt: Blog Kategorie */
  $handler->display->display_options['fields']['field_blogpost_categories']['id'] = 'field_blogpost_categories';
  $handler->display->display_options['fields']['field_blogpost_categories']['table'] = 'field_data_field_blogpost_categories';
  $handler->display->display_options['fields']['field_blogpost_categories']['field'] = 'field_blogpost_categories';
  $handler->display->display_options['fields']['field_blogpost_categories']['label'] = '';
  $handler->display->display_options['fields']['field_blogpost_categories']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blogpost_categories']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_blogpost_categories']['element_wrapper_class'] = 'icon-taxonomy clearfix clear-both';
  $handler->display->display_options['fields']['field_blogpost_categories']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blogpost_categories']['delta_offset'] = '0';
  /* Feld: Inhalt: Anzahl an Kommentaren */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['path'] = 'node/[nid]#comments';
  $handler->display->display_options['fields']['comment_count']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['alt'] = 'zu den Kommentaren';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['comment_count']['element_wrapper_class'] = 'comment-count clear-both';
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['separator'] = '';
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count comments';
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit petition';
  /* Feld: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'nid' => 0,
    'sharethis' => 0,
    'title' => 0,
    'fieldset' => 0,
    'field_teaser_image' => 0,
    'field_image_copyright' => 0,
    'field_petition_recipient' => 0,
    'body' => 0,
    'field_petition_required' => 0,
    'field_petition_signings' => 0,
    'view_node' => 0,
    'field_blogpost_blogtags' => 0,
    'comment_count' => 0,
    'expression' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Inhaltsversion: Beitrags-ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_revision';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;

  /* Display: Blog Teaser */
  $handler = $view->new_display('panel_pane', 'Blog Teaser', 'blog_teaser');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Unterschreiben Sie unsere Petition zum Thema [field_blogpost_categories]';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'comment push-bottom-l';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix content-inner';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Beziehung: Inhalt: Teaser image (field_teaser_image:fid) */
  $handler->display->display_options['relationships']['field_teaser_image_fid']['id'] = 'field_teaser_image_fid';
  $handler->display->display_options['relationships']['field_teaser_image_fid']['table'] = 'field_data_field_teaser_image';
  $handler->display->display_options['relationships']['field_teaser_image_fid']['field'] = 'field_teaser_image_fid';
  /* Beziehung: Inhalt: Blog Kategorie (field_blogpost_categories) */
  $handler->display->display_options['relationships']['field_blogpost_categories_tid']['id'] = 'field_blogpost_categories_tid';
  $handler->display->display_options['relationships']['field_blogpost_categories_tid']['table'] = 'field_data_field_blogpost_categories';
  $handler->display->display_options['relationships']['field_blogpost_categories_tid']['field'] = 'field_blogpost_categories_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Feld: Inhalt: Progress */
  $handler->display->display_options['fields']['field_petition_progress']['id'] = 'field_petition_progress';
  $handler->display->display_options['fields']['field_petition_progress']['table'] = 'field_data_field_petition_progress';
  $handler->display->display_options['fields']['field_petition_progress']['field'] = 'field_petition_progress';
  $handler->display->display_options['fields']['field_petition_progress']['label'] = '';
  $handler->display->display_options['fields']['field_petition_progress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_petition_progress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_petition_progress']['type'] = 'computed_field_unsanitized';
  /* Feld: Global: Feldgruppe */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Teaser image wrapper';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_teaser_image',
    1 => 'field_image_copyright',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'float-left push-bottom-s push-right-m';
  /* Feld: Inhalt: Teaser image */
  $handler->display->display_options['fields']['field_teaser_image']['id'] = 'field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['table'] = 'field_data_field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['field'] = 'field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_teaser_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_image']['settings'] = array(
    'image_style' => 'pw_landscape_l__normal',
    'image_link' => 'content',
  );
  /* Feld: Datei: copyright */
  $handler->display->display_options['fields']['field_image_copyright']['id'] = 'field_image_copyright';
  $handler->display->display_options['fields']['field_image_copyright']['table'] = 'field_data_field_image_copyright';
  $handler->display->display_options['fields']['field_image_copyright']['field'] = 'field_image_copyright';
  $handler->display->display_options['fields']['field_image_copyright']['relationship'] = 'field_teaser_image_fid';
  $handler->display->display_options['fields']['field_image_copyright']['label'] = '';
  $handler->display->display_options['fields']['field_image_copyright']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_copyright']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image_copyright']['element_wrapper_class'] = 'small medium';
  $handler->display->display_options['fields']['field_image_copyright']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'push-bottom-s';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Recipient */
  $handler->display->display_options['fields']['field_petition_recipient']['id'] = 'field_petition_recipient';
  $handler->display->display_options['fields']['field_petition_recipient']['table'] = 'field_data_field_petition_recipient';
  $handler->display->display_options['fields']['field_petition_recipient']['field'] = 'field_petition_recipient';
  $handler->display->display_options['fields']['field_petition_recipient']['label'] = '';
  $handler->display->display_options['fields']['field_petition_recipient']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_petition_recipient']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_petition_recipient']['element_wrapper_class'] = 'medium';
  $handler->display->display_options['fields']['field_petition_recipient']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Feld: Inhalt: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'text-right link-sign';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'zur Petition';
  /* Feld: Global: Feldgruppe */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Progress';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'php',
    1 => 'field_petition_required',
    2 => 'field_petition_signings',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'clear';
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<div class="pw-petition-progress-wrapper"><div class="pw-petition-progress" style="width: <?php
  $required = $data->_field_data[\'nid\'][\'entity\']->field_petition_required[\'und\'][0][\'value\'];
  $signings = $data->_field_data[\'nid\'][\'entity\']->field_petition_signings[\'und\'][0][\'value\'];
  $progress = $data->_field_data[\'nid\'][\'entity\']->field_petition_progress[\'und\'][0][\'value\'];
  if($signings > $required){
    $progress = 100;
  }
  print $progress; ?>%;"></div></div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Inhalt: Required Signings */
  $handler->display->display_options['fields']['field_petition_required']['id'] = 'field_petition_required';
  $handler->display->display_options['fields']['field_petition_required']['table'] = 'field_data_field_petition_required';
  $handler->display->display_options['fields']['field_petition_required']['field'] = 'field_petition_required';
  $handler->display->display_options['fields']['field_petition_required']['label'] = 'Benötigte Unterschriften';
  $handler->display->display_options['fields']['field_petition_required']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_petition_required']['element_class'] = 'medium';
  $handler->display->display_options['fields']['field_petition_required']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['field_petition_required']['element_label_class'] = 'label-inline';
  $handler->display->display_options['fields']['field_petition_required']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_petition_required']['element_wrapper_class'] = 'medium clear';
  $handler->display->display_options['fields']['field_petition_required']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_petition_required']['settings'] = array(
    'thousand_separator' => '.',
    'prefix_suffix' => 0,
  );
  /* Feld: Inhalt: Signings */
  $handler->display->display_options['fields']['field_petition_signings']['id'] = 'field_petition_signings';
  $handler->display->display_options['fields']['field_petition_signings']['table'] = 'field_data_field_petition_signings';
  $handler->display->display_options['fields']['field_petition_signings']['field'] = 'field_petition_signings';
  $handler->display->display_options['fields']['field_petition_signings']['label'] = '';
  $handler->display->display_options['fields']['field_petition_signings']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_petition_signings']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_petition_signings']['element_wrapper_class'] = 'small light';
  $handler->display->display_options['fields']['field_petition_signings']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_petition_signings']['settings'] = array(
    'thousand_separator' => '.',
    'prefix_suffix' => 1,
  );
  /* Feld: Inhalt: Blog Kategorie */
  $handler->display->display_options['fields']['field_blogpost_categories']['id'] = 'field_blogpost_categories';
  $handler->display->display_options['fields']['field_blogpost_categories']['table'] = 'field_data_field_blogpost_categories';
  $handler->display->display_options['fields']['field_blogpost_categories']['field'] = 'field_blogpost_categories';
  $handler->display->display_options['fields']['field_blogpost_categories']['label'] = '';
  $handler->display->display_options['fields']['field_blogpost_categories']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blogpost_categories']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_blogpost_categories']['element_wrapper_class'] = 'icon-taxonomy clearfix clear-both';
  $handler->display->display_options['fields']['field_blogpost_categories']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blogpost_categories']['delta_offset'] = '0';
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit petition';
  /* Feld: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'nid' => 0,
    'sharethis' => 0,
    'title' => 0,
    'fieldset' => 0,
    'field_teaser_image' => 0,
    'field_image_copyright' => 0,
    'field_petition_recipient' => 0,
    'body' => 0,
    'field_petition_required' => 0,
    'field_petition_signings' => 0,
    'view_node' => 0,
    'field_blogpost_blogtags' => 0,
    'comment_count' => 0,
    'expression' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Inhalt: Blog Kategorie (field_blogpost_categories) */
  $handler->display->display_options['arguments']['field_blogpost_categories_tid']['id'] = 'field_blogpost_categories_tid';
  $handler->display->display_options['arguments']['field_blogpost_categories_tid']['table'] = 'field_data_field_blogpost_categories';
  $handler->display->display_options['arguments']['field_blogpost_categories_tid']['field'] = 'field_blogpost_categories_tid';
  $handler->display->display_options['arguments']['field_blogpost_categories_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_blogpost_categories_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_blogpost_categories_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_blogpost_categories_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_blogpost_categories_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_blogpost_categories_tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['field_blogpost_categories_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_blogpost_categories_tid']['default_argument_options']['vocabularies'] = array(
    'blogcategories' => 'blogcategories',
  );
  $handler->display->display_options['arguments']['field_blogpost_categories_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_blogpost_categories_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_blogpost_categories_tid']['summary_options']['items_per_page'] = '25';

  /* Display: Block Related Petitions */
  $handler = $view->new_display('block', 'Block Related Petitions', 'petitions_related');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Weitere Petitionen';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sortierkriterien: Inhalt: Signings (field_petition_signings) */
  $handler->display->display_options['sorts']['field_petition_signings_value']['id'] = 'field_petition_signings_value';
  $handler->display->display_options['sorts']['field_petition_signings_value']['table'] = 'field_data_field_petition_signings';
  $handler->display->display_options['sorts']['field_petition_signings_value']['field'] = 'field_petition_signings_value';
  $handler->display->display_options['sorts']['field_petition_signings_value']['order'] = 'DESC';
  /* Sortierkriterien: Inhalt: Datum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'hour';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'pw_petition' => 'pw_petition',
  );
  /* Filterkriterium: Inhalt: Petition Starter (field_petition_starter) */
  $handler->display->display_options['filters']['field_petition_starter_value']['id'] = 'field_petition_starter_value';
  $handler->display->display_options['filters']['field_petition_starter_value']['table'] = 'field_data_field_petition_starter';
  $handler->display->display_options['filters']['field_petition_starter_value']['field'] = 'field_petition_starter_value';
  $handler->display->display_options['filters']['field_petition_starter_value']['value'] = 'abgeordnetenwatch.de';
  /* Filterkriterium: Inhalt: Inhalt UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['operator'] = '!=';
  $handler->display->display_options['filters']['uuid']['value'] = '46c8b047-f95f-4aea-982d-bf7e205ab3b0';
  $handler->display->display_options['block_description'] = 'AW Petition Related';
  $translatables['pw_petitions'] = array(
    t('Master'),
    t('PetitionPlus'),
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
    t('Alle'),
    t('Block'),
    t('Block Progress'),
    t('Menu Block'),
    t('Petitionen'),
    t('alle Petitionen'),
    t('Zeichnen Sie die Petitionen von abgeordnetenwatch.de und bitten Sie über Ihre Netzwerke auch interessierte Freunde und Bekannte dies zu tun. Gemeinsam für mehr Transparenz und gegen Korruption! <a href="/petitionen" class="read-more">alle Petitionen</a>'),
    t('Diese Petition mitzeichnen'),
    t('Petitions Sidebar'),
    t('Teaser image wrapper'),
    t('Progress'),
    t('Benötigte Unterschriften'),
    t('zur Petition'),
    t('zu den Kommentaren'),
    t('.'),
    t('edit petition'),
    t('Blog Teaser'),
    t('Unterschreiben Sie unsere Petition zum Thema [field_blogpost_categories]'),
    t('Bild von field_teaser_image'),
    t('Begriff aus field_blogpost_categories'),
    t('View panes'),
    t('Block Related Petitions'),
    t('Weitere Petitionen'),
    t('AW Petition Related'),
  );
  $export['pw_petitions'] = $view;

  $view = new view();
  $view->name = 'pw_tag_clouds';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'PW Tag Clouds';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Abgeordnetenbestechung';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '42';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'weiter';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'float-left push-right-m';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = 'clearfix push-bottom-s';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Kopfbereich: Global: Textbereich */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="push-bottom-s medium">Diese Schlagworte werden in unserem Blog zu dem Thema häufig verwendet:</div>';
  $handler->display->display_options['header']['area']['format'] = 'managed_content';
  /* Fußbereich: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="text-right"><a href="/taxonomy/term/6179" class="read-more">Alle Blogartikel zum Thema</a></div>';
  /* Beziehung: Taxonomie-Begriff: Inhalt mit Begriff */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Feld: COUNT(Inhaltsversion: Beitrags-ID) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node_revision';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$count = $row->nid - 3;
if ($count >10){$count = 10;}
return $count;';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Taxonomie-Begriff: Begriff-ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Feld: Taxonomie-Begriff: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'taxonomy/term/[tid]?field_blogpost_categories_tid=6167';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'tagadelic level[php]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Sortierkriterien: Global: Zufall */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filterkriterium: Taxonomie-Vokabular: Maschinenlesbarer Name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'blogtags' => 'blogtags',
    'tags' => 'tags',
  );
  /* Filterkriterium: COUNT(Inhaltsversion: Beitrags-ID) */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node_revision';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['nid']['group_type'] = 'count';
  $handler->display->display_options['filters']['nid']['operator'] = '>';
  $handler->display->display_options['filters']['nid']['value']['value'] = '3';

  /* Display: Nebeneinkünfte */
  $handler = $view->new_display('block', 'Nebeneinkünfte', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Nebeneinkünfte';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: COUNT(Inhaltsversion: Beitrags-ID) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node_revision';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$count = $row->nid - 3;
if ($count >10){$count = 10;}
return $count;';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Taxonomie-Begriff: Begriff-ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Feld: Taxonomie-Begriff: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'taxonomy/term/[tid]?field_blogpost_categories_tid=6179';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'tagadelic level[php]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Taxonomie-Vokabular: Maschinenlesbarer Name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'blogtags' => 'blogtags',
    'tags' => 'tags',
  );
  /* Filterkriterium: COUNT(Inhaltsversion: Beitrags-ID) */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node_revision';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['nid']['group_type'] = 'count';
  $handler->display->display_options['filters']['nid']['operator'] = '>=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '4';
  /* Filterkriterium: Inhalt: Blog Kategorie (field_blogpost_categories) */
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['id'] = 'field_blogpost_categories_tid';
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['table'] = 'field_data_field_blogpost_categories';
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['field'] = 'field_blogpost_categories_tid';
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['value'] = array(
    6179 => '6179',
  );
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['vocabulary'] = 'blogcategories';

  /* Display: Lobbyismus */
  $handler = $view->new_display('block', 'Lobbyismus', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lobbyismus';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Fußbereich: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="text-right"><a href="/taxonomy/term/6178" class="read-more">Alle Blogartikel zum Thema</a></div>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: COUNT(Inhaltsversion: Beitrags-ID) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node_revision';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$count = $row->nid - 1;
if ($count >10){$count = 10;}
return $count;';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Taxonomie-Begriff: Begriff-ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Feld: Taxonomie-Begriff: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'taxonomy/term/[tid]?field_blogpost_categories_tid=6167';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'tagadelic level[php]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Taxonomie-Vokabular: Maschinenlesbarer Name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'blogtags' => 'blogtags',
    'tags' => 'tags',
  );
  /* Filterkriterium: COUNT(Inhaltsversion: Beitrags-ID) */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node_revision';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['nid']['group_type'] = 'count';
  $handler->display->display_options['filters']['nid']['operator'] = '>=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '3';
  /* Filterkriterium: Inhalt: Blog Kategorie (field_blogpost_categories) */
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['id'] = 'field_blogpost_categories_tid';
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['table'] = 'field_data_field_blogpost_categories';
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['field'] = 'field_blogpost_categories_tid';
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['value'] = array(
    6178 => '6178',
  );
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['vocabulary'] = 'blogcategories';

  /* Display: Abgeordnetenbestechung */
  $handler = $view->new_display('block', 'Abgeordnetenbestechung', 'block_3');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Fußbereich: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="text-right"><a href="/taxonomy/term/6167" class="read-more">Alle Blogartikel zum Thema</a></div>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: COUNT(Inhaltsversion: Beitrags-ID) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node_revision';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$count = $row->nid;
if ($count >10){$count = 10;}
return $count;';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Taxonomie-Begriff: Begriff-ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Feld: Taxonomie-Begriff: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'taxonomy/term/[tid]?field_blogpost_categories_tid=6167';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'tagadelic level[php]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Taxonomie-Vokabular: Maschinenlesbarer Name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'blogtags' => 'blogtags',
    'tags' => 'tags',
  );
  /* Filterkriterium: COUNT(Inhaltsversion: Beitrags-ID) */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node_revision';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['nid']['group_type'] = 'count';
  $handler->display->display_options['filters']['nid']['operator'] = '>=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '2';
  /* Filterkriterium: Inhalt: Blog Kategorie (field_blogpost_categories) */
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['id'] = 'field_blogpost_categories_tid';
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['table'] = 'field_data_field_blogpost_categories';
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['field'] = 'field_blogpost_categories_tid';
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['value'] = array(
    6167 => '6167',
  );
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['vocabulary'] = 'blogcategories';

  /* Display: Menu Blog Tags */
  $handler = $view->new_display('block', 'Menu Blog Tags', 'blog_tags');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Unsere wichtigsten Themen';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: COUNT(Inhaltsversion: Beitrags-ID) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node_revision';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$count = $row->nid - 2;
if ($count >10){$count = 10;}
return $count;';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Taxonomie-Begriff: Begriff-ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Feld: Taxonomie-Begriff: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'taxonomy/term/[tid]?field_blogpost_categories_tid=6179';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'tagadelic level[php]';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Taxonomie-Vokabular: Maschinenlesbarer Name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'blogcategories' => 'blogcategories',
    'tags' => 'tags',
  );
  /* Filterkriterium: COUNT(Inhaltsversion: Beitrags-ID) */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node_revision';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['nid']['group_type'] = 'count';
  $handler->display->display_options['filters']['nid']['operator'] = '>=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '3';
  /* Filterkriterium: Inhalt: Blog Kategorie (field_blogpost_categories) */
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['id'] = 'field_blogpost_categories_tid';
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['table'] = 'field_data_field_blogpost_categories';
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['field'] = 'field_blogpost_categories_tid';
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['value'] = array(
    6179 => '6179',
  );
  $handler->display->display_options['filters']['field_blogpost_categories_tid']['vocabulary'] = 'blogcategories';
  $translatables['pw_tag_clouds'] = array(
    t('Master'),
    t('Abgeordnetenbestechung'),
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
    t('<div class="push-bottom-s medium">Diese Schlagworte werden in unserem Blog zu dem Thema häufig verwendet:</div>'),
    t('<div class="text-right"><a href="/taxonomy/term/6179" class="read-more">Alle Blogartikel zum Thema</a></div>'),
    t('Beitrag'),
    t('.'),
    t('Nebeneinkünfte'),
    t('Lobbyismus'),
    t('<div class="text-right"><a href="/taxonomy/term/6178" class="read-more">Alle Blogartikel zum Thema</a></div>'),
    t('<div class="text-right"><a href="/taxonomy/term/6167" class="read-more">Alle Blogartikel zum Thema</a></div>'),
    t('Menu Blog Tags'),
    t('Unsere wichtigsten Themen'),
  );
  $export['pw_tag_clouds'] = $view;

  return $export;
}
