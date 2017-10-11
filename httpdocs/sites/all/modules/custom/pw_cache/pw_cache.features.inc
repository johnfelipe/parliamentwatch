<?php
/**
 * @file
 * pw_cache.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_cache_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
