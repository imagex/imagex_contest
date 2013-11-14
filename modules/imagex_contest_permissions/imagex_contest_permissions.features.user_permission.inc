<?php
/**
 * @file
 * imagex_contest_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function imagex_contest_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node contest content'.
  $permissions['administer panelizer node contest content'] = array(
    'name' => 'administer panelizer node contest content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contest context'.
  $permissions['administer panelizer node contest context'] = array(
    'name' => 'administer panelizer node contest context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contest defaults'.
  $permissions['administer panelizer node contest defaults'] = array(
    'name' => 'administer panelizer node contest defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contest layout'.
  $permissions['administer panelizer node contest layout'] = array(
    'name' => 'administer panelizer node contest layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contest overview'.
  $permissions['administer panelizer node contest overview'] = array(
    'name' => 'administer panelizer node contest overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contest settings'.
  $permissions['administer panelizer node contest settings'] = array(
    'name' => 'administer panelizer node contest settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contest_entry defaults'.
  $permissions['administer panelizer node contest_entry defaults'] = array(
    'name' => 'administer panelizer node contest_entry defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create contest content'.
  $permissions['create contest content'] = array(
    'name' => 'create contest content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create contest_entry content'.
  $permissions['create contest_entry content'] = array(
    'name' => 'create contest_entry content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any contest content'.
  $permissions['delete any contest content'] = array(
    'name' => 'delete any contest content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any contest_entry content'.
  $permissions['delete any contest_entry content'] = array(
    'name' => 'delete any contest_entry content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own contest content'.
  $permissions['delete own contest content'] = array(
    'name' => 'delete own contest content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own contest_entry content'.
  $permissions['delete own contest_entry content'] = array(
    'name' => 'delete own contest_entry content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any contest content'.
  $permissions['edit any contest content'] = array(
    'name' => 'edit any contest content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any contest_entry content'.
  $permissions['edit any contest_entry content'] = array(
    'name' => 'edit any contest_entry content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own contest content'.
  $permissions['edit own contest content'] = array(
    'name' => 'edit own contest content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own contest_entry content'.
  $permissions['edit own contest_entry content'] = array(
    'name' => 'edit own contest_entry content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
