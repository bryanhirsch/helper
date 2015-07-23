<?php
/**
 * @file
 * helper_tool.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function helper_tool_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-helper_tool-field_helper_tool_use_cases'
  $field_instances['node-helper_tool-field_helper_tool_use_cases'] = array(
    'bundle' => 'helper_tool',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_helper_tool_use_cases',
    'label' => 'Use cases',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Use cases');

  return $field_instances;
}
