<?php
/**
 * @file
 * imagex_contest.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function imagex_contest_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'imagex_contest_overview';
  $page->task = 'page';
  $page->admin_title = 'ImageX Contest Overview';
  $page->admin_description = 'Overview of contest nodes';
  $page->path = 'node/%uuid_menu_links_universal_node_load/contest';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'create contest content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'contest' => 'contest',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Contest Overview',
    'name' => 'navigation',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'uuid_menu_links_universal_node_load' => array(
      'id' => 1,
      'identifier' => 'Node: UUID',
      'name' => 'entity_uuid:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_imagex_contest_overview_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'imagex_contest_overview';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Overview',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b43c745a-230c-4c88-9f7d-bf0df0b16a58';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bc23bd6b-e52e-4c6f-8529-c93c73102bba';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'imagex_contest_entries_admin-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '30',
      'path' => 'node/%uuid_menu_links_universal_node_load:nid/contest',
      'fields_override' => array(
        'views_bulk_operations' => 1,
        'title' => 1,
        'name' => 1,
        'body' => 1,
        'field_contest_entry_status' => 1,
        'delete_node' => 1,
        'edit_node' => 1,
        'view_node' => 1,
        'value' => 1,
      ),
      'exposed' => array(
        'field_contest_entry_status_value' => 'All',
      ),
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Contest Entries',
      'arguments' => array(
        'field_contest_entry_contest_target_id' => '%uuid_menu_links_universal_node_load:nid',
      ),
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-title-page-title',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bc23bd6b-e52e-4c6f-8529-c93c73102bba';
    $display->content['new-bc23bd6b-e52e-4c6f-8529-c93c73102bba'] = $pane;
    $display->panels['one_main'][0] = 'new-bc23bd6b-e52e-4c6f-8529-c93c73102bba';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['imagex_contest_overview'] = $page;

  features_alter_code('page_manager_pages', $pages);

  return $pages;

}
