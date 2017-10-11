<?php
/**
 * @file
 * pw_api.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pw_api_user_default_permissions() {
  $permissions = array();

  // Exported permission: access authorized api.
  $permissions['access authorized api'] = array(
    'name' => 'access authorized api',
    'roles' => array(
      0 => 'API User',
      1 => 'administrator',
    ),
    'module' => 'pw_api',
  );

  return $permissions;
}
