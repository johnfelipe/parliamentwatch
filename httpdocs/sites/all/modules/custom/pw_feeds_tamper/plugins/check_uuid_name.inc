<?php

/**
 * @file
 * Checks if UUID fits to fist_name or last_name to prevent unwanted overwrites.
 */
$plugin = array(
  'form' => 'check_uuid_name_form',
  'callback' => 'check_uuid_name',
  'name' => 'UUID fits to first_name or last_name',
  'multi' => 'loop',
  'category' => 'Custom',
);

function check_uuid_name_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#value'] = t('My plugin can do awesome things like set default emails.');
  return $form;
}

function check_uuid_name($source, $item_key, $element_key, &$field, $settings) {

  $first_name_import = trim($source->current_item['xpathparser:11']);
  $last_name_import = trim($source->current_item['xpathparser:12']);

  // try to load existing user
  $user_uuid = $field;
  $user = entity_uuid_load('user', array($user_uuid));
  $user = array_pop($user);
  if($user){
    $first_name = trim($user->field_user_fname['und'][0]['value']);
    $last_name = trim($user->field_user_lname['und'][0]['value']);

    // if fist_name AND last_name are not matching
    if($first_name != $first_name_import && $last_name != $last_name_import){
      drupal_set_message('changing firstname and lastname for '.$user_uuid.' at the same time is not allowed!', 'error');
      $field = '';
    }
  }
}
