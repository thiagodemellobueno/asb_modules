<?php

/**
 * @file
 * Bulk export of views_default objects generated by Bulk export module.
 */

/**
 * Implements hook_views_default_views().
 */
function ross_views_views_default_views() {
    $views = array();

    $view = new view();
    $view->name = 'goals_to_issues';
    $view->description = 'Display Goals Linked to Issues';
    $view->tag = 'ross';
    $view->base_table = 'node';
    $view->human_name = 'Goals to Issues';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Goals for this Issue';
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
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
    /* Field: Content: Issue Reference */
    $handler->display->display_options['fields']['field_issue_reference']['id'] = 'field_issue_reference';
    $handler->display->display_options['fields']['field_issue_reference']['table'] = 'field_data_field_issue_reference';
    $handler->display->display_options['fields']['field_issue_reference']['field'] = 'field_issue_reference';
    $handler->display->display_options['fields']['field_issue_reference']['label'] = '';
    $handler->display->display_options['fields']['field_issue_reference']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_issue_reference']['settings'] = array(
        'link' => 0,
    );
    /* Sort criterion: Content: Post date */
    $handler->display->display_options['sorts']['created']['id'] = 'created';
    $handler->display->display_options['sorts']['created']['table'] = 'node';
    $handler->display->display_options['sorts']['created']['field'] = 'created';
    $handler->display->display_options['sorts']['created']['order'] = 'DESC';
    /* Contextual filter: Content: Issue Reference (field_issue_reference) */
    $handler->display->display_options['arguments']['field_issue_reference_target_id']['id'] = 'field_issue_reference_target_id';
    $handler->display->display_options['arguments']['field_issue_reference_target_id']['table'] = 'field_data_field_issue_reference';
    $handler->display->display_options['arguments']['field_issue_reference_target_id']['field'] = 'field_issue_reference_target_id';
    $handler->display->display_options['arguments']['field_issue_reference_target_id']['default_action'] = 'default';
    $handler->display->display_options['arguments']['field_issue_reference_target_id']['default_argument_type'] = 'node';
    $handler->display->display_options['arguments']['field_issue_reference_target_id']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['field_issue_reference_target_id']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['field_issue_reference_target_id']['summary_options']['items_per_page'] = '25';
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
        'goal' => 'goal',
    );

    /* Display: EVA Referenced Issues */
    $handler = $view->new_display('entity_view', 'EVA Referenced Issues', 'entity_view_1');
    $handler->display->display_options['display_description'] = 'Attaches goals to their referenced issues.';
    $handler->display->display_options['entity_type'] = 'node';
    $handler->display->display_options['bundles'] = array(
        0 => 'issue',
    );
    $handler->display->display_options['show_title'] = 1;
    $views['goals_to_issues'] = $view;

    return $views;
}