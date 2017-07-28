<?php

/**
 * Implements hook_preprocess_html().
 */
function blank_preprocess_html(&$variables) {
  $variables['tracking'] = block_get_blocks_by_region('tracking');
  $variables['assets'] = block_get_blocks_by_region('assets');
}
