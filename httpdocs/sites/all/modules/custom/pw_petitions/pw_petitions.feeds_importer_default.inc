<?php
/**
 * @file
 * pw_petitions.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function pw_petitions_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'petition_updater';
  $feeds_importer->config = array(
    'name' => 'Petition Updater',
    'description' => 'Updates a single petition',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'request_timeout' => '',
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'petition_title',
          'xpathparser:1' => 'petition_url',
          'xpathparser:2' => 'petition_image_url',
          'xpathparser:3' => 'petition_body',
          'xpathparser:4' => 'petition_signings',
          'xpathparser:5' => 'petition_recipient',
          'xpathparser:6' => 'petition_letter',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
        ),
        'context' => '/petition',
        'exp' => array(
          'errors' => 0,
          'tidy' => 0,
          'tidy_encoding' => 'UTF8',
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsSelfNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_petition_external_url:url',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_teaser_image',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_petition_signings',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_petition_recipient',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_petition_content',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'managed_content',
        'skip_hash_check' => 1,
        'bundle' => 'pw_petition',
        'import_on_create' => 1,
        'insert_new' => '1',
        'update_non_existent' => 'skip',
        'language' => 'und',
        'content_type' => 'pw_petition',
      ),
    ),
    'content_type' => 'pw_petition',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['petition_updater'] = $feeds_importer;

  return $export;
}
