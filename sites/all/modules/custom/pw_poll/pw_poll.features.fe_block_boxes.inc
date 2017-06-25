<?php
/**
 * @file
 * pw_poll.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function pw_poll_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Polls: Abweichende Positionen';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'polls_other_positions';
  $fe_block_boxes->body = '<p>
        <span class="icon-politicians aw-icon-1x aw-icon-circle aw-icon-circle-brand media-image-left"></span>
	Von der Fraktionsmeinung abweichende Abgeordnete
</p>
<p class="text-right">
	<a href="#">anzeigen <span class="icon-arrow-right"></span></a>
</p>';

  $export['polls_other_positions'] = $fe_block_boxes;

  return $export;
}
