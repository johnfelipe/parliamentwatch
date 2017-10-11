<?php

function pw_seven_preprocess_html(&$vars) {
  foreach($vars['user']->roles as $role){
    $vars['classes_array'][] = 'role-' . drupal_html_class($role);
  }
}

/**
 * Implements hook_preprocess_node().
 */
function pw_seven_preprocess_node(&$variables) {
  $variables['theme_hook_suggestions'][] = 'node__' . $variables['view_mode'];
  $variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'];
}

/**
 * Implements hook_preprocess_field().
 */
function pw_seven_preprocess_field(&$variables) {
  $variables['theme_hook_suggestions'][] = 'field__' . $variables['element']['#view_mode'];
}
