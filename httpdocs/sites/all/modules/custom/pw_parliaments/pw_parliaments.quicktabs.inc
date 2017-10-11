<?php
/**
 * @file
 * pw_parliaments.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function pw_parliaments_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'politicians_answer';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Politiker antworten!';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'pw_dialogue_answers',
      'display' => 'panel_pane_1',
      'args' => '',
      'title' => 'Antworten',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'profile_questions_answers',
      'display' => 'landing_page',
      'args' => '',
      'title' => 'Fragen',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'pw_polls',
      'display' => 'page',
      'args' => '',
      'title' => 'Abstimmungen',
      'weight' => '-98',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Abstimmungen');
  t('Antworten');
  t('Fragen');
  t('Politiker antworten!');

  $export['politicians_answer'] = $quicktabs;

  return $export;
}
