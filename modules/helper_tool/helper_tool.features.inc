<?php
/**
 * @file
 * helper_tool.features.inc
 */

/**
 * Implements hook_node_info().
 */
function helper_tool_node_info() {
  $items = array(
    'helper_tool' => array(
      'name' => t('Helper Tool'),
      'base' => 'node_content',
      'description' => t('Provides helper tool '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
