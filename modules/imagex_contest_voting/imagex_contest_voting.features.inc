<?php
/**
 * @file
 * imagex_contest_voting.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imagex_contest_voting_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function imagex_contest_voting_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_views_default_views_alter().
 */
function imagex_contest_voting_views_default_views_alter(&$data) {
  if (isset($data['imagex_contest_entries'])) {
    $data['imagex_contest_entries']->display['default']->display_options['fields']['value'] = array(
      'id' => 'value',
      'table' => 'votingapi_cache',
      'field' => 'value',
      'relationship' => 'votingapi_cache',
      'label' => '',
      'element_label_colon' => FALSE,
      'format_plural' => TRUE,
      'format_plural_singular' => '1 vote',
      'format_plural_plural' => '@count votes',
    ); /* WAS: '' */
    $data['imagex_contest_entries']->display['default']->display_options['relationships']['votingapi_cache'] = array(
      'id' => 'votingapi_cache',
      'table' => 'node',
      'field' => 'votingapi_cache',
      'votingapi' => array(
        'value_type' => 'points',
        'tag' => 'vote',
        'function' => 'sum',
      ),
    ); /* WAS: '' */
    $data['imagex_contest_entries']->display['default']->display_options['sorts']['value'] = array(
      'id' => 'value',
      'table' => 'votingapi_cache',
      'field' => 'value',
      'relationship' => 'votingapi_cache',
      'order' => 'DESC',
      'coalesce' => 1,
    ); /* WAS: '' */
  }
  if (isset($data['imagex_contest_entries_admin'])) {
    $data['imagex_contest_entries_admin']->display['default']->display_options['fields']['value'] = array(
      'id' => 'value',
      'table' => 'votingapi_cache',
      'field' => 'value',
      'relationship' => 'votingapi_cache',
      'label' => 'Votes',
      'element_label_colon' => FALSE,
      'format_plural_singular' => '1 vote',
      'format_plural_plural' => '@count votes',
    ); /* WAS: '' */
    $data['imagex_contest_entries_admin']->display['default']->display_options['relationships']['votingapi_cache'] = array(
      'id' => 'votingapi_cache',
      'table' => 'node',
      'field' => 'votingapi_cache',
      'votingapi' => array(
        'value_type' => 'points',
        'tag' => 'vote',
        'function' => 'sum',
      ),
    ); /* WAS: '' */
    $data['imagex_contest_entries_admin']->display['default']->display_options['style_options']['columns']['field_contest_entry_status'] = 'field_contest_entry_status'; /* WAS: '' */
    $data['imagex_contest_entries_admin']->display['default']->display_options['style_options']['columns']['name'] = 'name'; /* WAS: '' */
    $data['imagex_contest_entries_admin']->display['default']->display_options['style_options']['columns']['value'] = 'value'; /* WAS: '' */
    $data['imagex_contest_entries_admin']->display['default']->display_options['style_options']['columns']['views_bulk_operations'] = 'views_bulk_operations'; /* WAS: '' */
    $data['imagex_contest_entries_admin']->display['default']->display_options['style_options']['info']['field_contest_entry_status'] = array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ); /* WAS: '' */
    $data['imagex_contest_entries_admin']->display['default']->display_options['style_options']['info']['name'] = array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ); /* WAS: '' */
    $data['imagex_contest_entries_admin']->display['default']->display_options['style_options']['info']['value'] = array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ); /* WAS: '' */
    $data['imagex_contest_entries_admin']->display['default']->display_options['style_options']['info']['views_bulk_operations'] = array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ); /* WAS: '' */
  }
}
