<?php

/**
 * @file
 * Do extremly awesome things, like set default emails in case of an empty fields!
 */
$plugin = array(

  'form' => 'pw_set_default_email_form',
  // Optional validation callback.
  'validate' => 'pw_set_default_email_validate',
  'callback' => 'pw_set_default_email',
  'name' => 'Set Default E-Mail',
  'multi' => 'loop',
  'category' => 'Custom',
);

function pw_set_default_email_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#value'] = t('My plugin can do awesome things like set default emails.');

  // code for checkbox
  $form['force_if_candidate'] = array(
    '#type' => 'checkbox',
    '#title' => t('force if candidate'),
    '#description' => t('set email to noemail...watch.org when profile is of role candidate even if imported email is not empty.'),
    '#default_value' => isset($settings['force_if_candidate']) ? $settings['force_if_candidate'] : 0
  );

  return $form;
}

function pw_set_default_email_validate(&$settings) {
  // no form to validate
}

function pw_set_default_email($source, $item_key, $element_key, &$field, $settings) {

  // generic email
  $subaddress = md5(microtime());
  $generic_email = "noemail+" . $subaddress . "@parliamentwatch.org";

  // if empty set generic email
  if (empty($field)) {
    $field = $generic_email;
  }
  elseif (isset($settings['force_if_candidate']) && $settings['force_if_candidate'] == 1) {
    foreach ($source->current_item as $value) {

      // try to find string politician which indicates it's the field for roles
      if (is_string($value) && stripos($value, 'Politician') !== FALSE) {
        $a_roles = explode(',', $value);
      }

      // roles are already an array
      elseif (is_array($value)) {
        $a_roles = $value;
      }
      if(isset($a_roles)) {
        $a_roles = array_map('trim', $a_roles);
        $a_roles = array_map('ucfirst', $a_roles);
        if(in_array('Politician', $a_roles) && in_array('Candidate', $a_roles)){
          $field = $generic_email;
          break;
        }
        unset($a_roles);
      }
    }
  }
}
