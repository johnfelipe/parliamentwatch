<?php

/**
 * @file
 * Do extremly awesome things, like set default birthday in case of an empty fields!
 */
$plugin = array(

  'form' => 'pw_set_empty_birthday_form',
  // Optional validation callback.
  'validate' => 'pw_set_empty_birthday_validate',
  'callback' => 'pw_set_empty_birthday',
  'name' => 'Set Empty Birthday',
  'multi' => 'loop',
  'category' => 'Custom',
);

function pw_set_empty_birthday_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#value'] = t('My plugin can do awesome things like set default emails.');
  return $form;
}

function pw_set_empty_birthday_validate(&$settings) {
  // no form to validate
}

function pw_set_empty_birthday($source, $item_key, $element_key, &$field, $settings) {
  if(date('YYYY-mm-dd', strtotime($field)) > date('YYYY-mm-dd', time() - 86400)) {
    $field = '';
  } 
}
