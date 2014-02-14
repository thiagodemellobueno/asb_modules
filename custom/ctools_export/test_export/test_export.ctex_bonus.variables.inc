<?php

/**
 * @file
 * Bulk export of variables generated by Drush Ctools Export Bonus.
 * Use drush cbrva modulename to rebuild variables.
 */

/**
 * Implements hook_drush_ctex_bonus_variables().
 */
function test_export_drush_ctex_bonus_variables() {
  $variables = array();

  $variables['additional_settings__active_tab_goal'] = 'edit-menu';

  $variables['additional_settings__active_tab_issue'] = 'edit-og';

  $variables['additional_settings__active_tab_scheme'] = 'edit-submission';

  $variables['additional_settings__active_tab_update'] = 'edit-og';

  $variables['admin_theme'] = 'seven';

  $variables['botcha_enabled_comment_node_article_form'] = 1;

  $variables['botcha_enabled_comment_node_page_form'] = 1;

  $variables['botcha_enabled_comment_node_scheme_form'] = 1;

  $variables['botcha_enabled_comment_node_update_form'] = 1;

  $variables['botcha_enabled_contact_personal_form'] = 1;

  $variables['botcha_enabled_contact_site_form'] = 1;

  $variables['botcha_enabled_forum_node_form'] = 1;

  $variables['botcha_enabled_update_script_selection_form'] = 0;

  $variables['botcha_enabled_user_login'] = 0;

  $variables['botcha_enabled_user_login_block'] = 0;

  $variables['botcha_enabled_user_pass'] = 1;

  $variables['botcha_enabled_user_register_form'] = 1;

  $variables['botcha_form_blocked_counter'] = 0;

  $variables['botcha_form_passed_counter'] = 0;

  $variables['botcha_secret'] = 'a7728c4421164f41303d8bb721bfbc9d';

  $variables['clean_url'] = '1';

  $variables['comment_anonymous_goal'] = 0;

  $variables['comment_anonymous_issue'] = 0;

  $variables['comment_anonymous_scheme'] = 0;

  $variables['comment_anonymous_update'] = 0;

  $variables['comment_default_mode_goal'] = 1;

  $variables['comment_default_mode_issue'] = 1;

  $variables['comment_default_mode_scheme'] = 1;

  $variables['comment_default_mode_update'] = 1;

  $variables['comment_default_per_page_goal'] = '50';

  $variables['comment_default_per_page_issue'] = '50';

  $variables['comment_default_per_page_scheme'] = '50';

  $variables['comment_default_per_page_update'] = '50';

  $variables['comment_form_location_goal'] = 1;

  $variables['comment_form_location_issue'] = 1;

  $variables['comment_form_location_scheme'] = 1;

  $variables['comment_form_location_update'] = 1;

  $variables['comment_goal'] = '0';

  $variables['comment_issue'] = '0';

  $variables['comment_page'] = 0;

  $variables['comment_preview_goal'] = '1';

  $variables['comment_preview_issue'] = '1';

  $variables['comment_preview_scheme'] = '1';

  $variables['comment_preview_update'] = '1';

  $variables['comment_scheme'] = '0';

  $variables['comment_subject_field_goal'] = 1;

  $variables['comment_subject_field_issue'] = 1;

  $variables['comment_subject_field_scheme'] = 1;

  $variables['comment_subject_field_update'] = 1;

  $variables['comment_update'] = '2';

  $variables['cron_key'] = 'o1cg8Dg7yHhI3HUu_rE1CNgd0XdLjJ5_Wn7mVv0degw';

  $variables['date_default_timezone'] = 'America/New_York';

  $variables['drupal_http_request_fails'] = FALSE;

  $variables['drupal_private_key'] = 'is7uHaN0tEl7FtPd6gifTW8V1vcQLA01nLDDdNsSHwA';

  $variables['entityreference:base-tables'] = array(
    'comment' => array(
      0 => 'comment',
      1 => 'cid',
    ),
    'message_type_category' => array(
      0 => 'message_type_category',
      1 => 'id',
    ),
    'message_type' => array(
      0 => 'message_type',
      1 => 'id',
    ),
    'message' => array(
      0 => 'message',
      1 => 'mid',
    ),
    'node' => array(
      0 => 'node',
      1 => 'nid',
    ),
    'og_membership_type' => array(
      0 => 'og_membership_type',
      1 => 'id',
    ),
    'og_membership' => array(
      0 => 'og_membership',
      1 => 'id',
    ),
    'file' => array(
      0 => 'file_managed',
      1 => 'fid',
    ),
    'taxonomy_term' => array(
      0 => 'taxonomy_term_data',
      1 => 'tid',
    ),
    'taxonomy_vocabulary' => array(
      0 => 'taxonomy_vocabulary',
      1 => 'vid',
    ),
    'user' => array(
      0 => 'users',
      1 => 'uid',
    ),
    'wysiwyg_profile' => array(
      0 => 'wysiwyg',
      1 => 'format',
    ),
  );

  $variables['field_bundle_settings_file__audio'] = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );

  $variables['field_bundle_settings_file__default'] = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );

  $variables['field_bundle_settings_file__image'] = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );

  $variables['field_bundle_settings_file__video'] = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );

  $variables['field_bundle_settings_node__goal'] = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );

  $variables['field_bundle_settings_node__scheme'] = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'og_extras_nodes_entity_view_1' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );

  $variables['field_bundle_settings_node__update'] = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );

  $variables['file_temporary_path'] = '/tmp';

  $variables['filter_fallback_format'] = 'plain_text';

  $variables['i18n_variables'] = array();

  $variables['menu_expanded'] = array();

  $variables['menu_masks'] = array(
    0 => 501,
    1 => 493,
    2 => 251,
    3 => 250,
    4 => 247,
    5 => 246,
    6 => 245,
    7 => 241,
    8 => 125,
    9 => 124,
    10 => 123,
    11 => 122,
    12 => 121,
    13 => 117,
    14 => 112,
    15 => 78,
    16 => 77,
    17 => 63,
    18 => 62,
    19 => 61,
    20 => 60,
    21 => 59,
    22 => 58,
    23 => 56,
    24 => 44,
    25 => 39,
    26 => 31,
    27 => 30,
    28 => 29,
    29 => 28,
    30 => 27,
    31 => 24,
    32 => 21,
    33 => 19,
    34 => 15,
    35 => 14,
    36 => 13,
    37 => 11,
    38 => 9,
    39 => 7,
    40 => 6,
    41 => 5,
    42 => 3,
    43 => 2,
    44 => 1,
  );

  $variables['menu_options_goal'] = array();

  $variables['menu_options_issue'] = array();

  $variables['menu_options_scheme'] = array(
    0 => 'main-menu',
  );

  $variables['menu_options_update'] = array(
    0 => 'main-menu',
  );

  $variables['menu_parent_goal'] = 'main-menu:0';

  $variables['menu_parent_issue'] = 'main-menu:0';

  $variables['menu_parent_scheme'] = 'main-menu:0';

  $variables['menu_parent_update'] = 'main-menu:0';

  $variables['node_admin_theme'] = '1';

  $variables['node_options_goal'] = array(
    0 => 'status',
  );

  $variables['node_options_issue'] = array(
    0 => 'status',
  );

  $variables['node_options_page'] = array(
    0 => 'status',
  );

  $variables['node_options_scheme'] = array(
    0 => 'status',
  );

  $variables['node_options_update'] = array(
    0 => 'status',
  );

  $variables['node_preview_goal'] = '1';

  $variables['node_preview_issue'] = '1';

  $variables['node_preview_scheme'] = '1';

  $variables['node_preview_update'] = '1';

  $variables['node_submitted_goal'] = 1;

  $variables['node_submitted_issue'] = 0;

  $variables['node_submitted_page'] = FALSE;

  $variables['node_submitted_scheme'] = 1;

  $variables['node_submitted_update'] = 1;

  $variables['og_features_ignore_og_fields'] = FALSE;

  $variables['og_group_manager_default_rids_node_scheme'] = array(
    3 => '3',
  );

  $variables['og_group_manager_full_access'] = 1;

  $variables['og_node_access_strict'] = 1;

  $variables['og_orphans_delete'] = 1;

  $variables['og_ui_admin_people_view'] = 'og_members_admin:default';

  $variables['og_use_queue'] = 1;

  $variables['pathauto_blog_pattern'] = 'blogs/[user:name]';

  $variables['pathauto_forum_pattern'] = '[term:vocabulary]/[term:name]';

  $variables['pathauto_node_pattern'] = 'content/[node:title]';

  $variables['pathauto_punctuation_hyphen'] = 1;

  $variables['pathauto_taxonomy_term_pattern'] = '[term:vocabulary]/[term:name]';

  $variables['pathauto_user_pattern'] = 'users/[user:name]';

  $variables['save_continue_goal'] = 'Save and add fields';

  $variables['save_continue_issue'] = 'Save and add fields';

  $variables['save_continue_scheme'] = 'Save and add fields';

  $variables['save_continue_update'] = 'Save and add fields';

  $variables['site_default_country'] = 'US';

  $variables['site_mail'] = 'ross@mayfirst.org';

  $variables['site_name'] = 'Action Switchboard Dev';

  $variables['theme_default'] = 'asb';

  $variables['update_notify_emails'] = array(
    0 => 'ross@mayfirst.org',
  );

  $variables['user_admin_role'] = '3';

  $variables['user_pictures'] = '1';

  $variables['user_picture_dimensions'] = '1024x1024';

  $variables['user_picture_file_size'] = '800';

  $variables['user_picture_style'] = 'thumbnail';

  $variables['user_register'] = 2;

  return $variables;
}
