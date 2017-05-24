<?php
/**
 * @file
 * pw_calendar_entries.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_calendar_entries_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pw_calendar_entries_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pw_calendar_entries_node_info() {
  $items = array(
    'committee_membership' => array(
      'name' => t('Committee Membership'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'speech' => array(
      'name' => t('Speech'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
