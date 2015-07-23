<?php
/**
 * @file
 * recommendation.features.inc
 */

/**
 * Implements hook_node_info().
 */
function recommendation_node_info() {
  $items = array(
    'recommendation' => array(
      'name' => t('Recommendation'),
      'base' => 'node_content',
      'description' => t('Technical recommendations to fulfill use cases. (Tip: Make these as atomic as possible so one recommendation can be used to fulfill more than one use case.)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
