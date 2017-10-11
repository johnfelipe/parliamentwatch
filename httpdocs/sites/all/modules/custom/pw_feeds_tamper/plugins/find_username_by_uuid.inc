<?php

/**
 * @file
 * Finds username by users UUID.
 */
$plugin = array(

  'form' => 'find_username_by_uuid_form',
  // Optional validation callback.
  'validate' => 'find_username_by_uuid_validate',
  'callback' => 'find_username_by_uuid',
  'name' => 'Finds username by UUID',
  'multi' => 'loop',
  'category' => 'Custom',
);

function find_username_by_uuid_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#value'] = t('My plugin can do awesome things like set default emails.');
  return $form;
}

function find_username_by_uuid_validate(&$settings) {
  // no form to validate
}

function find_username_by_uuid($source, $item_key, $element_key, &$field, $settings) {
  $user_uuid = $field;
  $user = entity_uuid_load('user', array($user_uuid));
  if(!empty($user)){
    $user = array_pop($user);
    $field = $user->name;
  }
  else{
    drupal_set_message('User not found for UUID '.$user_uuid.'.', 'error');
    $field = '';
  }
}
