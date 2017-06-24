<?php
/**
 * @file
 * pw_kandidatencheck.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_kandidatencheck_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pw_kandidatencheck_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pw_kandidatencheck_node_info() {
  $items = array(
    'pw_kc_position' => array(
      'name' => t('KC Position'),
      'base' => 'node_content',
      'description' => t('Position of an politician to a thesis'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'pw_kc_thesis' => array(
      'name' => t('KC Thesis'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function pw_kandidatencheck_weight_features_default_settings() {
  $settings = array();

  $settings['pw_kc_position'] = array(
    'enabled' => '0',
    'range' => '20',
    'menu_weight' => '0',
    'default' => '0',
    'sync_translations' => '0',
  );

  $settings['pw_kc_thesis'] = array(
    'enabled' => '1',
    'range' => '50',
    'menu_weight' => '0',
    'default' => '0',
    'sync_translations' => '0',
  );

  return $settings;
}
