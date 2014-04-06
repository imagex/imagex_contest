<?php
/**
 * @file
 * imagex_contest.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function imagex_contest_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:contest:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'contest';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'one_fw';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'dbcc293c-3e08-444e-b39e-dc7f1500c193';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9d8fef2c-9091-4eb9-bd42-73db040374fb';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'home_page-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'type' => '',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'standard-bean recent-events filtered-view landing-pages-left-bar',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9d8fef2c-9091-4eb9-bd42-73db040374fb';
    $display->content['new-9d8fef2c-9091-4eb9-bd42-73db040374fb'] = $pane;
    $display->panels['three_25_50_25_first'][0] = 'new-9d8fef2c-9091-4eb9-bd42-73db040374fb';
    $pane = new stdClass();
    $pane->pid = 'new-7a08558c-fa78-449f-8bc4-f9c1f378ebba';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'block';
    $pane->subtype = 'bean-ad-space-homepage-right-top';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7a08558c-fa78-449f-8bc4-f9c1f378ebba';
    $display->content['new-7a08558c-fa78-449f-8bc4-f9c1f378ebba'] = $pane;
    $display->panels['three_25_50_25_first'][1] = 'new-7a08558c-fa78-449f-8bc4-f9c1f378ebba';
    $pane = new stdClass();
    $pane->pid = 'new-c06f0d99-b724-4645-8b3e-20f9480c3ac6';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '%node:title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c06f0d99-b724-4645-8b3e-20f9480c3ac6';
    $display->content['new-c06f0d99-b724-4645-8b3e-20f9480c3ac6'] = $pane;
    $display->panels['three_25_50_25_second'][0] = 'new-c06f0d99-b724-4645-8b3e-20f9480c3ac6';
    $pane = new stdClass();
    $pane->pid = 'new-6ca888d6-f852-4a59-8e89-3bb6d8482613';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-author',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6ca888d6-f852-4a59-8e89-3bb6d8482613';
    $display->content['new-6ca888d6-f852-4a59-8e89-3bb6d8482613'] = $pane;
    $display->panels['three_25_50_25_second'][1] = 'new-6ca888d6-f852-4a59-8e89-3bb6d8482613';
    $pane = new stdClass();
    $pane->pid = 'new-754287d3-e003-42cf-bec7-8c8f7c2b14ee';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'medium',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-date',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '754287d3-e003-42cf-bec7-8c8f7c2b14ee';
    $display->content['new-754287d3-e003-42cf-bec7-8c8f7c2b14ee'] = $pane;
    $display->panels['three_25_50_25_second'][2] = 'new-754287d3-e003-42cf-bec7-8c8f7c2b14ee';
    $pane = new stdClass();
    $pane->pid = 'new-9b363d15-753e-4c99-a51e-f86a08f7e2d7';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Comment Count (custom)',
      'title' => '',
      'body' => '<a href="#comments" class="comment-count"><span class="comments-icon"></span>%node:comment-count</a>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-comment-counter',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9b363d15-753e-4c99-a51e-f86a08f7e2d7';
    $display->content['new-9b363d15-753e-4c99-a51e-f86a08f7e2d7'] = $pane;
    $display->panels['three_25_50_25_second'][3] = 'new-9b363d15-753e-4c99-a51e-f86a08f7e2d7';
    $pane = new stdClass();
    $pane->pid = 'new-c6b44ba3-e553-4c38-9764-0cb29712ce85';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c6b44ba3-e553-4c38-9764-0cb29712ce85';
    $display->content['new-c6b44ba3-e553-4c38-9764-0cb29712ce85'] = $pane;
    $display->panels['three_25_50_25_second'][4] = 'new-c6b44ba3-e553-4c38-9764-0cb29712ce85';
    $pane = new stdClass();
    $pane->pid = 'new-3f570978-c25d-46aa-a343-8dffbb701e73';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contest_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-media',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '3f570978-c25d-46aa-a343-8dffbb701e73';
    $display->content['new-3f570978-c25d-46aa-a343-8dffbb701e73'] = $pane;
    $display->panels['three_25_50_25_second'][5] = 'new-3f570978-c25d-46aa-a343-8dffbb701e73';
    $pane = new stdClass();
    $pane->pid = 'new-4abf7a6e-0ab3-499a-8d05-f6cf91e788ec';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contest_rules';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '4abf7a6e-0ab3-499a-8d05-f6cf91e788ec';
    $display->content['new-4abf7a6e-0ab3-499a-8d05-f6cf91e788ec'] = $pane;
    $display->panels['three_25_50_25_second'][6] = 'new-4abf7a6e-0ab3-499a-8d05-f6cf91e788ec';
    $pane = new stdClass();
    $pane->pid = 'new-da0309cd-bd65-42cf-8e45-3c556f4e0554';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contest_entry_deadline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_repeat_rule' => 'show',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'da0309cd-bd65-42cf-8e45-3c556f4e0554';
    $display->content['new-da0309cd-bd65-42cf-8e45-3c556f4e0554'] = $pane;
    $display->panels['three_25_50_25_second'][7] = 'new-da0309cd-bd65-42cf-8e45-3c556f4e0554';
    $pane = new stdClass();
    $pane->pid = 'new-f0a11e97-418c-482c-a7b9-94bc75e7c125';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contest_voting_deadline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_repeat_rule' => 'show',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'f0a11e97-418c-482c-a7b9-94bc75e7c125';
    $display->content['new-f0a11e97-418c-482c-a7b9-94bc75e7c125'] = $pane;
    $display->panels['three_25_50_25_second'][8] = 'new-f0a11e97-418c-482c-a7b9-94bc75e7c125';
    $pane = new stdClass();
    $pane->pid = 'new-2c28c9b0-de3a-4de7-8f15-9165ab07cfde';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contest_entry_open';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '2c28c9b0-de3a-4de7-8f15-9165ab07cfde';
    $display->content['new-2c28c9b0-de3a-4de7-8f15-9165ab07cfde'] = $pane;
    $display->panels['three_25_50_25_second'][9] = 'new-2c28c9b0-de3a-4de7-8f15-9165ab07cfde';
    $pane = new stdClass();
    $pane->pid = 'new-f55af225-b283-4eb4-aca2-ce31696b8afd';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contest_voting_open';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'f55af225-b283-4eb4-aca2-ce31696b8afd';
    $display->content['new-f55af225-b283-4eb4-aca2-ce31696b8afd'] = $pane;
    $display->panels['three_25_50_25_second'][10] = 'new-f55af225-b283-4eb4-aca2-ce31696b8afd';
    $pane = new stdClass();
    $pane->pid = 'new-6e182a0c-e28c-460f-add4-72ee6c144503';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'imagex_contest_entries-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '30',
      'path' => '',
      'fields_override' => array(
        'title' => 1,
        'name' => 1,
        'value' => 1,
        'field_contest_entry_status' => 0,
        'field_contest_entry_media' => 0,
        'body' => 0,
      ),
      'exposed' => array(
        'field_contest_entry_status_value_op' => 'or',
        'field_contest_entry_status_value' => array(
          2 => '2',
        ),
      ),
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 1,
      'override_title_text' => 'The Winners',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'standard-bean standard-bean-full contest-winners',
    );
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '6e182a0c-e28c-460f-add4-72ee6c144503';
    $display->content['new-6e182a0c-e28c-460f-add4-72ee6c144503'] = $pane;
    $display->panels['three_25_50_25_second'][11] = 'new-6e182a0c-e28c-460f-add4-72ee6c144503';
    $pane = new stdClass();
    $pane->pid = 'new-a0456eb3-b18a-4b65-a0de-e0e723c5894c';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'imagex_contest_entries-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '30',
      'path' => '',
      'fields_override' => array(
        'title' => 1,
        'name' => 1,
        'value' => 1,
        'field_contest_entry_status' => 0,
        'field_contest_entry_media' => 0,
        'body' => 0,
      ),
      'exposed' => array(
        'field_contest_entry_status_value_op' => 'or',
        'field_contest_entry_status_value' => array(
          1 => '1',
        ),
      ),
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 1,
      'override_title_text' => 'The Finalists',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'standard-bean standard-bean-full contest-finalists',
    );
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = 'a0456eb3-b18a-4b65-a0de-e0e723c5894c';
    $display->content['new-a0456eb3-b18a-4b65-a0de-e0e723c5894c'] = $pane;
    $display->panels['three_25_50_25_second'][12] = 'new-a0456eb3-b18a-4b65-a0de-e0e723c5894c';
    $pane = new stdClass();
    $pane->pid = 'new-e1af69c7-f7de-4122-a662-595195966eda';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = 'e1af69c7-f7de-4122-a662-595195966eda';
    $display->content['new-e1af69c7-f7de-4122-a662-595195966eda'] = $pane;
    $display->panels['three_25_50_25_second'][13] = 'new-e1af69c7-f7de-4122-a662-595195966eda';
    $pane = new stdClass();
    $pane->pid = 'new-2e12342a-d314-4d9e-b2d1-2af409661a1d';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 1,
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Comments',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = '2e12342a-d314-4d9e-b2d1-2af409661a1d';
    $display->content['new-2e12342a-d314-4d9e-b2d1-2af409661a1d'] = $pane;
    $display->panels['three_25_50_25_second'][14] = 'new-2e12342a-d314-4d9e-b2d1-2af409661a1d';
    $pane = new stdClass();
    $pane->pid = 'new-4271396c-465a-4ba1-a3a8-62fc02a86ae1';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = '4271396c-465a-4ba1-a3a8-62fc02a86ae1';
    $display->content['new-4271396c-465a-4ba1-a3a8-62fc02a86ae1'] = $pane;
    $display->panels['three_25_50_25_second'][15] = 'new-4271396c-465a-4ba1-a3a8-62fc02a86ae1';
    $pane = new stdClass();
    $pane->pid = 'new-5041171a-5fed-44e4-a84f-70f6726aa0a3';
    $pane->panel = 'three_25_50_25_third';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-join-us';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5041171a-5fed-44e4-a84f-70f6726aa0a3';
    $display->content['new-5041171a-5fed-44e4-a84f-70f6726aa0a3'] = $pane;
    $display->panels['three_25_50_25_third'][0] = 'new-5041171a-5fed-44e4-a84f-70f6726aa0a3';
    $pane = new stdClass();
    $pane->pid = 'new-d34dafe0-6f0b-4edc-b9e8-972ccc0d5a11';
    $pane->panel = 'three_25_50_25_third';
    $pane->type = 'views_panes';
    $pane->subtype = 'home_page-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 1,
      'path' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'standard-bean',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd34dafe0-6f0b-4edc-b9e8-972ccc0d5a11';
    $display->content['new-d34dafe0-6f0b-4edc-b9e8-972ccc0d5a11'] = $pane;
    $display->panels['three_25_50_25_third'][1] = 'new-d34dafe0-6f0b-4edc-b9e8-972ccc0d5a11';
    $pane = new stdClass();
    $pane->pid = 'new-905b1c5d-0700-4ef5-a827-4521d3fce49f';
    $pane->panel = 'three_25_50_25_third';
    $pane->type = 'views_panes';
    $pane->subtype = 'home_page-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 1,
      'path' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'standard-bean',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '905b1c5d-0700-4ef5-a827-4521d3fce49f';
    $display->content['new-905b1c5d-0700-4ef5-a827-4521d3fce49f'] = $pane;
    $display->panels['three_25_50_25_third'][2] = 'new-905b1c5d-0700-4ef5-a827-4521d3fce49f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:contest:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:contest:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'contest';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'one_fw';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'f4d9e23c-706c-44a2-81b2-423145aad190';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-52d427d2-98e9-4cdc-b205-fa5e34cf49c1';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '52d427d2-98e9-4cdc-b205-fa5e34cf49c1';
    $display->content['new-52d427d2-98e9-4cdc-b205-fa5e34cf49c1'] = $pane;
    $display->panels['one_main'][0] = 'new-52d427d2-98e9-4cdc-b205-fa5e34cf49c1';
    $pane = new stdClass();
    $pane->pid = 'new-c4b206d5-67f8-45ad-b7c3-1aa99c1c9ec0';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contest_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'file_table',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c4b206d5-67f8-45ad-b7c3-1aa99c1c9ec0';
    $display->content['new-c4b206d5-67f8-45ad-b7c3-1aa99c1c9ec0'] = $pane;
    $display->panels['one_main'][1] = 'new-c4b206d5-67f8-45ad-b7c3-1aa99c1c9ec0';
    $pane = new stdClass();
    $pane->pid = 'new-68e31f40-aa61-4c50-8fba-a7d54801ed68';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contest_rules';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '68e31f40-aa61-4c50-8fba-a7d54801ed68';
    $display->content['new-68e31f40-aa61-4c50-8fba-a7d54801ed68'] = $pane;
    $display->panels['one_main'][2] = 'new-68e31f40-aa61-4c50-8fba-a7d54801ed68';
    $pane = new stdClass();
    $pane->pid = 'new-d57c6ae2-1323-433e-bfb1-1e374409749d';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contest_entry_deadline';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:contest:field_contest_entry_open',
          'settings' => array(
            'field_contest_entry_open' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_contest_entry_open_value' => '1',
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_repeat_rule' => 'show',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd57c6ae2-1323-433e-bfb1-1e374409749d';
    $display->content['new-d57c6ae2-1323-433e-bfb1-1e374409749d'] = $pane;
    $display->panels['one_main'][3] = 'new-d57c6ae2-1323-433e-bfb1-1e374409749d';
    $pane = new stdClass();
    $pane->pid = 'new-6916aea4-6fad-4a04-8817-4dab944b6a59';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contest_voting_deadline';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
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
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_repeat_rule' => 'show',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '6916aea4-6fad-4a04-8817-4dab944b6a59';
    $display->content['new-6916aea4-6fad-4a04-8817-4dab944b6a59'] = $pane;
    $display->panels['one_main'][4] = 'new-6916aea4-6fad-4a04-8817-4dab944b6a59';
    $pane = new stdClass();
    $pane->pid = 'new-0772b291-ba4d-4e93-b3d4-3dae27019dcb';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'imagex_contest_entries-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '30',
      'path' => '',
      'fields_override' => array(
        'title' => 1,
        'field_contest_entry_status' => 0,
        'field_contest_entry_media' => 1,
        'body' => 1,
        'name' => 1,
      ),
      'exposed' => array(
        'field_contest_entry_status_value_op' => 'or',
        'field_contest_entry_status_value' => array(
          2 => '2',
        ),
      ),
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 1,
      'override_title_text' => 'The Winners',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '0772b291-ba4d-4e93-b3d4-3dae27019dcb';
    $display->content['new-0772b291-ba4d-4e93-b3d4-3dae27019dcb'] = $pane;
    $display->panels['one_main'][5] = 'new-0772b291-ba4d-4e93-b3d4-3dae27019dcb';
    $pane = new stdClass();
    $pane->pid = 'new-ff1890db-0ca1-470a-89ef-e6299cee0279';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'imagex_contest_entries-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'path' => '',
      'fields_override' => array(
        'title' => 1,
        'field_contest_entry_status' => 0,
        'field_contest_entry_media' => 1,
        'body' => 1,
        'name' => 1,
      ),
      'exposed' => array(
        'field_contest_entry_status_value_op' => 'or',
        'field_contest_entry_status_value' => array(
          1 => '1',
        ),
      ),
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 1,
      'override_title_text' => 'The Finalists',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'ff1890db-0ca1-470a-89ef-e6299cee0279';
    $display->content['new-ff1890db-0ca1-470a-89ef-e6299cee0279'] = $pane;
    $display->panels['one_main'][6] = 'new-ff1890db-0ca1-470a-89ef-e6299cee0279';
    $pane = new stdClass();
    $pane->pid = 'new-9d41bfce-147a-41eb-aa4a-b23628ece968';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_addthis';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'context' => 'panelizer',
      'delta_limit' => 0,
      'delta_offset' => 0,
      'delta_reversed' => FALSE,
      'formatter' => 'addthis_basic_button',
      'formatter_settings' => array(
        'extra_css' => '',
        'button_size' => 'small',
      ),
      'label' => 'hidden',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '9d41bfce-147a-41eb-aa4a-b23628ece968';
    $display->content['new-9d41bfce-147a-41eb-aa4a-b23628ece968'] = $pane;
    $display->panels['one_main'][7] = 'new-9d41bfce-147a-41eb-aa4a-b23628ece968';
    $pane = new stdClass();
    $pane->pid = 'new-b244b572-0e8f-4654-a070-53c52011bf1d';
    $pane->panel = 'one_main';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'b244b572-0e8f-4654-a070-53c52011bf1d';
    $display->content['new-b244b572-0e8f-4654-a070-53c52011bf1d'] = $pane;
    $display->panels['one_main'][8] = 'new-b244b572-0e8f-4654-a070-53c52011bf1d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:contest:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:contest_entry:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'contest_entry';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'three_25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_25_50_25_top' => NULL,
      'three_25_50_25_first' => NULL,
      'three_25_50_25_second' => NULL,
      'three_25_50_25_third' => NULL,
      'three_25_50_25_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '5aef081c-6cce-4737-9d11-fe1bef292e74';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f4328404-9913-4bef-9338-31a48adcc1bf';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'block';
    $pane->subtype = 'bean-ad-space-homepage-right-top';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f4328404-9913-4bef-9338-31a48adcc1bf';
    $display->content['new-f4328404-9913-4bef-9338-31a48adcc1bf'] = $pane;
    $display->panels['three_25_50_25_first'][0] = 'new-f4328404-9913-4bef-9338-31a48adcc1bf';
    $pane = new stdClass();
    $pane->pid = 'new-44b122d8-5f6b-49ce-bd09-1068c8db330d';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '%node:title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '44b122d8-5f6b-49ce-bd09-1068c8db330d';
    $display->content['new-44b122d8-5f6b-49ce-bd09-1068c8db330d'] = $pane;
    $display->panels['three_25_50_25_second'][0] = 'new-44b122d8-5f6b-49ce-bd09-1068c8db330d';
    $pane = new stdClass();
    $pane->pid = 'new-53f7f298-1c6c-4a45-8197-94a217e49932';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-author',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '53f7f298-1c6c-4a45-8197-94a217e49932';
    $display->content['new-53f7f298-1c6c-4a45-8197-94a217e49932'] = $pane;
    $display->panels['three_25_50_25_second'][1] = 'new-53f7f298-1c6c-4a45-8197-94a217e49932';
    $pane = new stdClass();
    $pane->pid = 'new-313861f2-f48d-43bd-9e87-07d995e735da';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'medium',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-date',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '313861f2-f48d-43bd-9e87-07d995e735da';
    $display->content['new-313861f2-f48d-43bd-9e87-07d995e735da'] = $pane;
    $display->panels['three_25_50_25_second'][2] = 'new-313861f2-f48d-43bd-9e87-07d995e735da';
    $pane = new stdClass();
    $pane->pid = 'new-f0c6f79e-2424-4b49-983c-bf784bf0bcc7';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Comments Count (Custom)',
      'title' => '',
      'body' => '<a href="#comments" class="comment-count"><span class="comments-icon"></span>%node:comment-count</a>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-comment-counter node-meta-last',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f0c6f79e-2424-4b49-983c-bf784bf0bcc7';
    $display->content['new-f0c6f79e-2424-4b49-983c-bf784bf0bcc7'] = $pane;
    $display->panels['three_25_50_25_second'][3] = 'new-f0c6f79e-2424-4b49-983c-bf784bf0bcc7';
    $pane = new stdClass();
    $pane->pid = 'new-9b2f9d3f-d966-4439-acce-8d4723155825';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:contest_entry:field_contest_entry_status',
          'settings' => array(
            'field_contest_entry_status' => array(
              'und' => array(
                0 => array(
                  'value' => '2',
                ),
              ),
            ),
            'field_contest_entry_status_value' => array(
              2 => '2',
              1 => NULL,
            ),
          ),
          'context' => 'panelizer',
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:contest_entry:field_contest_entry_status',
          'settings' => array(
            'field_contest_entry_status' => array(
              'und' => array(
                0 => array(
                  'value' => '1',
                ),
              ),
            ),
            'field_contest_entry_status_value' => array(
              1 => '1',
              2 => NULL,
            ),
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Finalist',
      'title' => '',
      'body' => '<div class="contest-entry-status contest-finalist">Contest Finalist</div>',
      'format' => 'filtered_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-meta node-meta-last',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '9b2f9d3f-d966-4439-acce-8d4723155825';
    $display->content['new-9b2f9d3f-d966-4439-acce-8d4723155825'] = $pane;
    $display->panels['three_25_50_25_second'][4] = 'new-9b2f9d3f-d966-4439-acce-8d4723155825';
    $pane = new stdClass();
    $pane->pid = 'new-a6a9a08b-c80e-42a9-8899-ac3aa83ab64d';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:contest_entry:field_contest_entry_status',
          'settings' => array(
            'field_contest_entry_status' => array(
              'und' => array(
                0 => array(
                  'value' => '2',
                ),
              ),
            ),
            'field_contest_entry_status_value' => array(
              2 => '2',
              1 => NULL,
            ),
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Winner',
      'title' => '',
      'body' => '<div class="contest-entry-status contest-winner">Contest Winner</div>',
      'format' => 'full_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-meta node-meta-last',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'a6a9a08b-c80e-42a9-8899-ac3aa83ab64d';
    $display->content['new-a6a9a08b-c80e-42a9-8899-ac3aa83ab64d'] = $pane;
    $display->panels['three_25_50_25_second'][5] = 'new-a6a9a08b-c80e-42a9-8899-ac3aa83ab64d';
    $pane = new stdClass();
    $pane->pid = 'new-8bb10540-f514-4f6e-b45a-e0522140db3b';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '8bb10540-f514-4f6e-b45a-e0522140db3b';
    $display->content['new-8bb10540-f514-4f6e-b45a-e0522140db3b'] = $pane;
    $display->panels['three_25_50_25_second'][6] = 'new-8bb10540-f514-4f6e-b45a-e0522140db3b';
    $pane = new stdClass();
    $pane->pid = 'new-8180a8e3-1784-48f3-a3d6-5f5cd7bc1ba2';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contest_entry_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '8180a8e3-1784-48f3-a3d6-5f5cd7bc1ba2';
    $display->content['new-8180a8e3-1784-48f3-a3d6-5f5cd7bc1ba2'] = $pane;
    $display->panels['three_25_50_25_second'][7] = 'new-8180a8e3-1784-48f3-a3d6-5f5cd7bc1ba2';
    $pane = new stdClass();
    $pane->pid = 'new-6cba9a6b-ff71-47f5-9305-a76a77b53204';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contest_entry_contest';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => 'Contest Submitted To',
      'admin_title' => 'Finalist',
      'title' => '',
      'body' => '<div class="contest-finalist">Contest Finalist<div>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '6cba9a6b-ff71-47f5-9305-a76a77b53204';
    $display->content['new-6cba9a6b-ff71-47f5-9305-a76a77b53204'] = $pane;
    $display->panels['three_25_50_25_second'][8] = 'new-6cba9a6b-ff71-47f5-9305-a76a77b53204';
    $pane = new stdClass();
    $pane->pid = 'new-af811b63-369d-478d-b7bd-d0d93c2cffbb';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'af811b63-369d-478d-b7bd-d0d93c2cffbb';
    $display->content['new-af811b63-369d-478d-b7bd-d0d93c2cffbb'] = $pane;
    $display->panels['three_25_50_25_second'][9] = 'new-af811b63-369d-478d-b7bd-d0d93c2cffbb';
    $pane = new stdClass();
    $pane->pid = 'new-f39fb38e-98dd-48c4-b112-69133b4b68e1';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 1,
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Comments',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'f39fb38e-98dd-48c4-b112-69133b4b68e1';
    $display->content['new-f39fb38e-98dd-48c4-b112-69133b4b68e1'] = $pane;
    $display->panels['three_25_50_25_second'][10] = 'new-f39fb38e-98dd-48c4-b112-69133b4b68e1';
    $pane = new stdClass();
    $pane->pid = 'new-6446f2cc-18d5-4b80-8496-5c4935feb48d';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '6446f2cc-18d5-4b80-8496-5c4935feb48d';
    $display->content['new-6446f2cc-18d5-4b80-8496-5c4935feb48d'] = $pane;
    $display->panels['three_25_50_25_second'][11] = 'new-6446f2cc-18d5-4b80-8496-5c4935feb48d';
    $pane = new stdClass();
    $pane->pid = 'new-cc17b90d-86ae-4a02-839e-83166edef461';
    $pane->panel = 'three_25_50_25_third';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-join-us';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc17b90d-86ae-4a02-839e-83166edef461';
    $display->content['new-cc17b90d-86ae-4a02-839e-83166edef461'] = $pane;
    $display->panels['three_25_50_25_third'][0] = 'new-cc17b90d-86ae-4a02-839e-83166edef461';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:contest_entry:default'] = $panelizer;

  features_alter_code('panelizer_defaults', $export);

  return $export;
}
