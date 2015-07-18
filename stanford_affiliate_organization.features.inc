<?php
/**
 * @file
 * stanford_affiliate_organization.features.inc
 */

/**
 * Implements hook_block_class_features_default_class().
 */
function stanford_affiliate_organization_block_class_features_default_class() {
  return array(
    'bean:jumpstart-affiliated-programs' => array(
      'module' => 'bean',
      'delta' => 'jumpstart-affiliated-programs',
      'css_classes' => 'well',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_affiliate_organization_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_affiliate_organization_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function stanford_affiliate_organization_node_info() {
  $items = array(
    'affiliate_organization' => array(
      'name' => t('Affiliate Organization'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
