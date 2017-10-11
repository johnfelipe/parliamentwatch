<?php

/**
 * Implements hook_services_resources().
 */
function pw_login_once_services_resources() {
  $resources = array(
    'login_link' => array(
      'operations' => array(
        'retrieve' => array(
          'help' => t('Generates a login link for the specified user.'),
          'callback' => 'pw_login_once_get_user_login_link',
          'file' => array(
            'type' => 'inc',
            'module' => 'pw_login_once',
            'name' => 'pw_login_once.services',
          ),
          'access arguments' => array('send link to pw login once'),
          'args' => array(
            array(
              'name' => 'uuid',
              'type' => 'string',
              'description' => 'The uuid of the user to get.',
              'source' => array('path' => '0'),
              'optional' => FALSE,
            ),
            array(
              'name' => 'name',
              'type' => 'string',
              'description' => 'The name of the user to get.',
              'source' => array('param' => 'name'),
              'optional' => FALSE,
            ),
            array(
              'name' => 'name',
              'type' => 'string',
              'description' => 'The mail of the user to get.',
              'source' => array('param' => 'mail'),
              'optional' => FALSE,
            ),
          ),
        ),
      ),
    ),
  );
  return $resources;
}

/**
 * Generates login link for the user with the specified UUID.
 */
function pw_login_once_get_user_login_link($uuid, $name, $mail) {
  if (empty($uuid)) {
    return array(
      'status' => 'failed',
      'error' => "Empty uuid! No link generated!"
    );
  }
  if (empty($name)) {
    return array(
      'status' => 'failed',
      'error' => "Empty name! No link generated!"
    );
  }
  if (empty($mail)) {
    return array(
      'status' => 'failed',
      'error' => "Empty mail! No link generated!"
    );
  }

  $entities = entity_get_id_by_uuid('user', array($uuid), FALSE);
  $uid = $entities[$uuid];
  $account = user_load($uid, FALSE);
  if (empty($account)) {
    return array(
      'status' => 'failed',
      'error' => "Empty account, probably wrong uuid: " . $uuid . "! No link generated!"
    );
  }

  if ($uuid == $account->uuid) {
    if ($name == $account->name) {
      if (true) { //more robust checking - was $mail == $account->mail

        $login = pw_login_once_get_link($account, NULL);
        if (empty($login)) {
          return array(
            'status' => 'failed',
            'error' => "Empty account, probably wrong uuid: " . $uuid . "! No link generated!"
          );
        }

        $result = array(
          'status' => 'success',
          'uid' => $account->uid,
          'uuid' => $account->uuid,
          'name' => $account->name,
          'mail' => $account->mail,
          'mail_public' => $account->field_user_public_mail[LANGUAGE_NONE][0]['safe_value'],
          'login_link' => $login,
        );
        return $result;

      } elseif ($mail == $account->field_user_public_mail[LANGUAGE_NONE][0]['safe_value']) {
        return array(
          'status' => 'failed',
          'error' => "Mail matches field_user_public_mail but not internal mail"
            . ", please double check profile information! No link generated!"
        );
      } else {
        return array(
          'status' => 'failed',
          'error' => "Mismatching mail: " . $mail . " (request) vs. "
            . $account->mail . " (drupal)! No link generated!"
        );
      }
    } else {
      return array(
        'status' => 'failed',
        'error' => "Mismatching name: " . $name . " (request) vs. "
          . $account->name . " (drupal)! No link generated!"
      );
    }
  } else {
    return array(
      'status' => 'failed',
      'error' => "Mismatching uuid: " . $uuid . " (request) vs. "
        . $account->uuid . " (drupal)! No link generated!"
    );
  }
  return array(
    'status' => 'failed',
    'error' => "Undefined error! No link generated!"
  );
}
