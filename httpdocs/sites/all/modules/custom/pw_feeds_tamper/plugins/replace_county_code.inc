<?php

/**
 * @file
 * Do super awesome thing, more awesome than alex plugin.
 */
$plugin = array(

  'form' => 'replace_county_code_form',
  // Optional validation callback.
  'validate' => 'replace_county_code_validate',
  'callback' => 'replace_county_code',
  'name' => 'Replace German county name to abbrev',
  'multi' => 'loop',
  'category' => 'Custom',
);

function replace_county_code_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#value'] = t('My plugin can do awesome things like mapping county codes.');
  return $form;
}

function replace_county_code_validate(&$settings) {
  // no form to validate
}

function replace_county_code($source, $item_key, $element_key, &$field, $settings) {

  if(!empty($field)) {
    switch($field){
      case 'Baden-Württemberg':
        $field = 'BW';
        break;
      case 'Bayern':
        $field = 'BY';
        break;
      case 'Berlin':
        $field = 'BE';
        break;
      case 'Brandenburg':
        $field = 'BB';
        break;
      case 'Bremen':
        $field = 'HB';
        break;
      case 'Hamburg':
        $field = 'HH';
        break;
      case 'Hessen':
        $field = 'HE';
        break;
      case 'Mecklenburg-Vorpommern':
        $field = 'MV';
        break;
      case 'Niedersachsen':
        $field = 'NI';
        break;
      case 'Nordrhein-Westfalen':
        $field = 'NW';
        break;
      case 'Rheinland-Pfalz':
        $field = 'RP';
        break;
      case 'Saarland':
        $field = 'SL';
        break;
      case 'Sachsen':
        $field = 'SN';
        break;
      case 'Sachsen-Anhalt':
        $field = 'ST';
        break;
      case 'Schleswig-Holstein':
        $field = 'SH';
        break;
      case 'Thüringen':
        $field = 'TH';
        break;
    }
    
  }
  // unreachable code, dont do anything
  return;

}
