<?php
/**
 * @file
 * Do super awesome thing.
 */
$plugin = array(
  'form' => 'is_before_election_form',
  'callback' => 'is_before_election',
  'name' => 'Date of dialogue is before election',
  'multi' => 'loop',
  'category' => 'Custom',
);
function is_before_election_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#value'] = t('My plugin can do awesome things.');
  return $form;
}

function is_before_election($source, $item_key, $element_key, &$field, $settings) {
  $dialogue_date = $field;
  $field = 0;
  $parliament_name = $source->current_item['xpathparser:20'];
  if($parliament_name){
    $term_parliament = taxonomy_get_term_by_name($parliament_name, 'parliaments');
    if($term_parliament){
      $term_parliament = array_pop($term_parliament);
      if(isset($term_parliament->field_parliament_election) && sizeof($term_parliament->field_parliament_election) > 0){
        $election_date = $term_parliament->field_parliament_election['und'][0]['value'];
        if(strtotime($election_date) > strtotime($dialogue_date)){
          $field = 1;
        }
      }
    }
  }
}
