<?php
/**
 * @file
 * imagex_contest_voting.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function imagex_contest_voting_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'imagex_contest_vote';
  $page->task = 'page';
  $page->admin_title = 'ImageX Contest Vote';
  $page->admin_description = 'Overview of contest nodes';
  $page->path = 'node/%uuid_menu_links_universal_node_load/cast-vote';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'vote on contest entries',
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
      2 => array(
        'name' => 'entity_field_value:node:contest:field_contest_voting_open',
        'settings' => array(
          'field_contest_voting_open' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_contest_voting_open_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      3 => array(
        'name' => 'contest_has_entries_access',
        'settings' => NULL,
        'context' => 'argument_entity_uuid:node_1',
        'not' => FALSE,
      ),
    ),
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Vote Now',
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
  $handler->name = 'page_imagex_contest_vote_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'imagex_contest_vote';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Cast Vote',
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
  $display->title = 'Vote Now';
  $display->uuid = 'b70505d7-7401-4548-b253-a1c9ba55af26';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7bc84399-6914-4e62-a758-87ce56b17f1d';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'imagex_contest_entry_voting-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'arguments' => array(
        'field_contest_entry_contest_target_id' => '%uuid_menu_links_universal_node_load:nid',
      ),
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'standard-bean standard-bean-full',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7bc84399-6914-4e62-a758-87ce56b17f1d';
    $display->content['new-7bc84399-6914-4e62-a758-87ce56b17f1d'] = $pane;
    $display->panels['one_main'][0] = 'new-7bc84399-6914-4e62-a758-87ce56b17f1d';
    $pane = new stdClass();
    $pane->pid = 'new-3f30f04e-79a3-4494-8062-bd7fe800b0b5';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'imagex_contest_entry_voting-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '0',
      'path' => '',
      'fields_override' => array(
        'views_bulk_operations' => 1,
        'title' => 1,
        'name' => 1,
        'value' => 1,
      ),
      'override_title' => 1,
      'override_title_text' => 'Cast Your Vote Now',
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
    $pane->css = '';
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3f30f04e-79a3-4494-8062-bd7fe800b0b5';
    $display->content['new-3f30f04e-79a3-4494-8062-bd7fe800b0b5'] = $pane;
    $display->panels['one_main'][1] = 'new-3f30f04e-79a3-4494-8062-bd7fe800b0b5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['imagex_contest_vote'] = $page;

  features_alter_code('page_manager_pages', $pages);

  return $pages;

}
