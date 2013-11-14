<?php
/**
 * @file
 * imagex_contest.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imagex_contest_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function imagex_contest_node_info() {
  $items = array(
    'contest' => array(
      'name' => t('Contest'),
      'base' => 'node_content',
      'description' => t('A contest to which users can submit contest entries.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'contest_entry' => array(
      'name' => t('Contest Entry'),
      'base' => 'node_content',
      'description' => t('An entry into a contest.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
