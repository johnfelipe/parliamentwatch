<?php
/**
 * @file
 * pw_dialogues.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function pw_dialogues_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'dialogue_importer';
  $feeds_importer->config = array(
    'name' => 'Dialogue importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:12' => 'annotation.text',
          'xpathparser:14' => 'topic',
          'xpathparser:15' => 'sender',
          'xpathparser:0' => 'concat(\'Frage von \', sender)',
          'xpathparser:1' => 'tags/tags_item',
          'xpathparser:2' => 'recipient.external_id',
          'xpathparser:3' => 'inserted_date',
          'xpathparser:5' => 'type',
          'xpathparser:6' => 'id',
          'xpathparser:7' => 'concat(\'dialogue-\',../@id)',
          'xpathparser:8' => 'documents/documents_item',
          'xpathparser:9' => '../@id',
          'xpathparser:10' => 'text',
          'xpathparser:16' => 'sender.external_id',
          'xpathparser:17' => 'status=1',
          'xpathparser:19' => 'keyworded_text',
          'xpathparser:20' => 'context',
          'xpathparser:21' => 'inserted_date',
        ),
        'rawXML' => array(
          'xpathparser:12' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:16' => 0,
          'xpathparser:17' => 0,
          'xpathparser:19' => 0,
          'xpathparser:20' => 0,
          'xpathparser:21' => 0,
        ),
        'context' => '//message[type=\'question\']',
        'exp' => array(
          'errors' => 0,
          'tidy' => 0,
          'tidy_encoding' => 'UTF8',
          'debug' => array(
            'context' => 0,
            'xpathparser:12' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:16' => 0,
            'xpathparser:17' => 0,
            'xpathparser:19' => 0,
            'xpathparser:20' => 0,
            'xpathparser:21' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_dialogue_annotation',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_dialogue_topic',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          2 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_dialogue_sender_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => 0,
          ),
          4 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_dialogue_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          5 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_dialogue_recipient:uuid',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:3',
            'target' => 'created',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_dialogue_message_type',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_dialogue_message_id',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:7',
            'target' => 'guid',
            'unique' => 1,
          ),
          10 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_dialogue_documents:url',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_dialogue_id',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:10',
            'target' => 'body',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:16',
            'target' => 'uid:uuid',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:17',
            'target' => 'status',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:19',
            'target' => 'body:summary',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:20',
            'target' => 'field_parliament',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          17 => array(
            'source' => 'xpathparser:21',
            'target' => 'field_dialogue_before_election',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'filtered_html',
        'authorize' => 0,
        'skip_hash_check' => 1,
        'bundle' => 'dialogue',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['dialogue_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'dialogue_message_importer';
  $feeds_importer->config = array(
    'name' => 'Dialogue message importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:1' => 'concat(\'dialogue-\',../@id)',
          'xpathparser:2' => 'sender.external_id',
          'xpathparser:3' => 'topic',
          'xpathparser:4' => 'tags/tags_item',
          'xpathparser:5' => 'sender',
          'xpathparser:6' => 'recipient.external_id',
          'xpathparser:7' => 'status=1',
          'xpathparser:8' => 'inserted_date',
          'xpathparser:9' => 'sender',
          'xpathparser:10' => 'type',
          'xpathparser:11' => 'id',
          'xpathparser:12' => 'concat(\'answer-\',id)',
          'xpathparser:13' => 'documents/documents_item',
          'xpathparser:14' => '../@id',
          'xpathparser:15' => 'annotation.text',
          'xpathparser:17' => 'concat(\'Antwort von \', sender)',
          'xpathparser:18' => 'text',
          'xpathparser:19' => 'keyworded_text',
          'xpathparser:20' => 'count(moderation_tags[moderation_tags_item=\'standard\'])',
        ),
        'rawXML' => array(
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
          'xpathparser:17' => 0,
          'xpathparser:18' => 0,
          'xpathparser:19' => 0,
          'xpathparser:20' => 0,
        ),
        'context' => '//dialogue/message[type=\'answer\']',
        'exp' => array(
          'errors' => 0,
          'tidy' => 0,
          'tidy_encoding' => 'UTF8',
          'debug' => array(
            'context' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
            'xpathparser:17' => 0,
            'xpathparser:18' => 0,
            'xpathparser:19' => 0,
            'xpathparser:20' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsCommentProcessor',
      'config' => array(
        'input_format' => 'filtered_html',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:1',
            'target' => 'nid_by_guid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'uid:uuid',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_dialogue_topic',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_dialogue_tags',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_dialogue_sender_fullname',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_dialogue_recipient:uuid',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:7',
            'target' => 'status',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:8',
            'target' => 'created',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:9',
            'target' => 'name',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_dialogue_message_type',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_dialogue_message_id',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:12',
            'target' => 'guid',
            'unique' => 1,
          ),
          12 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_dialogue_documents:url',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_dialogue_id',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_dialogue_annotation',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:17',
            'target' => 'subject',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:18',
            'target' => 'field_dialogue_comment_body',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'xpathparser:19',
            'target' => 'field_dialogue_comment_body:summary',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'xpathparser:20',
            'target' => 'field_dialogue_is_standard_reply',
            'unique' => FALSE,
          ),
        ),
        'author' => 0,
        'skip_hash_check' => 1,
        'bundle' => 'comment_node_dialogue',
        'insert_new' => '1',
        'update_non_existent' => 'skip',
        'language' => 'und',
        'authorize' => 1,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['dialogue_message_importer'] = $feeds_importer;

  return $export;
}
