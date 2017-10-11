<?php
/**
 * @file
 * pw_dialogues.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function pw_dialogues_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'dialogue_importer-xpathparser_10-html_entity_decode';
  $feeds_tamper->importer = 'dialogue_importer';
  $feeds_tamper->source = 'xpathparser:10';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['dialogue_importer-xpathparser_10-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'dialogue_importer-xpathparser_19-html_entity_decode';
  $feeds_tamper->importer = 'dialogue_importer';
  $feeds_tamper->source = 'xpathparser:19';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['dialogue_importer-xpathparser_19-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'dialogue_importer-xpathparser_21-is_before_election';
  $feeds_tamper->importer = 'dialogue_importer';
  $feeds_tamper->source = 'xpathparser:21';
  $feeds_tamper->plugin_id = 'is_before_election';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Date of dialogue is before election';
  $export['dialogue_importer-xpathparser_21-is_before_election'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'dialogue_message_importer-xpathparser_15-html_entity_decode';
  $feeds_tamper->importer = 'dialogue_message_importer';
  $feeds_tamper->source = 'xpathparser:15';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'HTML entity decode';
  $export['dialogue_message_importer-xpathparser_15-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'dialogue_message_importer-xpathparser_18-html_entity_encode';
  $feeds_tamper->importer = 'dialogue_message_importer';
  $feeds_tamper->source = 'xpathparser:18';
  $feeds_tamper->plugin_id = 'html_entity_encode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity encode';
  $export['dialogue_message_importer-xpathparser_18-html_entity_encode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'dialogue_message_importer-xpathparser_19-html_entity_decode';
  $feeds_tamper->importer = 'dialogue_message_importer';
  $feeds_tamper->source = 'xpathparser:19';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['dialogue_message_importer-xpathparser_19-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'dialogue_message_importer-xpathparser_20-php';
  $feeds_tamper->importer = 'dialogue_message_importer';
  $feeds_tamper->source = 'xpathparser:20';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => 'return $field > 0?\'1\':\'0\';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Execute php code';
  $export['dialogue_message_importer-xpathparser_20-php'] = $feeds_tamper;

  return $export;
}
