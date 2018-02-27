<?php
/**
 * @file
 * pw_petitions.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pw_petitions_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_petition_content|node|pw_petition|form';
  $field_group->group_name = 'group_petition_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pw_petition';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_teaser_image',
      2 => 'field_blogpost_categories',
      3 => 'field_petition_end_date',
      4 => 'field_petition_partner',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-petition-content field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_petition_content|node|pw_petition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_petition_donation|node|pw_petition|form';
  $field_group->group_name = 'group_petition_donation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pw_petition';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Phase 2: donations',
    'weight' => '7',
    'children' => array(
      0 => 'field_donation_amount',
      1 => 'field_donation_progress',
      2 => 'field_donation_required',
      3 => 'field_petition_text_donation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Phase 2: donations',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-petition-donation field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_petition_donation|node|pw_petition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_petition_parliament|node|pw_petition|form';
  $field_group->group_name = 'group_petition_parliament';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pw_petition';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Phase 3: sent to parliament',
    'weight' => '8',
    'children' => array(
      0 => 'field_petition_text_parliament',
      1 => 'field_petition_welcome_message',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Phase 3: sent to parliament',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-petition-parliament field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_petition_parliament|node|pw_petition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_petition_passed|node|pw_petition|form';
  $field_group->group_name = 'group_petition_passed';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pw_petition';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Phase 4: Passed Parliament',
    'weight' => '9',
    'children' => array(
      0 => 'field_petition_text_passed',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-petition-passed field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_petition_passed|node|pw_petition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_petition_recipient|node|pw_petition|form';
  $field_group->group_name = 'group_petition_recipient';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pw_petition';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recipients',
    'weight' => '5',
    'children' => array(
      0 => 'field_petition_recipient',
      1 => 'field_parliament',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-petition-recipient field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_petition_recipient|node|pw_petition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_petition_signing|node|pw_petition|form';
  $field_group->group_name = 'group_petition_signing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pw_petition';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Phase 1:  signing',
    'weight' => '6',
    'children' => array(
      0 => 'field_petition_content',
      1 => 'field_petition_progress',
      2 => 'field_petition_required',
      3 => 'field_petition_signings',
      4 => 'field_petition_external_url',
      5 => 'field_petition_starter',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Phase 1:  signing',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-petition-signing field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_petition_signing|node|pw_petition|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Description');
  t('Phase 1:  signing');
  t('Phase 2: donations');
  t('Phase 3: sent to parliament');
  t('Phase 4: Passed Parliament');
  t('Recipients');

  return $field_groups;
}
