<?php
/**
 * @file
 * pw_profiles.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pw_profiles_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_calendar_entry';
  $strongarm->value = '0';
  $export['comment_anonymous_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_calendar_entry';
  $strongarm->value = '1';
  $export['comment_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_calendar_entry';
  $strongarm->value = 0;
  $export['comment_default_mode_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_calendar_entry';
  $strongarm->value = '50';
  $export['comment_default_per_page_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_calendar_entry';
  $strongarm->value = 0;
  $export['comment_form_location_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_calendar_entry';
  $strongarm->value = '0';
  $export['comment_preview_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_calendar_entry';
  $strongarm->value = 0;
  $export['comment_subject_field_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_calendar_entry';
  $strongarm->value = 0;
  $export['diff_enable_revisions_page_node_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_calendar_entry';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_calendar_entry';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings';
  $strongarm->value = '';
  $export['field_bundle_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__calendar_entry';
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
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
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
    ),
    'extra_fields' => array(
      'form' => array(
        'ckeditor' => array(
          'weight' => '12',
        ),
        'piwik' => array(
          'weight' => '16',
        ),
        'redirect' => array(
          'weight' => '15',
        ),
        'account' => array(
          'weight' => '5',
        ),
        'timezone' => array(
          'weight' => '14',
        ),
        'locale' => array(
          'weight' => '13',
        ),
        'overlay_control' => array(
          'weight' => '0',
        ),
        'mimemail' => array(
          'weight' => '7',
        ),
        'xmlsitemap' => array(
          'weight' => '18',
        ),
        'masquerade' => array(
          'weight' => '17',
        ),
        'metatags' => array(
          'weight' => '16',
        ),
      ),
      'display' => array(
        'summary' => array(
          'default' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
        ),
        'mimemail' => array(
          'default' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
        ),
        'masquerade' => array(
          'default' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
        ),
        'twitter' => array(
          'default' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '35',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_calendar_entry';
  $strongarm->value = '0';
  $export['language_content_type_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_calendar_entry';
  $strongarm->value = array();
  $export['menu_options_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_calendar_entry';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_calendar_entry';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_calendar_entry';
  $strongarm->value = '0';
  $export['node_preview_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_calendar_entry';
  $strongarm->value = 0;
  $export['node_submitted_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_calendar_entry_pattern';
  $strongarm->value = 'profile/[node:author]/calendar/[node:field-calendar-entry-date:custom:d-m-Y]/[node:title]';
  $export['pathauto_node_calendar_entry_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_list_position_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_list_position_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pw_profile_roles_for_view_mode_switch_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_pw_profile_roles_for_view_mode_switch_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'profile/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = 0;
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_calendar_entry';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_calendar_entry'] = $strongarm;

  return $export;
}
