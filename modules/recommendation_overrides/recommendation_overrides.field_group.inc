<?php
/**
 * @file
 * recommendation_overrides.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function recommendation_overrides_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_do_not_recommend|node|recommendation_overrides|form';
  $field_group->group_name = 'group_do_not_recommend';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recommendation_overrides';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Do NOT recommend these',
    'weight' => '2',
    'children' => array(
      0 => 'field_recommendations_to_supress',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-do-not-recommend field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_do_not_recommend|node|recommendation_overrides|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dsm|node|recommendation_overrides|form';
  $field_group->group_name = 'group_dsm';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recommendation_overrides';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Drupal set messages',
    'weight' => '5',
    'children' => array(
      0 => 'field_override_error_message',
      1 => 'field_override_notice_message',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-dsm field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dsm|node|recommendation_overrides|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_override_these|node|recommendation_overrides|form';
  $field_group->group_name = 'group_override_these';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recommendation_overrides';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'If these recommendations appear at the same time...',
    'weight' => '1',
    'children' => array(
      0 => 'field_recommendations_to_overrid',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-override-these field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_override_these|node|recommendation_overrides|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recommend_these|node|recommendation_overrides|form';
  $field_group->group_name = 'group_recommend_these';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recommendation_overrides';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'DO recommend these',
    'weight' => '3',
    'children' => array(
      0 => 'field_recommendations_to_suggest',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-recommend-these field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_recommend_these|node|recommendation_overrides|form'] = $field_group;

  return $export;
}
