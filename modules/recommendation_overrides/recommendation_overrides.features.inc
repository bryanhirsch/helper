<?php
/**
 * @file
 * recommendation_overrides.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function recommendation_overrides_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function recommendation_overrides_node_info() {
  $items = array(
    'recommendation_overrides' => array(
      'name' => t('Recommendation Overrides'),
      'base' => 'node_content',
      'description' => t('Override recommendations assumed by use cases. Use cases assume a customer, sales rep, or SA knows what they want. Overrides are for telling them what they really want when we know better. For example, Alice might want HIPAA compliance and Secure VPN, but it hadn\'t occurred to her that she needs a VPC. Bob can create an override that says: When you want HIPAA and VPN, you must get Shield, and should not recommend things like the Secure VPN addon or shared HIPAA environment.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
