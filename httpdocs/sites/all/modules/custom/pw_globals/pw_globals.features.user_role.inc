<?php
/**
 * @file
 * pw_globals.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function pw_globals_user_default_roles() {
  $roles = array();

  // Exported role: API User.
  $roles['API User'] = array(
    'name' => 'API User',
    'weight' => '9',
    'machine_name' => 'api_user',
  );

  // Exported role: Content Manager.
  $roles['Content Manager'] = array(
    'name' => 'Content Manager',
    'weight' => '3',
    'machine_name' => 'content_manager',
  );

  return $roles;
}
