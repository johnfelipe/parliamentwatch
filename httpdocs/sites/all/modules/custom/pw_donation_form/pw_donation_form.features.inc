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
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
