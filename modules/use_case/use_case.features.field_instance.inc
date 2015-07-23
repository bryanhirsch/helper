<?php
/**
 * @file
 * use_case.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function use_case_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-use_case-field_use_case_description'
  $field_instances['node-use_case-field_use_case_description'] = array(
    'bundle' => 'use_case',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_use_case_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-use_case-field_use_case_recommendations'
  $field_instances['node-use_case-field_use_case_recommendations'] = array(
    'bundle' => 'use_case',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Pair Acquia\'s recommended solutions with the use case described above.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_use_case_recommendations',
    'label' => 'Recommendations',
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
      'weight' => -2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Description');
  t('Pair Acquia\'s recommended solutions with the use case described above.');
  t('Recommendations');

  return $field_instances;
}
