<?php
/**
 * @file
 * pw_committees.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_committees_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pw_committees_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pw_committees_node_info() {
  $items = array(
    'committee' => array(
      'name' => t('Committee'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
