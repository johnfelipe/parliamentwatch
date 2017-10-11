<?php

/**
 * @file
 * Do super awesome thing
 */
$plugin = array(

  'form' => 'add_parliament_form',
  // Optional validation callback.
  'validate' => 'add_parliament_validate',
  'callback' => 'add_parliament',
  'name' => 'Add term to existing parliament terms on update',
  'multi' => 'loop',
  'category' => 'Custom',
);

function add_parliament_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#value'] = t('My plugin can do awesome things like adding terms to parliaments list.');
  return $form;
}

function add_parliament_validate(&$settings) {
  // no form to validate
}

function add_parliament($source, $item_key, $element_key, &$field, $settings) {

  // load dialogue topics
  $subject_name = $source->current_item['xpathparser:2'];
  $subject_terms = taxonomy_get_term_by_name($subject_name, 'dialogue_topics');

  // load parliament term
  $parliament_term = taxonomy_get_term_by_name($field, 'parliaments');

  // add parliament to list
  $parliament_term_ids = array();
  if(!empty($parliament_term)){
    $parliament_term_id = key($parliament_term);
    $parliament_term_ids[] = $parliament_term_id;
  }

  // check for existing parliament terms
  if(!empty($subject_terms)){
    $subject_term = array_shift($subject_terms);
    foreach($subject_term->field_parliament['und'] as $term){

      // add parliament to list
      if(!in_array($term['tid'], $parliament_term_ids)){
        $parliament_term_ids[] = (int)$term['tid'];
      }
    }
  }

  // return value
  //dpm($parliament_term_ids);
  $field = $parliament_term_ids;
}
