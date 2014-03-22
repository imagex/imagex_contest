<?php
/**
 * @file
 * imagex_contest.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function imagex_contest_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'imagex_contest_contests';
  $view->description = 'Flexi content pane for displaying contest nodes';
  $view->tag = 'imagex_contest';
  $view->base_table = 'node';
  $view->human_name = 'Imagex Contest Contests';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contests';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['slave'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 0,
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
      ),
    ),
    'field_contest_entry_open_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_contest_voting_open_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Entry Deadline */
  $handler->display->display_options['fields']['field_contest_entry_deadline']['id'] = 'field_contest_entry_deadline';
  $handler->display->display_options['fields']['field_contest_entry_deadline']['table'] = 'field_data_field_contest_entry_deadline';
  $handler->display->display_options['fields']['field_contest_entry_deadline']['field'] = 'field_contest_entry_deadline';
  $handler->display->display_options['fields']['field_contest_entry_deadline']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_contest_entry_deadline']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_contest_entry_deadline']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Voting Deadline */
  $handler->display->display_options['fields']['field_contest_voting_deadline']['id'] = 'field_contest_voting_deadline';
  $handler->display->display_options['fields']['field_contest_voting_deadline']['table'] = 'field_data_field_contest_voting_deadline';
  $handler->display->display_options['fields']['field_contest_voting_deadline']['field'] = 'field_contest_voting_deadline';
  $handler->display->display_options['fields']['field_contest_voting_deadline']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_contest_voting_deadline']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_contest_voting_deadline']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Find Out More';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: Entry Deadline (field_contest_entry_deadline) */
  $handler->display->display_options['sorts']['field_contest_entry_deadline_value']['id'] = 'field_contest_entry_deadline_value';
  $handler->display->display_options['sorts']['field_contest_entry_deadline_value']['table'] = 'field_data_field_contest_entry_deadline';
  $handler->display->display_options['sorts']['field_contest_entry_deadline_value']['field'] = 'field_contest_entry_deadline_value';
  $handler->display->display_options['sorts']['field_contest_entry_deadline_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_contest_entry_deadline_value']['expose']['label'] = 'Entry Deadline';
  /* Sort criterion: Content: Voting Deadline (field_contest_voting_deadline) */
  $handler->display->display_options['sorts']['field_contest_voting_deadline_value']['id'] = 'field_contest_voting_deadline_value';
  $handler->display->display_options['sorts']['field_contest_voting_deadline_value']['table'] = 'field_data_field_contest_voting_deadline';
  $handler->display->display_options['sorts']['field_contest_voting_deadline_value']['field'] = 'field_contest_voting_deadline_value';
  $handler->display->display_options['sorts']['field_contest_voting_deadline_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_contest_voting_deadline_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_contest_voting_deadline_value']['expose']['label'] = 'Voting Deadline';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contest' => 'contest',
  );
  /* Filter criterion: Content: Open For Entries (field_contest_entry_open) */
  $handler->display->display_options['filters']['field_contest_entry_open_value']['id'] = 'field_contest_entry_open_value';
  $handler->display->display_options['filters']['field_contest_entry_open_value']['table'] = 'field_data_field_contest_entry_open';
  $handler->display->display_options['filters']['field_contest_entry_open_value']['field'] = 'field_contest_entry_open_value';
  $handler->display->display_options['filters']['field_contest_entry_open_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contest_entry_open_value']['expose']['operator_id'] = 'field_contest_entry_open_value_op';
  $handler->display->display_options['filters']['field_contest_entry_open_value']['expose']['label'] = 'Contest Open For Entries?';
  $handler->display->display_options['filters']['field_contest_entry_open_value']['expose']['operator'] = 'field_contest_entry_open_value_op';
  $handler->display->display_options['filters']['field_contest_entry_open_value']['expose']['identifier'] = 'field_contest_entry_open_value';
  $handler->display->display_options['filters']['field_contest_entry_open_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_contest_entry_open_value']['group_info']['label'] = 'Open For Entries (field_contest_entry_open)';
  $handler->display->display_options['filters']['field_contest_entry_open_value']['group_info']['identifier'] = 'field_contest_entry_open_value';
  $handler->display->display_options['filters']['field_contest_entry_open_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_contest_entry_open_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Entries Closed',
      'operator' => 'or',
      'value' => array(
        0 => '0',
      ),
    ),
    2 => array(
      'title' => 'Entries Open',
      'operator' => 'or',
      'value' => array(
        1 => '1',
      ),
    ),
  );
  $handler->display->display_options['filters']['field_contest_entry_open_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Open For Voting (field_contest_voting_open) */
  $handler->display->display_options['filters']['field_contest_voting_open_value']['id'] = 'field_contest_voting_open_value';
  $handler->display->display_options['filters']['field_contest_voting_open_value']['table'] = 'field_data_field_contest_voting_open';
  $handler->display->display_options['filters']['field_contest_voting_open_value']['field'] = 'field_contest_voting_open_value';
  $handler->display->display_options['filters']['field_contest_voting_open_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contest_voting_open_value']['expose']['operator_id'] = 'field_contest_voting_open_value_op';
  $handler->display->display_options['filters']['field_contest_voting_open_value']['expose']['label'] = 'Contest Open For Voting?';
  $handler->display->display_options['filters']['field_contest_voting_open_value']['expose']['operator'] = 'field_contest_voting_open_value_op';
  $handler->display->display_options['filters']['field_contest_voting_open_value']['expose']['identifier'] = 'field_contest_voting_open_value';
  $handler->display->display_options['filters']['field_contest_voting_open_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_contest_voting_open_value']['reduce_duplicates'] = TRUE;

  /* Display: Contests Content pane */
  $handler = $view->new_display('panel_pane', 'Contests Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'Imagex';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $export['imagex_contest_contests'] = $view;

  $view = new view();
  $view->name = 'imagex_contest_entries';
  $view->description = 'Displays entries for a given contest';
  $view->tag = 'imagex_contest';
  $view->base_table = 'node';
  $view->human_name = 'Imagex Contest Entries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contest Entries';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';  
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['slave'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
    'value_type' => 'points',
    'tag' => 'vote',
    'function' => 'sum',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'node-author';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['value']['element_wrapper_class'] = 'node-meta node-meta-last';
  $handler->display->display_options['fields']['value']['empty'] = '0 votes';
  $handler->display->display_options['fields']['value']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['value']['precision'] = '0';
  $handler->display->display_options['fields']['value']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['value']['format_plural_singular'] = '1 vote';
  $handler->display->display_options['fields']['value']['format_plural_plural'] = '@count votes';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_contest_entry_status']['id'] = 'field_contest_entry_status';
  $handler->display->display_options['fields']['field_contest_entry_status']['table'] = 'field_data_field_contest_entry_status';
  $handler->display->display_options['fields']['field_contest_entry_status']['field'] = 'field_contest_entry_status';
  $handler->display->display_options['fields']['field_contest_entry_status']['label'] = 'Selected as';
  $handler->display->display_options['fields']['field_contest_entry_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_contest_entry_status']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_contest_entry_status']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_contest_entry_status']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_contest_entry_status']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contest_entry_status']['separator'] = ' + ';
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_contest_entry_media']['id'] = 'field_contest_entry_media';
  $handler->display->display_options['fields']['field_contest_entry_media']['table'] = 'field_data_field_contest_entry_media';
  $handler->display->display_options['fields']['field_contest_entry_media']['field'] = 'field_contest_entry_media';
  $handler->display->display_options['fields']['field_contest_entry_media']['label'] = '';
  $handler->display->display_options['fields']['field_contest_entry_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contest_entry_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_contest_entry_media']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_contest_entry_media']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_contest_entry_media']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Vote results: Value */
  $handler->display->display_options['sorts']['value']['id'] = 'value';
  $handler->display->display_options['sorts']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['sorts']['value']['field'] = 'value';
  $handler->display->display_options['sorts']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['sorts']['value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['value']['coalesce'] = 1;
  /* Contextual filter: Content: Related Contest (field_contest_entry_contest) */
  $handler->display->display_options['arguments']['field_contest_entry_contest_target_id']['id'] = 'field_contest_entry_contest_target_id';
  $handler->display->display_options['arguments']['field_contest_entry_contest_target_id']['table'] = 'field_data_field_contest_entry_contest';
  $handler->display->display_options['arguments']['field_contest_entry_contest_target_id']['field'] = 'field_contest_entry_contest_target_id';
  $handler->display->display_options['arguments']['field_contest_entry_contest_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_contest_entry_contest_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_contest_entry_contest_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_contest_entry_contest_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_contest_entry_contest_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contest_entry' => 'contest_entry',
  );
  /* Filter criterion: Content: Status (field_contest_entry_status) */
  $handler->display->display_options['filters']['field_contest_entry_status_value']['id'] = 'field_contest_entry_status_value';
  $handler->display->display_options['filters']['field_contest_entry_status_value']['table'] = 'field_data_field_contest_entry_status';
  $handler->display->display_options['filters']['field_contest_entry_status_value']['field'] = 'field_contest_entry_status_value';
  $handler->display->display_options['filters']['field_contest_entry_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contest_entry_status_value']['expose']['operator_id'] = 'field_contest_entry_status_value_op';
  $handler->display->display_options['filters']['field_contest_entry_status_value']['expose']['label'] = 'Status (Finalist or Winner)';
  $handler->display->display_options['filters']['field_contest_entry_status_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_contest_entry_status_value']['expose']['operator'] = 'field_contest_entry_status_value_op';
  $handler->display->display_options['filters']['field_contest_entry_status_value']['expose']['identifier'] = 'field_contest_entry_status_value';
  $handler->display->display_options['filters']['field_contest_entry_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_contest_entry_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_contest_entry_status_value']['reduce_duplicates'] = TRUE;

  /* Display: Contest Entries Content pane (non--admin) */
  $handler = $view->new_display('panel_pane', 'Contest Entries Content pane (non--admin)', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'ImageX';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_contest_entry_contest_target_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Related Contest (field_contest_entry_contest)',
    ),
  );
  $export['imagex_contest_entries'] = $view;

  $view = new view();
  $view->name = 'imagex_contest_entries_admin';
  $view->description = 'Gives contest admins an overview of entries submitted';
  $view->tag = 'imagex_contest';
  $view->base_table = 'node';
  $view->human_name = 'Imagex Contest Entries (admin)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contest Entries';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';  
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['slave'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'name' => 'title',
    'body' => 'title',
    'field_contest_entry_status' => 'field_contest_entry_status',
    'delete_node' => 'view_node',
    'edit_node' => 'view_node',
    'view_node' => 'view_node',
    'value' => 'value',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contest_entry_status' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => 'views-align-right',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'value' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
    'value_type' => 'points',
    'tag' => 'vote',
    'function' => 'sum',
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_node_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_imagex_contest_close_entries' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_imagex_contest_close_voting' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_imagex_contest_entry_as_finalist' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Select Entry As Finalist',
    ),
    'rules_component::rules_imagex_contest_entry_as_winner' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Select Entry As Winner',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Select As Finalist or Winner',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'contest_entry::field_contest_entry_status' => 'contest_entry::field_contest_entry_status',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::creativecommons_set_license_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workbench_moderation_set_state_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::panelizer_set_status_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Entry';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Submitted by';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_contest_entry_status']['id'] = 'field_contest_entry_status';
  $handler->display->display_options['fields']['field_contest_entry_status']['table'] = 'field_data_field_contest_entry_status';
  $handler->display->display_options['fields']['field_contest_entry_status']['field'] = 'field_contest_entry_status';
  $handler->display->display_options['fields']['field_contest_entry_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contest_entry_status']['empty'] = '-';
  $handler->display->display_options['fields']['field_contest_entry_status']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contest_entry_status']['separator'] = ',  ';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Operation';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['label'] = 'Votes';
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['format_plural_singular'] = '1 vote';
  $handler->display->display_options['fields']['value']['format_plural_plural'] = '@count votes';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Related Contest (field_contest_entry_contest) */
  $handler->display->display_options['arguments']['field_contest_entry_contest_target_id']['id'] = 'field_contest_entry_contest_target_id';
  $handler->display->display_options['arguments']['field_contest_entry_contest_target_id']['table'] = 'field_data_field_contest_entry_contest';
  $handler->display->display_options['arguments']['field_contest_entry_contest_target_id']['field'] = 'field_contest_entry_contest_target_id';
  $handler->display->display_options['arguments']['field_contest_entry_contest_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_contest_entry_contest_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_contest_entry_contest_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_contest_entry_contest_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_contest_entry_contest_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contest_entry' => 'contest_entry',
  );
  /* Filter criterion: Content: Status (field_contest_entry_status) */
  $handler->display->display_options['filters']['field_contest_entry_status_value']['id'] = 'field_contest_entry_status_value';
  $handler->display->display_options['filters']['field_contest_entry_status_value']['table'] = 'field_data_field_contest_entry_status';
  $handler->display->display_options['filters']['field_contest_entry_status_value']['field'] = 'field_contest_entry_status_value';
  $handler->display->display_options['filters']['field_contest_entry_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contest_entry_status_value']['expose']['operator_id'] = 'field_contest_entry_status_value_op';
  $handler->display->display_options['filters']['field_contest_entry_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_contest_entry_status_value']['expose']['operator'] = 'field_contest_entry_status_value_op';
  $handler->display->display_options['filters']['field_contest_entry_status_value']['expose']['identifier'] = 'field_contest_entry_status_value';
  $handler->display->display_options['filters']['field_contest_entry_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_contest_entry_status_value']['reduce_duplicates'] = TRUE;

  /* Display: Contest Entries Content pane */
  $handler = $view->new_display('panel_pane', 'Contest Entries Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_contest_entry_contest_target_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Related Contest (field_contest_entry_contest)',
    ),
  );
  $export['imagex_contest_entries_admin'] = $view;

  features_alter_code('views_view', $export);

  return $export;
}
