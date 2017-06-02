<?php

/**
 * Implements hook_form_alter().
 */
function pw_globals_form_alter(&$form, &$form_state, $form_id)
{
    if ($form_id == 'webform_client_form_6313') {
        $form['submitted']['user_agent']['#value'] = $_SERVER['HTTP_USER_AGENT'];
        $form['submitted']['referrer']['#value'] = $_SERVER['HTTP_REFERER'];
    }
}