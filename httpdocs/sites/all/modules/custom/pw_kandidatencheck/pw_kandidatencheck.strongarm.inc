<?php
/**
 * @file
 * pw_kandidatencheck.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pw_kandidatencheck_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_pw_kc_position';
  $strongarm->value = 'edit-rabbit-hole';
  $export['additional_settings__active_tab_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_pw_kc_thesis';
  $strongarm->value = 'edit-rabbit-hole';
  $export['additional_settings__active_tab_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clear_all_pw_kc_position';
  $strongarm->value = 0;
  $export['clear_all_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clear_all_pw_kc_thesis';
  $strongarm->value = 0;
  $export['clear_all_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_pw_kc_position';
  $strongarm->value = '0';
  $export['comment_anonymous_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_pw_kc_thesis';
  $strongarm->value = '0';
  $export['comment_anonymous_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_pw_kc_position';
  $strongarm->value = 1;
  $export['comment_default_mode_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_pw_kc_thesis';
  $strongarm->value = 1;
  $export['comment_default_mode_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_pw_kc_position';
  $strongarm->value = '50';
  $export['comment_default_per_page_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_pw_kc_thesis';
  $strongarm->value = '50';
  $export['comment_default_per_page_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_pw_kc_position';
  $strongarm->value = 1;
  $export['comment_form_location_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_pw_kc_thesis';
  $strongarm->value = 1;
  $export['comment_form_location_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_pw_kc_position';
  $strongarm->value = '1';
  $export['comment_preview_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_pw_kc_thesis';
  $strongarm->value = '1';
  $export['comment_preview_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_pw_kc_position';
  $strongarm->value = '1';
  $export['comment_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_pw_kc_thesis';
  $strongarm->value = '1';
  $export['comment_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_pw_kc_position';
  $strongarm->value = 1;
  $export['comment_subject_field_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_pw_kc_thesis';
  $strongarm->value = 1;
  $export['comment_subject_field_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_show_form_table_pw_kc_position';
  $strongarm->value = 1;
  $export['custom_breadcrumbs_show_form_table_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_show_form_table_pw_kc_thesis';
  $strongarm->value = 1;
  $export['custom_breadcrumbs_show_form_table_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_pw_kc_position';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_pw_kc_thesis';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_pw_kc_position';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_pw_kc_thesis';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_pw_kc_position';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_pw_kc_thesis';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__pw_kc_position';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'tile' => array(
        'custom_settings' => FALSE,
      ),
      'list_item' => array(
        'custom_settings' => FALSE,
      ),
      'embedded' => array(
        'custom_settings' => TRUE,
      ),
      'tabular' => array(
        'custom_settings' => FALSE,
      ),
      'timeline' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'redirect' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__pw_kc_thesis';
  $strongarm->value = array(
    'view_modes' => array(
      'embedded' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'tile' => array(
        'custom_settings' => FALSE,
      ),
      'list_item' => array(
        'custom_settings' => FALSE,
      ),
      'tabular' => array(
        'custom_settings' => FALSE,
      ),
      'timeline' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'redirect' => array(
          'weight' => '5',
        ),
        'xmlsitemap' => array(
          'weight' => '7',
        ),
        'metatags' => array(
          'weight' => '8',
        ),
        'rabbit_hole' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__pw_kc_votes';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '4',
        ),
        'redirect' => array(
          'weight' => '3',
        ),
        'name' => array(
          'weight' => '0',
        ),
        'description' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__pw_kc_votes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_pw_kc_position';
  $strongarm->value = '0';
  $export['language_content_type_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_pw_kc_thesis';
  $strongarm->value = '0';
  $export['language_content_type_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_label_pw_kc_position';
  $strongarm->value = 'Content limited to @limit characters, remaining: <strong>@remaining</strong>';
  $export['maxlength_js_label_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_label_pw_kc_thesis';
  $strongarm->value = 'Content limited to @limit characters, remaining: <strong>@remaining</strong>';
  $export['maxlength_js_label_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_pw_kc_position';
  $strongarm->value = '';
  $export['maxlength_js_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_pw_kc_thesis';
  $strongarm->value = '';
  $export['maxlength_js_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_pw_kc_position';
  $strongarm->value = array();
  $export['menu_options_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_pw_kc_thesis';
  $strongarm->value = array();
  $export['menu_options_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_pw_kc_position';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_pw_kc_thesis';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pw_kc_position';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pw_kc_thesis';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_pw_kc_position';
  $strongarm->value = '1';
  $export['node_preview_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_pw_kc_thesis';
  $strongarm->value = '1';
  $export['node_preview_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_pw_kc_position';
  $strongarm->value = 0;
  $export['node_submitted_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_pw_kc_thesis';
  $strongarm->value = 0;
  $export['node_submitted_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pw_kc_position_pattern';
  $strongarm->value = '';
  $export['pathauto_node_pw_kc_position_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pw_kc_thesis_pattern';
  $strongarm->value = '';
  $export['pathauto_node_pw_kc_thesis_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pw_kc_votes_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_pw_kc_votes_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resp_img_node_pw_kc_position_body';
  $strongarm->value = 0;
  $export['resp_img_node_pw_kc_position_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resp_img_node_pw_kc_thesis_body';
  $strongarm->value = 0;
  $export['resp_img_node_pw_kc_thesis_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resp_img_taxonomy_term_pw_kc_votes_field_pw_kc_votes_classname';
  $strongarm->value = 0;
  $export['resp_img_taxonomy_term_pw_kc_votes_field_pw_kc_votes_classname'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_module_pw_kc_position';
  $strongarm->value = 'rh_node';
  $export['rh_module_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_module_pw_kc_thesis';
  $strongarm->value = 'rh_node';
  $export['rh_module_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_action_pw_kc_position';
  $strongarm->value = '3';
  $export['rh_node_action_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_action_pw_kc_thesis';
  $strongarm->value = '3';
  $export['rh_node_action_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_override_pw_kc_position';
  $strongarm->value = 0;
  $export['rh_node_override_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_override_pw_kc_thesis';
  $strongarm->value = 0;
  $export['rh_node_override_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_pw_kc_position';
  $strongarm->value = 'profile/[node:field_pw_kc_user_reference]';
  $export['rh_node_redirect_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_pw_kc_thesis';
  $strongarm->value = '[node:field_parliament]';
  $export['rh_node_redirect_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_response_pw_kc_position';
  $strongarm->value = '301';
  $export['rh_node_redirect_response_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_response_pw_kc_thesis';
  $strongarm->value = '301';
  $export['rh_node_redirect_response_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_pw_kc_position';
  $strongarm->value = 'Speichern und Felder hinzufügen';
  $export['save_continue_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_pw_kc_thesis';
  $strongarm->value = 'Speichern und Felder hinzufügen';
  $export['save_continue_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'siblingmenutree_display_pw_kc_position';
  $strongarm->value = '0';
  $export['siblingmenutree_display_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'siblingmenutree_display_pw_kc_thesis';
  $strongarm->value = '0';
  $export['siblingmenutree_display_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'siblingmenutree_enable_pw_kc_position';
  $strongarm->value = 0;
  $export['siblingmenutree_enable_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'siblingmenutree_enable_pw_kc_thesis';
  $strongarm->value = 0;
  $export['siblingmenutree_enable_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'siblingmenutree_title_pw_kc_position';
  $strongarm->value = '';
  $export['siblingmenutree_title_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'siblingmenutree_title_pw_kc_thesis';
  $strongarm->value = '';
  $export['siblingmenutree_title_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'siblingmenutree_weight_pw_kc_position';
  $strongarm->value = '0';
  $export['siblingmenutree_weight_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'siblingmenutree_weight_pw_kc_thesis';
  $strongarm->value = '0';
  $export['siblingmenutree_weight_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submenutree_display_pw_kc_position';
  $strongarm->value = '0';
  $export['submenutree_display_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submenutree_display_pw_kc_thesis';
  $strongarm->value = '0';
  $export['submenutree_display_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submenutree_enable_pw_kc_position';
  $strongarm->value = 0;
  $export['submenutree_enable_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submenutree_enable_pw_kc_thesis';
  $strongarm->value = 0;
  $export['submenutree_enable_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submenutree_node_type_pw_kc_position';
  $strongarm->value = '0';
  $export['submenutree_node_type_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submenutree_node_type_pw_kc_thesis';
  $strongarm->value = '0';
  $export['submenutree_node_type_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submenutree_title_pw_kc_position';
  $strongarm->value = '';
  $export['submenutree_title_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submenutree_title_pw_kc_thesis';
  $strongarm->value = '';
  $export['submenutree_title_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submenutree_weight_pw_kc_position';
  $strongarm->value = '0';
  $export['submenutree_weight_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submenutree_weight_pw_kc_thesis';
  $strongarm->value = '0';
  $export['submenutree_weight_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sync_translations_pw_kc_position';
  $strongarm->value = '0';
  $export['sync_translations_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sync_translations_pw_kc_thesis';
  $strongarm->value = '0';
  $export['sync_translations_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_default_pw_kc_position';
  $strongarm->value = '0';
  $export['weight_default_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_default_pw_kc_thesis';
  $strongarm->value = '0';
  $export['weight_default_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_enabled_pw_kc_position';
  $strongarm->value = '0';
  $export['weight_enabled_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_enabled_pw_kc_thesis';
  $strongarm->value = '1';
  $export['weight_enabled_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_menu_pw_kc_position';
  $strongarm->value = '0';
  $export['weight_menu_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_menu_pw_kc_thesis';
  $strongarm->value = '0';
  $export['weight_menu_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_range_pw_kc_position';
  $strongarm->value = '20';
  $export['weight_range_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_range_pw_kc_thesis';
  $strongarm->value = '50';
  $export['weight_range_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_pw_kc_position';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_pw_kc_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_pw_kc_thesis';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_pw_kc_thesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_pw_kc_votes';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_pw_kc_votes'] = $strongarm;

  return $export;
}
