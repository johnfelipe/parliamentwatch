<?php

/**
 * Implements hook_rules_event_info().
 *
 * @ingroup rules
 */
function pw_login_once_rules_event_info() {
  return array(
    'pw_login_once_used' => array(
      'label' => t('When the user has used their one time login.'),
      'group' => t('PW Login Once'),
      'variables' => array(
        'account' => array(
          'type' => 'user',
          'label' => t("The user's account"),
        ),
      ),
    ),
  );
}

/**
 * Implementation of hook_rules_action_info().
 * @ingroup rules
 */
function pw_login_once_rules_action_info() {
  return array(
    'pw_login_once_send_mail' => array(
      'label' => t('Send a login one-time email.'),
      'parameter' => array(
        'account' => array(
          'type' => 'user',
          'label' => t('Recipient User'),
        ),
        'path' => array(
          'type' => 'uri',
          'label' => t('Destination path'),
          'optional' => TRUE,
        ),
      ),
      'group' => t('User'),
      'access callback' => 'user_access',
      'access arguments' => array('send link to pw login once'),
    ),
  );
}
