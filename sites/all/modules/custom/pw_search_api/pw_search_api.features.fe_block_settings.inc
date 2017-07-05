<?php
/**
 * @file
 * pw_search_api.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pw_search_api_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '1',
      ),
      'parliamentwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'parliamentwatch',
        'weight' => '1',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '-10',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views--exp-pw_search_api_main-page'] = array(
    'cache' => '-1',
    'css_class' => 'compact-form',
    'custom' => '0',
    'delta' => '-exp-pw_search_api_main-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'parliamentwatch',
        'weight' => '-53',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'abgeordnetenwatch.de durchsuchen',
    'visibility' => '1',
  );

  return $export;
}
