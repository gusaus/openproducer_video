<?php
/**
 * @file
 * openproducer_video.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openproducer_video_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node video content'.
  $permissions['administer panelizer node video content'] = array(
    'name' => 'administer panelizer node video content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node video layout'.
  $permissions['administer panelizer node video layout'] = array(
    'name' => 'administer panelizer node video layout',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  return $permissions;
}
