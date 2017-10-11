<?php
/**
 * @file
 * pw_kandidatencheck.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pw_kandidatencheck_user_default_permissions() {
  $permissions = array();

  // Exported permission: create pw_kc_position content.
  $permissions['create pw_kc_position content'] = array(
    'name' => 'create pw_kc_position content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create pw_kc_thesis content.
  $permissions['create pw_kc_thesis content'] = array(
    'name' => 'create pw_kc_thesis content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any pw_kc_position content.
  $permissions['delete any pw_kc_position content'] = array(
    'name' => 'delete any pw_kc_position content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any pw_kc_thesis content.
  $permissions['delete any pw_kc_thesis content'] = array(
    'name' => 'delete any pw_kc_thesis content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own pw_kc_position content.
  $permissions['delete own pw_kc_position content'] = array(
    'name' => 'delete own pw_kc_position content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own pw_kc_thesis content.
  $permissions['delete own pw_kc_thesis content'] = array(
    'name' => 'delete own pw_kc_thesis content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete terms in 34.
  $permissions['delete terms in 34'] = array(
    'name' => 'delete terms in 34',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any pw_kc_position content.
  $permissions['edit any pw_kc_position content'] = array(
    'name' => 'edit any pw_kc_position content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any pw_kc_thesis content.
  $permissions['edit any pw_kc_thesis content'] = array(
    'name' => 'edit any pw_kc_thesis content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own pw_kc_position content.
  $permissions['edit own pw_kc_position content'] = array(
    'name' => 'edit own pw_kc_position content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own pw_kc_thesis content.
  $permissions['edit own pw_kc_thesis content'] = array(
    'name' => 'edit own pw_kc_thesis content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit terms in 34.
  $permissions['edit terms in 34'] = array(
    'name' => 'edit terms in 34',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
