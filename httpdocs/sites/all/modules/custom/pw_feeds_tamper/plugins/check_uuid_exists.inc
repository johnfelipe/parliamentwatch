<?php

/**
 * @file
 * Finds username by users UUID.
 */
$plugin = array(

  'form' => 'check_uuid_exists_form',
  // Optional validation callback.
  'callback' => 'check_uuid_exists',
  'name' => 'Checks if UUID exists',
  'multi' => 'loop',
  'category' => 'Custom',
  );

function check_uuid_exists_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#value'] = t('Checks if UUID exists.');

  // target entity type
  $form['entity_type'] = array(
    '#type'             => 'select',
    '#title'            => t('Entity Type to check'),
    '#position'         => 'left',
    '#options'          => array('user' => 'User UUID', 'node' => 'Node UUID', 'taxonomy_term' => 'Taxonomy Term UUID'),
    '#default_value' => isset($settings['entity_type']) ? $settings['entity_type'] : 'user',
    '#required' => TRUE,
    );
  return $form;
}

function check_uuid_exists($source, $item_key, $element_key, &$field, $settings) {
  $uuid = trim($field);
  $entity = entity_uuid_load($settings['entity_type'], array($uuid));
  if(empty($entity)){
    drupal_set_message(ucfirst($settings['entity_type']) . ' not found for UUID "' . $uuid . '".', 'error');
    $field = '';
  }
}
