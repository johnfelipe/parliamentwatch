<?php
/**
 * @file
 * pw_profiles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pw_profiles_user_default_permissions() {
  $permissions = array();

  // Exported permission: access overlay.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      0 => 'Politician',
      1 => 'anonymous user',
    ),
    'module' => 'overlay',
  );

  // Exported permission: create calendar_entry content.
  $permissions['create calendar_entry content'] = array(
    'name' => 'create calendar_entry content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create field_user_about.
  $permissions['create field_user_about'] = array(
    'name' => 'create field_user_about',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
      2 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_address.
  $permissions['create field_user_address'] = array(
    'name' => 'create field_user_address',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
      2 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_age.
  $permissions['create field_user_age'] = array(
    'name' => 'create field_user_age',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_birthday.
  $permissions['create field_user_birthday'] = array(
    'name' => 'create field_user_birthday',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_childs.
  $permissions['create field_user_childs'] = array(
    'name' => 'create field_user_childs',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_commitee.
  $permissions['create field_user_commitee'] = array(
    'name' => 'create field_user_commitee',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_constituency.
  $permissions['create field_user_constituency'] = array(
    'name' => 'create field_user_constituency',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_constituency_won.
  $permissions['create field_user_constituency_won'] = array(
    'name' => 'create field_user_constituency_won',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_education.
  $permissions['create field_user_education'] = array(
    'name' => 'create field_user_education',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_election_result.
  $permissions['create field_user_election_result'] = array(
    'name' => 'create field_user_election_result',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_external_url.
  $permissions['create field_user_external_url'] = array(
    'name' => 'create field_user_external_url',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_fname.
  $permissions['create field_user_fname'] = array(
    'name' => 'create field_user_fname',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
      7 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_fraction.
  $permissions['create field_user_fraction'] = array(
    'name' => 'create field_user_fraction',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_gender.
  $permissions['create field_user_gender'] = array(
    'name' => 'create field_user_gender',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_image_gallery.
  $permissions['create field_user_image_gallery'] = array(
    'name' => 'create field_user_image_gallery',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
      2 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_job_skills.
  $permissions['create field_user_job_skills'] = array(
    'name' => 'create field_user_job_skills',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_joined.
  $permissions['create field_user_joined'] = array(
    'name' => 'create field_user_joined',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_links_more.
  $permissions['create field_user_links_more'] = array(
    'name' => 'create field_user_links_more',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_list.
  $permissions['create field_user_list'] = array(
    'name' => 'create field_user_list',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_list_position.
  $permissions['create field_user_list_position'] = array(
    'name' => 'create field_user_list_position',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_list_won.
  $permissions['create field_user_list_won'] = array(
    'name' => 'create field_user_list_won',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_lname.
  $permissions['create field_user_lname'] = array(
    'name' => 'create field_user_lname',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_marriage_status.
  $permissions['create field_user_marriage_status'] = array(
    'name' => 'create field_user_marriage_status',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_parliament.
  $permissions['create field_user_parliament'] = array(
    'name' => 'create field_user_parliament',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_party.
  $permissions['create field_user_party'] = array(
    'name' => 'create field_user_party',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_phone.
  $permissions['create field_user_phone'] = array(
    'name' => 'create field_user_phone',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_picture.
  $permissions['create field_user_picture'] = array(
    'name' => 'create field_user_picture',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_picture_copyright.
  $permissions['create field_user_picture_copyright'] = array(
    'name' => 'create field_user_picture_copyright',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_political_goals.
  $permissions['create field_user_political_goals'] = array(
    'name' => 'create field_user_political_goals',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
      2 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_political_roles.
  $permissions['create field_user_political_roles'] = array(
    'name' => 'create field_user_political_roles',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_pseudonym.
  $permissions['create field_user_pseudonym'] = array(
    'name' => 'create field_user_pseudonym',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_public_mail.
  $permissions['create field_user_public_mail'] = array(
    'name' => 'create field_user_public_mail',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_question_form_closed.
  $permissions['create field_user_question_form_closed'] = array(
    'name' => 'create field_user_question_form_closed',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_retired.
  $permissions['create field_user_retired'] = array(
    'name' => 'create field_user_retired',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_roles_for_view_mode_s.
  $permissions['create field_user_roles_for_view_mode_s'] = array(
    'name' => 'create field_user_roles_for_view_mode_s',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_title.
  $permissions['create field_user_title'] = array(
    'name' => 'create field_user_title',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_twitter_account.
  $permissions['create field_user_twitter_account'] = array(
    'name' => 'create field_user_twitter_account',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_valid.
  $permissions['create field_user_valid'] = array(
    'name' => 'create field_user_valid',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create files.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Deputy',
      2 => 'Premium User',
      3 => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete any calendar_entry content.
  $permissions['delete any calendar_entry content'] = array(
    'name' => 'delete any calendar_entry content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own calendar_entry content.
  $permissions['delete own calendar_entry content'] = array(
    'name' => 'delete own calendar_entry content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any calendar_entry content.
  $permissions['edit any calendar_entry content'] = array(
    'name' => 'edit any calendar_entry content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit field_user_about.
  $permissions['edit field_user_about'] = array(
    'name' => 'edit field_user_about',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_address.
  $permissions['edit field_user_address'] = array(
    'name' => 'edit field_user_address',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_age.
  $permissions['edit field_user_age'] = array(
    'name' => 'edit field_user_age',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_birthday.
  $permissions['edit field_user_birthday'] = array(
    'name' => 'edit field_user_birthday',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_childs.
  $permissions['edit field_user_childs'] = array(
    'name' => 'edit field_user_childs',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_commitee.
  $permissions['edit field_user_commitee'] = array(
    'name' => 'edit field_user_commitee',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_constituency.
  $permissions['edit field_user_constituency'] = array(
    'name' => 'edit field_user_constituency',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_constituency_won.
  $permissions['edit field_user_constituency_won'] = array(
    'name' => 'edit field_user_constituency_won',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_education.
  $permissions['edit field_user_education'] = array(
    'name' => 'edit field_user_education',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_election_result.
  $permissions['edit field_user_election_result'] = array(
    'name' => 'edit field_user_election_result',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_external_url.
  $permissions['edit field_user_external_url'] = array(
    'name' => 'edit field_user_external_url',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_fname.
  $permissions['edit field_user_fname'] = array(
    'name' => 'edit field_user_fname',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_fraction.
  $permissions['edit field_user_fraction'] = array(
    'name' => 'edit field_user_fraction',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_gender.
  $permissions['edit field_user_gender'] = array(
    'name' => 'edit field_user_gender',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_image_gallery.
  $permissions['edit field_user_image_gallery'] = array(
    'name' => 'edit field_user_image_gallery',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_job_skills.
  $permissions['edit field_user_job_skills'] = array(
    'name' => 'edit field_user_job_skills',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_joined.
  $permissions['edit field_user_joined'] = array(
    'name' => 'edit field_user_joined',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_links_more.
  $permissions['edit field_user_links_more'] = array(
    'name' => 'edit field_user_links_more',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_list.
  $permissions['edit field_user_list'] = array(
    'name' => 'edit field_user_list',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_list_position.
  $permissions['edit field_user_list_position'] = array(
    'name' => 'edit field_user_list_position',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_list_won.
  $permissions['edit field_user_list_won'] = array(
    'name' => 'edit field_user_list_won',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_lname.
  $permissions['edit field_user_lname'] = array(
    'name' => 'edit field_user_lname',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_marriage_status.
  $permissions['edit field_user_marriage_status'] = array(
    'name' => 'edit field_user_marriage_status',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_parliament.
  $permissions['edit field_user_parliament'] = array(
    'name' => 'edit field_user_parliament',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_party.
  $permissions['edit field_user_party'] = array(
    'name' => 'edit field_user_party',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_phone.
  $permissions['edit field_user_phone'] = array(
    'name' => 'edit field_user_phone',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_picture.
  $permissions['edit field_user_picture'] = array(
    'name' => 'edit field_user_picture',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_picture_copyright.
  $permissions['edit field_user_picture_copyright'] = array(
    'name' => 'edit field_user_picture_copyright',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_political_goals.
  $permissions['edit field_user_political_goals'] = array(
    'name' => 'edit field_user_political_goals',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_political_roles.
  $permissions['edit field_user_political_roles'] = array(
    'name' => 'edit field_user_political_roles',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_pseudonym.
  $permissions['edit field_user_pseudonym'] = array(
    'name' => 'edit field_user_pseudonym',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_public_mail.
  $permissions['edit field_user_public_mail'] = array(
    'name' => 'edit field_user_public_mail',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_question_form_closed.
  $permissions['edit field_user_question_form_closed'] = array(
    'name' => 'edit field_user_question_form_closed',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_retired.
  $permissions['edit field_user_retired'] = array(
    'name' => 'edit field_user_retired',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_roles_for_view_mode_s.
  $permissions['edit field_user_roles_for_view_mode_s'] = array(
    'name' => 'edit field_user_roles_for_view_mode_s',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_title.
  $permissions['edit field_user_title'] = array(
    'name' => 'edit field_user_title',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_twitter_account.
  $permissions['edit field_user_twitter_account'] = array(
    'name' => 'edit field_user_twitter_account',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_valid.
  $permissions['edit field_user_valid'] = array(
    'name' => 'edit field_user_valid',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own calendar_entry content.
  $permissions['edit own calendar_entry content'] = array(
    'name' => 'edit own calendar_entry content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own field_user_about.
  $permissions['edit own field_user_about'] = array(
    'name' => 'edit own field_user_about',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_address.
  $permissions['edit own field_user_address'] = array(
    'name' => 'edit own field_user_address',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_age.
  $permissions['edit own field_user_age'] = array(
    'name' => 'edit own field_user_age',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_birthday.
  $permissions['edit own field_user_birthday'] = array(
    'name' => 'edit own field_user_birthday',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_childs.
  $permissions['edit own field_user_childs'] = array(
    'name' => 'edit own field_user_childs',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_commitee.
  $permissions['edit own field_user_commitee'] = array(
    'name' => 'edit own field_user_commitee',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_constituency.
  $permissions['edit own field_user_constituency'] = array(
    'name' => 'edit own field_user_constituency',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_constituency_won.
  $permissions['edit own field_user_constituency_won'] = array(
    'name' => 'edit own field_user_constituency_won',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_education.
  $permissions['edit own field_user_education'] = array(
    'name' => 'edit own field_user_education',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_election_result.
  $permissions['edit own field_user_election_result'] = array(
    'name' => 'edit own field_user_election_result',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_external_url.
  $permissions['edit own field_user_external_url'] = array(
    'name' => 'edit own field_user_external_url',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_fname.
  $permissions['edit own field_user_fname'] = array(
    'name' => 'edit own field_user_fname',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_fraction.
  $permissions['edit own field_user_fraction'] = array(
    'name' => 'edit own field_user_fraction',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_gender.
  $permissions['edit own field_user_gender'] = array(
    'name' => 'edit own field_user_gender',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_image_gallery.
  $permissions['edit own field_user_image_gallery'] = array(
    'name' => 'edit own field_user_image_gallery',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_job_skills.
  $permissions['edit own field_user_job_skills'] = array(
    'name' => 'edit own field_user_job_skills',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_joined.
  $permissions['edit own field_user_joined'] = array(
    'name' => 'edit own field_user_joined',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_links_more.
  $permissions['edit own field_user_links_more'] = array(
    'name' => 'edit own field_user_links_more',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_list.
  $permissions['edit own field_user_list'] = array(
    'name' => 'edit own field_user_list',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_list_position.
  $permissions['edit own field_user_list_position'] = array(
    'name' => 'edit own field_user_list_position',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_list_won.
  $permissions['edit own field_user_list_won'] = array(
    'name' => 'edit own field_user_list_won',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_lname.
  $permissions['edit own field_user_lname'] = array(
    'name' => 'edit own field_user_lname',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_marriage_status.
  $permissions['edit own field_user_marriage_status'] = array(
    'name' => 'edit own field_user_marriage_status',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_parliament.
  $permissions['edit own field_user_parliament'] = array(
    'name' => 'edit own field_user_parliament',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_party.
  $permissions['edit own field_user_party'] = array(
    'name' => 'edit own field_user_party',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_phone.
  $permissions['edit own field_user_phone'] = array(
    'name' => 'edit own field_user_phone',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_picture.
  $permissions['edit own field_user_picture'] = array(
    'name' => 'edit own field_user_picture',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Deputy',
      2 => 'Premium User',
      3 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_picture_copyright.
  $permissions['edit own field_user_picture_copyright'] = array(
    'name' => 'edit own field_user_picture_copyright',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_political_goals.
  $permissions['edit own field_user_political_goals'] = array(
    'name' => 'edit own field_user_political_goals',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_political_roles.
  $permissions['edit own field_user_political_roles'] = array(
    'name' => 'edit own field_user_political_roles',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_pseudonym.
  $permissions['edit own field_user_pseudonym'] = array(
    'name' => 'edit own field_user_pseudonym',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_public_mail.
  $permissions['edit own field_user_public_mail'] = array(
    'name' => 'edit own field_user_public_mail',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_question_form_closed.
  $permissions['edit own field_user_question_form_closed'] = array(
    'name' => 'edit own field_user_question_form_closed',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_retired.
  $permissions['edit own field_user_retired'] = array(
    'name' => 'edit own field_user_retired',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_roles_for_view_mode_s.
  $permissions['edit own field_user_roles_for_view_mode_s'] = array(
    'name' => 'edit own field_user_roles_for_view_mode_s',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_title.
  $permissions['edit own field_user_title'] = array(
    'name' => 'edit own field_user_title',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_twitter_account.
  $permissions['edit own field_user_twitter_account'] = array(
    'name' => 'edit own field_user_twitter_account',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_valid.
  $permissions['edit own field_user_valid'] = array(
    'name' => 'edit own field_user_valid',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: use text format copyright.
  $permissions['use text format copyright'] = array(
    'name' => 'use text format copyright',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Politician',
      2 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
      7 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format managed_content.
  $permissions['use text format managed_content'] = array(
    'name' => 'use text format managed_content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: view field_user_about.
  $permissions['view field_user_about'] = array(
    'name' => 'view field_user_about',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
      7 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_address.
  $permissions['view field_user_address'] = array(
    'name' => 'view field_user_address',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
      7 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_age.
  $permissions['view field_user_age'] = array(
    'name' => 'view field_user_age',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_birthday.
  $permissions['view field_user_birthday'] = array(
    'name' => 'view field_user_birthday',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_childs.
  $permissions['view field_user_childs'] = array(
    'name' => 'view field_user_childs',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
      7 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_commitee.
  $permissions['view field_user_commitee'] = array(
    'name' => 'view field_user_commitee',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
      7 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_constituency.
  $permissions['view field_user_constituency'] = array(
    'name' => 'view field_user_constituency',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_constituency_won.
  $permissions['view field_user_constituency_won'] = array(
    'name' => 'view field_user_constituency_won',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_education.
  $permissions['view field_user_education'] = array(
    'name' => 'view field_user_education',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_election_result.
  $permissions['view field_user_election_result'] = array(
    'name' => 'view field_user_election_result',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_external_url.
  $permissions['view field_user_external_url'] = array(
    'name' => 'view field_user_external_url',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_fname.
  $permissions['view field_user_fname'] = array(
    'name' => 'view field_user_fname',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_fraction.
  $permissions['view field_user_fraction'] = array(
    'name' => 'view field_user_fraction',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_gender.
  $permissions['view field_user_gender'] = array(
    'name' => 'view field_user_gender',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
      7 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_image_gallery.
  $permissions['view field_user_image_gallery'] = array(
    'name' => 'view field_user_image_gallery',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
      7 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_job_skills.
  $permissions['view field_user_job_skills'] = array(
    'name' => 'view field_user_job_skills',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
      7 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_joined.
  $permissions['view field_user_joined'] = array(
    'name' => 'view field_user_joined',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_links_more.
  $permissions['view field_user_links_more'] = array(
    'name' => 'view field_user_links_more',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_list.
  $permissions['view field_user_list'] = array(
    'name' => 'view field_user_list',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_list_position.
  $permissions['view field_user_list_position'] = array(
    'name' => 'view field_user_list_position',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
      7 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_list_won.
  $permissions['view field_user_list_won'] = array(
    'name' => 'view field_user_list_won',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_lname.
  $permissions['view field_user_lname'] = array(
    'name' => 'view field_user_lname',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_marriage_status.
  $permissions['view field_user_marriage_status'] = array(
    'name' => 'view field_user_marriage_status',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
      7 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_parliament.
  $permissions['view field_user_parliament'] = array(
    'name' => 'view field_user_parliament',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
      7 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_party.
  $permissions['view field_user_party'] = array(
    'name' => 'view field_user_party',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_phone.
  $permissions['view field_user_phone'] = array(
    'name' => 'view field_user_phone',
    'roles' => array(
      0 => 'API User',
      1 => 'Content Manager',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_picture.
  $permissions['view field_user_picture'] = array(
    'name' => 'view field_user_picture',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Politician',
      2 => 'administrator',
      3 => 'anonymous user',
      4 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_picture_copyright.
  $permissions['view field_user_picture_copyright'] = array(
    'name' => 'view field_user_picture_copyright',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_political_goals.
  $permissions['view field_user_political_goals'] = array(
    'name' => 'view field_user_political_goals',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
      7 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_political_roles.
  $permissions['view field_user_political_roles'] = array(
    'name' => 'view field_user_political_roles',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
      7 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_pseudonym.
  $permissions['view field_user_pseudonym'] = array(
    'name' => 'view field_user_pseudonym',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_public_mail.
  $permissions['view field_user_public_mail'] = array(
    'name' => 'view field_user_public_mail',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_question_form_closed.
  $permissions['view field_user_question_form_closed'] = array(
    'name' => 'view field_user_question_form_closed',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_retired.
  $permissions['view field_user_retired'] = array(
    'name' => 'view field_user_retired',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_roles_for_view_mode_s.
  $permissions['view field_user_roles_for_view_mode_s'] = array(
    'name' => 'view field_user_roles_for_view_mode_s',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_title.
  $permissions['view field_user_title'] = array(
    'name' => 'view field_user_title',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_twitter_account.
  $permissions['view field_user_twitter_account'] = array(
    'name' => 'view field_user_twitter_account',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
      7 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_valid.
  $permissions['view field_user_valid'] = array(
    'name' => 'view field_user_valid',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view files.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      0 => 'Politician',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own field_user_about.
  $permissions['view own field_user_about'] = array(
    'name' => 'view own field_user_about',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
      3 => 'anonymous user',
      4 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_address.
  $permissions['view own field_user_address'] = array(
    'name' => 'view own field_user_address',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
      3 => 'anonymous user',
      4 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_age.
  $permissions['view own field_user_age'] = array(
    'name' => 'view own field_user_age',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_birthday.
  $permissions['view own field_user_birthday'] = array(
    'name' => 'view own field_user_birthday',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_childs.
  $permissions['view own field_user_childs'] = array(
    'name' => 'view own field_user_childs',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
      3 => 'anonymous user',
      4 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_commitee.
  $permissions['view own field_user_commitee'] = array(
    'name' => 'view own field_user_commitee',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
      3 => 'anonymous user',
      4 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_constituency.
  $permissions['view own field_user_constituency'] = array(
    'name' => 'view own field_user_constituency',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_constituency_won.
  $permissions['view own field_user_constituency_won'] = array(
    'name' => 'view own field_user_constituency_won',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_education.
  $permissions['view own field_user_education'] = array(
    'name' => 'view own field_user_education',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_election_result.
  $permissions['view own field_user_election_result'] = array(
    'name' => 'view own field_user_election_result',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_external_url.
  $permissions['view own field_user_external_url'] = array(
    'name' => 'view own field_user_external_url',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_fname.
  $permissions['view own field_user_fname'] = array(
    'name' => 'view own field_user_fname',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_fraction.
  $permissions['view own field_user_fraction'] = array(
    'name' => 'view own field_user_fraction',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_gender.
  $permissions['view own field_user_gender'] = array(
    'name' => 'view own field_user_gender',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
      3 => 'anonymous user',
      4 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_image_gallery.
  $permissions['view own field_user_image_gallery'] = array(
    'name' => 'view own field_user_image_gallery',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
      3 => 'anonymous user',
      4 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_job_skills.
  $permissions['view own field_user_job_skills'] = array(
    'name' => 'view own field_user_job_skills',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
      3 => 'anonymous user',
      4 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_joined.
  $permissions['view own field_user_joined'] = array(
    'name' => 'view own field_user_joined',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_links_more.
  $permissions['view own field_user_links_more'] = array(
    'name' => 'view own field_user_links_more',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_list.
  $permissions['view own field_user_list'] = array(
    'name' => 'view own field_user_list',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_list_position.
  $permissions['view own field_user_list_position'] = array(
    'name' => 'view own field_user_list_position',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
      3 => 'anonymous user',
      4 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_list_won.
  $permissions['view own field_user_list_won'] = array(
    'name' => 'view own field_user_list_won',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_lname.
  $permissions['view own field_user_lname'] = array(
    'name' => 'view own field_user_lname',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_marriage_status.
  $permissions['view own field_user_marriage_status'] = array(
    'name' => 'view own field_user_marriage_status',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
      3 => 'anonymous user',
      4 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_parliament.
  $permissions['view own field_user_parliament'] = array(
    'name' => 'view own field_user_parliament',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_party.
  $permissions['view own field_user_party'] = array(
    'name' => 'view own field_user_party',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_phone.
  $permissions['view own field_user_phone'] = array(
    'name' => 'view own field_user_phone',
    'roles' => array(
      0 => 'API User',
      1 => 'Content Manager',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_picture.
  $permissions['view own field_user_picture'] = array(
    'name' => 'view own field_user_picture',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
      3 => 'anonymous user',
      4 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_picture_copyright.
  $permissions['view own field_user_picture_copyright'] = array(
    'name' => 'view own field_user_picture_copyright',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_political_goals.
  $permissions['view own field_user_political_goals'] = array(
    'name' => 'view own field_user_political_goals',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
      3 => 'anonymous user',
      4 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_political_roles.
  $permissions['view own field_user_political_roles'] = array(
    'name' => 'view own field_user_political_roles',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
      3 => 'anonymous user',
      4 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_pseudonym.
  $permissions['view own field_user_pseudonym'] = array(
    'name' => 'view own field_user_pseudonym',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_public_mail.
  $permissions['view own field_user_public_mail'] = array(
    'name' => 'view own field_user_public_mail',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_question_form_closed.
  $permissions['view own field_user_question_form_closed'] = array(
    'name' => 'view own field_user_question_form_closed',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_retired.
  $permissions['view own field_user_retired'] = array(
    'name' => 'view own field_user_retired',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_roles_for_view_mode_s.
  $permissions['view own field_user_roles_for_view_mode_s'] = array(
    'name' => 'view own field_user_roles_for_view_mode_s',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_title.
  $permissions['view own field_user_title'] = array(
    'name' => 'view own field_user_title',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_twitter_account.
  $permissions['view own field_user_twitter_account'] = array(
    'name' => 'view own field_user_twitter_account',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
      3 => 'anonymous user',
      4 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_valid.
  $permissions['view own field_user_valid'] = array(
    'name' => 'view own field_user_valid',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own files.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Deputy',
      2 => 'Premium User',
      3 => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own private files.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Politician',
      2 => 'administrator',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
