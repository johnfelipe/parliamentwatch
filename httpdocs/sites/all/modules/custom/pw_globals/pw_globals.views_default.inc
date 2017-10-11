<?php
/**
 * @file
 * pw_globals.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_globals_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pw_testimonials_header';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PW Testimonials Header';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'relative push-bottom-m';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'Jetzt fördern';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Feld: Inhalt: Porträt */
  $handler->display->display_options['fields']['field_testimonial_portrait']['id'] = 'field_testimonial_portrait';
  $handler->display->display_options['fields']['field_testimonial_portrait']['table'] = 'field_data_field_testimonial_portrait';
  $handler->display->display_options['fields']['field_testimonial_portrait']['field'] = 'field_testimonial_portrait';
  $handler->display->display_options['fields']['field_testimonial_portrait']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_portrait']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_portrait']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_testimonial_portrait']['element_wrapper_class'] = 'float-left push-right-m img-rounded';
  $handler->display->display_options['fields']['field_testimonial_portrait']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_portrait']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_testimonial_portrait']['settings'] = array(
    'image_style' => 'pw_thumbnail_70',
    'image_link' => '',
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Feld: Inhalt: Zitat */
  $handler->display->display_options['fields']['field_testimonial_quote']['id'] = 'field_testimonial_quote';
  $handler->display->display_options['fields']['field_testimonial_quote']['table'] = 'field_data_field_testimonial_quote';
  $handler->display->display_options['fields']['field_testimonial_quote']['field'] = 'field_testimonial_quote';
  $handler->display->display_options['fields']['field_testimonial_quote']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_quote']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_testimonial_quote']['alter']['text'] = '<blockquote class="medium">[field_testimonial_quote]</blockquote>';
  $handler->display->display_options['fields']['field_testimonial_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_quote']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_testimonial_quote']['element_wrapper_class'] = 'small medium';
  $handler->display->display_options['fields']['field_testimonial_quote']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_quote']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Feld: Inhalt: Vollständiger Name */
  $handler->display->display_options['fields']['field_testimonial_fullname']['id'] = 'field_testimonial_fullname';
  $handler->display->display_options['fields']['field_testimonial_fullname']['table'] = 'field_data_field_testimonial_fullname';
  $handler->display->display_options['fields']['field_testimonial_fullname']['field'] = 'field_testimonial_fullname';
  $handler->display->display_options['fields']['field_testimonial_fullname']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_fullname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_fullname']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Sortierkriterien: Inhalt: Datum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'pw_testimonial' => 'pw_testimonial',
  );
  /* Filterkriterium: Inhalt: Anzeige Monat (field_testimonial_month) */
  $handler->display->display_options['filters']['field_testimonial_month_value']['id'] = 'field_testimonial_month_value';
  $handler->display->display_options['filters']['field_testimonial_month_value']['table'] = 'field_data_field_testimonial_month';
  $handler->display->display_options['filters']['field_testimonial_month_value']['field'] = 'field_testimonial_month_value';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['link_url'] = 'node/10508';
  $translatables['pw_testimonials_header'] = array(
    t('Master'),
    t('Jetzt fördern'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('<blockquote class="medium">[field_testimonial_quote]</blockquote>'),
    t('Block'),
    t('mehr'),
  );
  $export['pw_testimonials_header'] = $view;

  return $export;
}
