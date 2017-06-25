<?php
/**
 * @file
 * pw_poll.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pw_poll_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  return $export;
}
