<?php
/**
 * @file
 * Do super awesome thing.
 */
$plugin = array(
  'form' => 'profiles_external_links_form',
  'callback' => 'profiles_external_links',
  'name' => 'Imports external links',
  'multi' => 'loop',
  'category' => 'Custom',
);
function profiles_external_links_form($importer, $element_key, $settings) {
  $form = array();
  return $form;
}

function profiles_external_links($source, $item_key, $element_key, &$field, $settings) {

  // check user exists and no data was added before
  $uuid = &$source->items[$item_key]['xpathparser:3'];
  $user = entity_uuid_load('user', array($uuid));
  if(!$user){
    drupal_set_message('Usser with uuid '.$uuid.' not exists.', 'error');
    unset($uuid);
    return;
  }
  $user = array_pop($user);
  if(!empty($user->field_user_links_more)){
    drupal_set_message('External links for user '.l($user->name, 'user/'.$user->uid).' already exist, wont override.', 'warning');
    unset($uuid);
    return;
  }
}
