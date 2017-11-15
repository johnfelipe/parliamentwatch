<?php
/**
 * @file
 * pw_profiles.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pw_profiles_taxonomy_default_vocabularies() {
  return array(
    'committee' => array(
      'name' => 'Committee',
      'machine_name' => 'committee',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'committee_types' => array(
      'name' => 'Committee Types',
      'machine_name' => 'committee_types',
      'description' => 'types of committees for tagging committees',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'list_position' => array(
      'name' => 'List Position',
      'machine_name' => 'list_position',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'pw_profile_roles_for_view_mode_switch' => array(
      'name' => 'PW Profile Roles for View Mode Switch',
      'machine_name' => 'pw_profile_roles_for_view_mode_switch',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
