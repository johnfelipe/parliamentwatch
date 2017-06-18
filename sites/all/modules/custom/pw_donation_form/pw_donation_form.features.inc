<?php
/**
 * @file
 * pw_donation_form.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_donation_form_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "data" && $api == "data_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pw_donation_form_views_api() {
  return array("version" => "3.0");
}
