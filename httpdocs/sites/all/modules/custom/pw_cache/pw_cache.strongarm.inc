<?php
/**
 * @file
 * pw_cache.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pw_cache_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_actions';
  $strongarm->value = array(
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $export['expire_comment_actions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_actions_blogpost';
  $strongarm->value = array(
    0 => 1,
    1 => 2,
    2 => 3,
    3 => 4,
    4 => 5,
  );
  $export['expire_comment_actions_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_actions_dialogue';
  $strongarm->value = array(
    0 => 1,
    1 => 2,
    2 => 3,
    3 => 4,
    4 => 5,
  );
  $export['expire_comment_actions_dialogue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_actions_pw_petition';
  $strongarm->value = array(
    0 => 1,
    1 => 2,
    2 => 3,
    3 => 4,
    4 => 5,
  );
  $export['expire_comment_actions_pw_petition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_comment_page';
  $strongarm->value = 1;
  $export['expire_comment_comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_comment_page_blogpost';
  $strongarm->value = 1;
  $export['expire_comment_comment_page_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_comment_page_dialogue';
  $strongarm->value = 1;
  $export['expire_comment_comment_page_dialogue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_comment_page_pw_petition';
  $strongarm->value = 1;
  $export['expire_comment_comment_page_pw_petition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_custom';
  $strongarm->value = 0;
  $export['expire_comment_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_custom_blogpost';
  $strongarm->value = 1;
  $export['expire_comment_custom_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_custom_dialogue';
  $strongarm->value = 1;
  $export['expire_comment_custom_dialogue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_custom_pages';
  $strongarm->value = '';
  $export['expire_comment_custom_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_custom_pages_blogpost';
  $strongarm->value = 'blog';
  $export['expire_comment_custom_pages_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_custom_pages_dialogue';
  $strongarm->value = '[comment:node:field-parliament]
[comment:node:field-parliament]/profile
profile/[comment:node:field-dialogue-recipient]';
  $export['expire_comment_custom_pages_dialogue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_custom_pages_pw_petition';
  $strongarm->value = 'petitionen
[node:field-parliament]/petitionen';
  $export['expire_comment_custom_pages_pw_petition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_custom_pw_petition';
  $strongarm->value = 1;
  $export['expire_comment_custom_pw_petition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_front_page';
  $strongarm->value = 0;
  $export['expire_comment_front_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_front_page_blogpost';
  $strongarm->value = 0;
  $export['expire_comment_front_page_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_front_page_dialogue';
  $strongarm->value = 0;
  $export['expire_comment_front_page_dialogue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_front_page_pw_petition';
  $strongarm->value = 0;
  $export['expire_comment_front_page_pw_petition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_node_page';
  $strongarm->value = 1;
  $export['expire_comment_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_node_page_blogpost';
  $strongarm->value = 1;
  $export['expire_comment_node_page_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_node_page_dialogue';
  $strongarm->value = 1;
  $export['expire_comment_node_page_dialogue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_node_page_pw_petition';
  $strongarm->value = 1;
  $export['expire_comment_node_page_pw_petition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_node_reference_pages';
  $strongarm->value = 0;
  $export['expire_comment_node_reference_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_node_reference_pages_blogpost';
  $strongarm->value = 0;
  $export['expire_comment_node_reference_pages_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_node_reference_pages_dialogue';
  $strongarm->value = 0;
  $export['expire_comment_node_reference_pages_dialogue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_node_reference_pages_pw_petition';
  $strongarm->value = 0;
  $export['expire_comment_node_reference_pages_pw_petition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_node_term_pages';
  $strongarm->value = 0;
  $export['expire_comment_node_term_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_node_term_pages_blogpost';
  $strongarm->value = 0;
  $export['expire_comment_node_term_pages_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_node_term_pages_dialogue';
  $strongarm->value = 0;
  $export['expire_comment_node_term_pages_dialogue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_node_term_pages_pw_petition';
  $strongarm->value = 0;
  $export['expire_comment_node_term_pages_pw_petition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_override_defaults_blogpost';
  $strongarm->value = 1;
  $export['expire_comment_override_defaults_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_override_defaults_dialogue';
  $strongarm->value = 1;
  $export['expire_comment_override_defaults_dialogue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_override_defaults_pw_petition';
  $strongarm->value = 1;
  $export['expire_comment_override_defaults_pw_petition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_reference_pages';
  $strongarm->value = 0;
  $export['expire_comment_reference_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_reference_pages_blogpost';
  $strongarm->value = 0;
  $export['expire_comment_reference_pages_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_reference_pages_dialogue';
  $strongarm->value = 0;
  $export['expire_comment_reference_pages_dialogue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_reference_pages_pw_petition';
  $strongarm->value = 0;
  $export['expire_comment_reference_pages_pw_petition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_file_actions';
  $strongarm->value = array(
    1 => 0,
    2 => 0,
  );
  $export['expire_file_actions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_file_custom';
  $strongarm->value = 0;
  $export['expire_file_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_file_custom_pages';
  $strongarm->value = '';
  $export['expire_file_custom_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_file_file';
  $strongarm->value = 0;
  $export['expire_file_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_file_front_page';
  $strongarm->value = 0;
  $export['expire_file_front_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_include_base_url';
  $strongarm->value = 0;
  $export['expire_include_base_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_menu_link_actions';
  $strongarm->value = array(
    1 => 0,
    2 => 0,
    3 => 0,
  );
  $export['expire_menu_link_actions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_menu_link_override_menus';
  $strongarm->value = array(
    'menu-calendar-options-menu' => '0',
    'devel' => '0',
    'features' => '0',
    'main-menu' => '0',
    'menu-main-menu-de' => '0',
    'management' => '0',
    'menu-meta-de' => '0',
    'menu-support-us-de' => '0',
    'navigation' => '0',
    'user-menu' => '0',
    'menu-elections-de' => '0',
    'menu-about-us-de' => '0',
  );
  $export['expire_menu_link_override_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_actions';
  $strongarm->value = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  $export['expire_node_actions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_actions_blogpost';
  $strongarm->value = array(
    0 => 2,
    1 => 3,
  );
  $export['expire_node_actions_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_actions_dialogue';
  $strongarm->value = array(
    0 => 1,
    1 => 2,
    2 => 3,
  );
  $export['expire_node_actions_dialogue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_actions_pw_petition';
  $strongarm->value = array(
    0 => 2,
    1 => 3,
  );
  $export['expire_node_actions_pw_petition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_custom';
  $strongarm->value = 0;
  $export['expire_node_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_custom_blogpost';
  $strongarm->value = 1;
  $export['expire_node_custom_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_custom_dialogue';
  $strongarm->value = 1;
  $export['expire_node_custom_dialogue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_custom_pages';
  $strongarm->value = '';
  $export['expire_node_custom_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_custom_pages_blogpost';
  $strongarm->value = 'blog';
  $export['expire_node_custom_pages_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_custom_pages_dialogue';
  $strongarm->value = '[node:field-parliament]
[node:field-parliament]/profile
profile/[node:field-dialogue-recipient]';
  $export['expire_node_custom_pages_dialogue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_custom_pages_pw_petition';
  $strongarm->value = 'petitionen
[node:field-parliament]/petitionen';
  $export['expire_node_custom_pages_pw_petition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_custom_pw_petition';
  $strongarm->value = 1;
  $export['expire_node_custom_pw_petition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_front_page';
  $strongarm->value = 0;
  $export['expire_node_front_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_front_page_blogpost';
  $strongarm->value = 0;
  $export['expire_node_front_page_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_front_page_dialogue';
  $strongarm->value = 0;
  $export['expire_node_front_page_dialogue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_front_page_pw_petition';
  $strongarm->value = 0;
  $export['expire_node_front_page_pw_petition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_node_page';
  $strongarm->value = 1;
  $export['expire_node_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_node_page_blogpost';
  $strongarm->value = 1;
  $export['expire_node_node_page_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_node_page_dialogue';
  $strongarm->value = 1;
  $export['expire_node_node_page_dialogue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_node_page_pw_petition';
  $strongarm->value = 1;
  $export['expire_node_node_page_pw_petition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_override_defaults_blogpost';
  $strongarm->value = 1;
  $export['expire_node_override_defaults_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_override_defaults_dialogue';
  $strongarm->value = 1;
  $export['expire_node_override_defaults_dialogue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_override_defaults_pw_petition';
  $strongarm->value = 1;
  $export['expire_node_override_defaults_pw_petition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_reference_pages';
  $strongarm->value = 1;
  $export['expire_node_reference_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_reference_pages_blogpost';
  $strongarm->value = 0;
  $export['expire_node_reference_pages_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_reference_pages_dialogue';
  $strongarm->value = 0;
  $export['expire_node_reference_pages_dialogue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_reference_pages_pw_petition';
  $strongarm->value = 0;
  $export['expire_node_reference_pages_pw_petition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_term_pages';
  $strongarm->value = 0;
  $export['expire_node_term_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_term_pages_blogpost';
  $strongarm->value = 0;
  $export['expire_node_term_pages_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_term_pages_dialogue';
  $strongarm->value = 0;
  $export['expire_node_term_pages_dialogue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_term_pages_pw_petition';
  $strongarm->value = 0;
  $export['expire_node_term_pages_pw_petition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_status';
  $strongarm->value = '2';
  $export['expire_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_actions';
  $strongarm->value = array(
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
  );
  $export['expire_user_actions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_custom';
  $strongarm->value = 1;
  $export['expire_user_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_custom_pages';
  $strongarm->value = '[user:field-user-parliament]/profile
[user:field-user-parliament]';
  $export['expire_user_custom_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_front_page';
  $strongarm->value = 0;
  $export['expire_user_front_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_reference_pages';
  $strongarm->value = 0;
  $export['expire_user_reference_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_term_pages';
  $strongarm->value = 0;
  $export['expire_user_term_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_user_page';
  $strongarm->value = 1;
  $export['expire_user_user_page'] = $strongarm;

  return $export;
}
