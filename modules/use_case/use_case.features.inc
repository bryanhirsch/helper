<?php
/**
 * @file
 * use_case.features.inc
 */

/**
 * Implements hook_node_info().
 */
function use_case_node_info() {
  $items = array(
    'use_case' => array(
      'name' => t('Use Case'),
      'base' => 'node_content',
      'description' => t('Customer use cases and associated technical recommendations.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
