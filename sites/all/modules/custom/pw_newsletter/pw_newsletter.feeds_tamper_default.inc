<?php
/**
 * @file
 * pw_newsletter.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function pw_newsletter_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'newsletter_openemm_importer-xpathparser_3-find_replace_regex';
  $feeds_tamper->importer = 'newsletter_openemm_importer';
  $feeds_tamper->source = 'xpathparser:3';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/<strong>.*<\\/strong>/Us',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['newsletter_openemm_importer-xpathparser_3-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'newsletter_openemm_importer-xpathparser_3-php';
  $feeds_tamper->importer = 'newsletter_openemm_importer';
  $feeds_tamper->source = 'xpathparser:3';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => 'return ucfirst($field);',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Execute php code';
  $export['newsletter_openemm_importer-xpathparser_3-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'newsletter_openemm_importer-xpathparser_3-strip_tags';
  $feeds_tamper->importer = 'newsletter_openemm_importer';
  $feeds_tamper->source = 'xpathparser:3';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['newsletter_openemm_importer-xpathparser_3-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'newsletter_openemm_importer-xpathparser_3-truncate_text';
  $feeds_tamper->importer = 'newsletter_openemm_importer';
  $feeds_tamper->source = 'xpathparser:3';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '550',
    'ellipses' => 1,
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Truncate';
  $export['newsletter_openemm_importer-xpathparser_3-truncate_text'] = $feeds_tamper;

  return $export;
}
