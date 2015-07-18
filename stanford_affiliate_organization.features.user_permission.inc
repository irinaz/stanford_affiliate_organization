<?php
/**
 * @file
 * stanford_affiliate_organization.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function stanford_affiliate_organization_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create affiliate_organization content'.
  $permissions['create affiliate_organization content'] = array(
    'name' => 'create affiliate_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any affiliate_organization content'.
  $permissions['delete any affiliate_organization content'] = array(
    'name' => 'delete any affiliate_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own affiliate_organization content'.
  $permissions['delete own affiliate_organization content'] = array(
    'name' => 'delete own affiliate_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any affiliate_organization content'.
  $permissions['edit any affiliate_organization content'] = array(
    'name' => 'edit any affiliate_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own affiliate_organization content'.
  $permissions['edit own affiliate_organization content'] = array(
    'name' => 'edit own affiliate_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  return $permissions;
}
