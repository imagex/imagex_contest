<?php
/**
 * @file
 * imagex_contest_voting.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function imagex_contest_voting_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.imagex_contest_entries.display|default|display_options|fields|value"] = array(
    'id' => 'value',
    'table' => 'votingapi_cache',
    'field' => 'value',
    'relationship' => 'votingapi_cache',
    'label' => '',
    'element_label_colon' => FALSE,
    'format_plural' => TRUE,
    'format_plural_singular' => '1 vote',
    'format_plural_plural' => '@count votes',
  );
  $overrides["views_view.imagex_contest_entries.display|default|display_options|relationships|votingapi_cache"] = array(
    'id' => 'votingapi_cache',
    'table' => 'node',
    'field' => 'votingapi_cache',
    'votingapi' => array(
      'value_type' => 'points',
      'tag' => 'vote',
      'function' => 'sum',
    ),
  );
  $overrides["views_view.imagex_contest_entries.display|default|display_options|sorts|value"] = array(
    'id' => 'value',
    'table' => 'votingapi_cache',
    'field' => 'value',
    'relationship' => 'votingapi_cache',
    'order' => 'DESC',
    'coalesce' => 1,
  );
  $overrides["views_view.imagex_contest_entries_admin.display|default|display_options|fields|value"] = array(
    'id' => 'value',
    'table' => 'votingapi_cache',
    'field' => 'value',
    'relationship' => 'votingapi_cache',
    'label' => 'Votes',
    'element_label_colon' => FALSE,
    'format_plural_singular' => '1 vote',
    'format_plural_plural' => '@count votes',
  );
  $overrides["views_view.imagex_contest_entries_admin.display|default|display_options|relationships|votingapi_cache"] = array(
    'id' => 'votingapi_cache',
    'table' => 'node',
    'field' => 'votingapi_cache',
    'votingapi' => array(
      'value_type' => 'points',
      'tag' => 'vote',
      'function' => 'sum',
    ),
  );
  $overrides["views_view.imagex_contest_entries_admin.display|default|display_options|style_options|columns|field_contest_entry_status"] = 'field_contest_entry_status';
  $overrides["views_view.imagex_contest_entries_admin.display|default|display_options|style_options|columns|name"] = 'name';
  $overrides["views_view.imagex_contest_entries_admin.display|default|display_options|style_options|columns|value"] = 'value';
  $overrides["views_view.imagex_contest_entries_admin.display|default|display_options|style_options|columns|views_bulk_operations"] = 'views_bulk_operations';
  $overrides["views_view.imagex_contest_entries_admin.display|default|display_options|style_options|info|field_contest_entry_status"] = array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  );
  $overrides["views_view.imagex_contest_entries_admin.display|default|display_options|style_options|info|name"] = array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  );
  $overrides["views_view.imagex_contest_entries_admin.display|default|display_options|style_options|info|value"] = array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  );
  $overrides["views_view.imagex_contest_entries_admin.display|default|display_options|style_options|info|views_bulk_operations"] = array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  );

 return $overrides;
}
