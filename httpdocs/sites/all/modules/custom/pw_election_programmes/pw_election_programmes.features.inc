<?php
/**
 * @file
 * pw_election_programmes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_election_programmes_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pw_election_programmes_node_info() {
  $items = array(
    'election_programme' => array(
      'name' => t('Wahlprogramme'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
