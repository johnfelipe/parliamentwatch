<?php
/**
 * @file
 * Do super awesome thing.
 */
$plugin = array(
  'form' => 'find_term_id_by_parliament_form',
  // Optional validation callback.
  'validate' => 'find_term_id_by_parliament_validate',
  'callback' => 'find_term_id_by_parliament',
  'name' => 'Find Term ID by Term Name and Parliament',
  'multi' => 'loop',
  'category' => 'Custom',
);
function find_term_id_by_parliament_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#value'] = t('Please set position of imported parliament term and select the target taxonomy to receive term id.');

  // position of parliament in xpathparser settings
  $form['position_parliament'] = array( '#type' => 'textfield', '#title' => t('Position of parliament'), '#description' => t('Field position in xpathparser settings of this feeds importer. xpathparser:? <-- '), '#default_value' => isset($settings['position_parliament']) ? $settings['position_parliament'] : '', '#size' => 4, '#required' => TRUE);

  // target vocabulary
  $vocs = taxonomy_get_vocabularies();
  $form_options = array();
  foreach ($vocs as $item) {
    $form_options[$item->vid] = $item->name;
  }
  $form['target_vocabulary_id'] = array(
    '#type'             => 'select',
    '#title'            => t('Target vocabulary'),
    '#position'         => 'left',
    '#options'          => $form_options,
    '#description'      => t('List of vocabularies.'),
    '#default_value' => isset($settings['target_vocabulary_id']) ? $settings['target_vocabulary_id'] : '',
    '#required' => TRUE,
  );
  return $form;
}
function find_term_id_by_parliament_validate(&$settings) {
}
function find_term_id_by_parliament($source, $item_key, $element_key, &$field, $settings) {

  if($field == ''){
    return $field;
  }

  // load parliament term
  $parliament_parser_position = 'xpathparser:'.$settings['position_parliament'];
  $parliament = $source->current_item[$parliament_parser_position];
  $parliament_term = taxonomy_get_term_by_name($parliament, 'parliaments');

  // target vocabulary
  $vocabulary = taxonomy_vocabulary_load($settings['target_vocabulary_id']);
  $target_vocabulary = $vocabulary->machine_name;

  // load terms
  if(!empty($parliament_term)){
    $parliament_term_id = key($parliament_term);
 
    // find electoral_region term tagged with same parliament like imported userx
    $target_vocabulary_terms = taxonomy_get_term_by_name($field, $target_vocabulary);
    $term_found = FALSE;
    foreach($target_vocabulary_terms as $target_vocabulary_term){
      if(!empty($target_vocabulary_term->field_parliament['und']) && $target_vocabulary_term->field_parliament['und'][0]['tid'] == $parliament_term_id){
        $field = $target_vocabulary_term->tid;
        $term_found = TRUE;
        break;
      }
    }
  }
  if(!$term_found){
    drupal_set_message('term in '.$target_vocabulary.' not found for '.$field, 'error');
    $field = '';
  }
}
