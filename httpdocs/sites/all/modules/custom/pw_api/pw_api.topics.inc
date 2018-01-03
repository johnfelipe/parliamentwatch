<?php

/*
 * @file
 * pw_api.topics.inc
 */



/**
 *
 * @return array $topics
 *   Returns all topics.
 */

function pw_api_topics() {

  $topics = [];

  // load topics
  $vocabulary = taxonomy_vocabulary_machine_name_load('topics');
  $terms_topics = entity_load('taxonomy_term', FALSE, ['vid' => $vocabulary->vid]);

  foreach ($terms_topics as $tid => $term) {
    $topics['topic_'.$tid] = $term->name;
  }

  asort($topics);

  // add meta data and return
  return pw_api_meta_data($topics, 'topics');
}
