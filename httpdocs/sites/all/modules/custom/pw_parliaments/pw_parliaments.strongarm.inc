<?php
/**
 * @file
 * pw_parliaments.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pw_parliaments_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tvi_vocab_parliaments';
  $strongarm->value = array(
    'is_default' => FALSE,
    'type' => 'vocab',
    'xid' => 'parliaments',
    'status' => 1,
    'view_name' => 'pw_taxonomy_term_parliament',
    'display' => 'page',
  );
  $export['tvi_vocab_parliaments'] = $strongarm;

  return $export;
}
