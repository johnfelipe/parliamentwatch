<?php
/**
 * @file
 * Do super awesome thing.
 */
$plugin = array(
  'form' => 'twitter_name_parser_form',
  'callback' => 'twitter_name_parser',
  'name' => 'Parse twitter name',
  'multi' => 'loop',
  'category' => 'Custom',
);
function twitter_name_parser_form($importer, $element_key, $settings) {
  $form = array();
  return $form;
}

function twitter_name_parser($source, $item_key, $element_key, &$field, $settings) {

  // check user exists and no data was added before
  $uuid = &$source->items[$item_key]['xpathparser:3'];
  $user = entity_uuid_load('user', array($uuid));
  if(!$user){
    drupal_set_message('User with uuid '.$uuid.' not exists.', 'error');
    unset($uuid);
    return;
  }
  $user = array_pop($user);
  if(!empty($user->field_user_twitter_account)){
    drupal_set_message('Twitter name for user '.l($user->name, 'user/'.$user->uid).' already exists, wont override.', 'warning');
    unset($uuid);
    return;
  }

  // parse field
  $field = trim($field);
  if(substr($field, 0, 4) == "http"){
    $field = parse_url($field)['path'];
    $field = substr($field, 1);
  }
  elseif(substr($field, 0, 1) == "@"){
    $field = substr($field, 1);
  }
}
