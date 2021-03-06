<?php
/**
 * @file
 * pw_blog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pw_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: create blogpost content.
  $permissions['create blogpost content'] = array(
    'name' => 'create blogpost content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any blogpost content.
  $permissions['delete any blogpost content'] = array(
    'name' => 'delete any blogpost content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own blogpost content.
  $permissions['delete own blogpost content'] = array(
    'name' => 'delete own blogpost content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 31.
  $permissions['delete terms in 31'] = array(
    'name' => 'delete terms in 31',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any blogpost content.
  $permissions['edit any blogpost content'] = array(
    'name' => 'edit any blogpost content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own blogpost content.
  $permissions['edit own blogpost content'] = array(
    'name' => 'edit own blogpost content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 31.
  $permissions['edit terms in 31'] = array(
    'name' => 'edit terms in 31',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
