<?php
/**
 * @file
 * pw_sidejobs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pw_sidejobs_user_default_permissions() {
  $permissions = array();

  // Exported permission: create field_sidejob_income_max_total.
  $permissions['create field_sidejob_income_max_total'] = array(
    'name' => 'create field_sidejob_income_max_total',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_sidejob_income_min_total.
  $permissions['create field_sidejob_income_min_total'] = array(
    'name' => 'create field_sidejob_income_min_total',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_sidejob_income_max_total.
  $permissions['edit field_sidejob_income_max_total'] = array(
    'name' => 'edit field_sidejob_income_max_total',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_sidejob_income_min_total.
  $permissions['edit field_sidejob_income_min_total'] = array(
    'name' => 'edit field_sidejob_income_min_total',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_sidejob_income_max_total.
  $permissions['edit own field_sidejob_income_max_total'] = array(
    'name' => 'edit own field_sidejob_income_max_total',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_sidejob_income_min_total.
  $permissions['edit own field_sidejob_income_min_total'] = array(
    'name' => 'edit own field_sidejob_income_min_total',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_sidejob_income_max_total.
  $permissions['view field_sidejob_income_max_total'] = array(
    'name' => 'view field_sidejob_income_max_total',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_sidejob_income_min_total.
  $permissions['view field_sidejob_income_min_total'] = array(
    'name' => 'view field_sidejob_income_min_total',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_sidejob_income_max_total.
  $permissions['view own field_sidejob_income_max_total'] = array(
    'name' => 'view own field_sidejob_income_max_total',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_sidejob_income_min_total.
  $permissions['view own field_sidejob_income_min_total'] = array(
    'name' => 'view own field_sidejob_income_min_total',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
