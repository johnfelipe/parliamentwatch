<?php

/**
 * @file
 * Do super awesome thing, more awesome than boris' plugin.
 */
$plugin = array(

  'form' => 'username_creator_form',
  // Optional validation callback.
  'validate' => 'username_creator_validate',
  'callback' => 'username_creator',
  'name' => 'Username Creator & Validator',
  'multi' => 'loop',
  'category' => 'Custom',
);

function username_creator_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#value'] = t('My plugin can do awesome things like creating usernames.');
  return $form;
}

function username_creator_validate(&$settings) {
  // no form to validate
}

function username_creator($source, $item_key, $element_key, &$field, $settings) {

  if(empty($field)) {

    // try to load by uuid
    $uuid = $source->current_item['xpathparser:3'];
    $user = entity_uuid_load('user', array($uuid));
    if(!empty($user)){
      $user = array_pop($user);
      $field = $user->name;
      return;
    }

    // uname is empty, create one by following rule set
    $fname = $source->current_item['xpathparser:11'];
    $lname = $source->current_item['xpathparser:12'];
    $uname = $fname . '-' . $lname;

    $title = $source->current_item['xpathparser:7'];
    //if (!empty($title)) {

      // add title to umame if exists
      //$uname = $title . '-' . $uname;

    //}

    $uname =  strtr(utf8_decode($uname),
      utf8_decode('ŠŒŽšœžŸ¥µÀÁÂÃÄÅÆÇÈÉÊËÌÍÎÏÐÑÒÓÔÕÖØÙÚÛÜÝßàáâãäåæçèéêëìíîïðñòóôõöøùúûüýÿ'),
                  'SOZsozYYuAAAAAAACEEEEIIIIDNOOOOOOUUUUYsaaaaaaaceeeeiiiionoooooouuuuyy');
    $uname = strtolower($uname);
    $uname = preg_replace('/[^a-z -]+/', '', $uname);
    $uname = str_replace(' ', '-', $uname);
    $uname = trim($uname, '-');
    $cname = $uname;

    $count = 2;

    $luser = user_load_by_name($uname);
    while ($luser && $luser->name === $cname) {
      // if user does not exist by uuid, but the name exists, add a number to name
      $cname = $uname . '-' . $count;
      $luser = user_load_by_name($cname);
      $count++;
    }

    // create a new user with constructed uname
    $field = $cname;
    return;

  } else {

    // skip the user and don't do anything
    return;

  }

  // unreachable code, don't do anything
  return;

}
