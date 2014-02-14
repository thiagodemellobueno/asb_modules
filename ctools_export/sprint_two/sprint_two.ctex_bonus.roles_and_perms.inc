<?php

/**
 * @file
 * Bulk export of roles_and_perms generated by Drush Ctools Export Bonus.
 * Use drush cbrp modulename to rebuild roles_and_perms.
 */

/**
 * Implements hook_drush_ctex_bonus_roles_and_perms().
 */
function sprint_two_drush_ctex_bonus_roles_and_perms() {
  $roles_and_perms = array();

  $roles_and_perms['anonymous user'] = (object) array(
    'name' => 'anonymous user',
    'weight' => '0',
    'permissions' => array(
      'access all custom data' => TRUE,
      'access CiviMail subscribe/unsubscribe pages' => TRUE,
      'access comments' => TRUE,
      'access content' => TRUE,
      'access uploaded files' => TRUE,
      'make online contributions' => TRUE,
      'participate in workflow' => TRUE,
      'profile create' => TRUE,
      'profile edit' => TRUE,
      'profile view' => TRUE,
      'register for events' => TRUE,
      'use text format filtered_html' => TRUE,
      'view event info' => TRUE,
      'view event participants' => TRUE,
      'view media' => TRUE,
    ),
  );

  $roles_and_perms['authenticated user'] = (object) array(
    'name' => 'authenticated user',
    'weight' => '1',
    'permissions' => array(
      'access all custom data' => TRUE,
      'access CiviMail subscribe/unsubscribe pages' => TRUE,
      'access comments' => TRUE,
      'access content' => TRUE,
      'access uploaded files' => TRUE,
      'create goal content' => TRUE,
      'create scheme content' => TRUE,
      'create update content' => TRUE,
      'edit own scheme content' => TRUE,
      'make online contributions' => TRUE,
      'participate in workflow' => TRUE,
      'post comments' => TRUE,
      'profile create' => TRUE,
      'profile edit' => TRUE,
      'profile view' => TRUE,
      'register for events' => TRUE,
      'skip comment approval' => TRUE,
      'use text format filtered_html' => TRUE,
      'use text format full_html' => TRUE,
      'view event info' => TRUE,
      'view event participants' => TRUE,
      'view media' => TRUE,
    ),
  );

  $roles_and_perms['administrator'] = (object) array(
    'name' => 'administrator',
    'weight' => '2',
    'permissions' => array(
      'access administration menu' => TRUE,
      'access administration pages' => TRUE,
      'access AJAX API' => TRUE,
      'access all custom data' => TRUE,
      'access all views' => TRUE,
      'access CiviContribute' => TRUE,
      'access CiviCRM' => TRUE,
      'access CiviEvent' => TRUE,
      'access CiviMail' => TRUE,
      'access CiviMail subscribe/unsubscribe pages' => TRUE,
      'access CiviMember' => TRUE,
      'access CiviPledge' => TRUE,
      'access CiviReport' => TRUE,
      'access comments' => TRUE,
      'access Contact Dashboard' => TRUE,
      'access contact reference fields' => TRUE,
      'access content' => TRUE,
      'access content overview' => TRUE,
      'access contextual links' => TRUE,
      'access dashboard' => TRUE,
      'access deleted contacts' => TRUE,
      'access mfe links' => TRUE,
      'access Report Criteria' => TRUE,
      'access rules debug' => TRUE,
      'access site in maintenance mode' => TRUE,
      'access site reports' => TRUE,
      'access site-wide contact form' => TRUE,
      'access statistics' => TRUE,
      'access uploaded files' => TRUE,
      'access user contact forms' => TRUE,
      'access user profiles' => TRUE,
      'access workflow summary views' => TRUE,
      'add contacts' => TRUE,
      'add media from remote sources' => TRUE,
      'administer actions' => TRUE,
      'administer blocks' => TRUE,
      'administer BOTCHA settings' => TRUE,
      'administer CAPTCHA settings' => TRUE,
      'administer cer settings' => TRUE,
      'administer CiviCRM' => TRUE,
      'administer comments' => TRUE,
      'administer contact forms' => TRUE,
      'administer content types' => TRUE,
      'administer contexts' => TRUE,
      'administer dedupe rules' => TRUE,
      'administer filters' => TRUE,
      'administer form steps' => TRUE,
      'administer group' => TRUE,
      'administer image styles' => TRUE,
      'administer media' => TRUE,
      'administer menu' => TRUE,
      'administer message types' => TRUE,
      'administer mfe settings' => TRUE,
      'administer modernizr' => TRUE,
      'administer module filter' => TRUE,
      'administer modules' => TRUE,
      'administer nodes' => TRUE,
      'administer pathauto' => TRUE,
      'administer permissions' => TRUE,
      'administer Reports' => TRUE,
      'administer reserved groups' => TRUE,
      'administer reserved reports' => TRUE,
      'administer reserved tags' => TRUE,
      'administer rules' => TRUE,
      'administer search' => TRUE,
      'administer shortcuts' => TRUE,
      'administer site configuration' => TRUE,
      'administer software updates' => TRUE,
      'administer statistics' => TRUE,
      'administer Tagsets' => TRUE,
      'administer taxonomy' => TRUE,
      'administer themes' => TRUE,
      'administer url aliases' => TRUE,
      'administer users' => TRUE,
      'administer views' => TRUE,
      'administer workflow' => TRUE,
      'block IP addresses' => TRUE,
      'bypass node access' => TRUE,
      'bypass rules access' => TRUE,
      'cancel account' => TRUE,
      'change own username' => TRUE,
      'change workflow state via node edit form' => TRUE,
      'create article content' => TRUE,
      'create goal content' => TRUE,
      'create issue content' => TRUE,
      'create manual batch' => TRUE,
      'create messages' => TRUE,
      'create page content' => TRUE,
      'create scheme content' => TRUE,
      'create update content' => TRUE,
      'create url aliases' => TRUE,
      'customize shortcut links' => TRUE,
      'delete activities' => TRUE,
      'delete all manual batches' => TRUE,
      'delete any article content' => TRUE,
      'delete any goal content' => TRUE,
      'delete any issue content' => TRUE,
      'delete any page content' => TRUE,
      'delete any scheme content' => TRUE,
      'delete any update content' => TRUE,
      'delete contacts' => TRUE,
      'delete in CiviContribute' => TRUE,
      'delete in CiviEvent' => TRUE,
      'delete in CiviMail' => TRUE,
      'delete in CiviMember' => TRUE,
      'delete in CiviPledge' => TRUE,
      'delete own article content' => TRUE,
      'delete own goal content' => TRUE,
      'delete own issue content' => TRUE,
      'delete own manual batches' => TRUE,
      'delete own page content' => TRUE,
      'delete own scheme content' => TRUE,
      'delete own update content' => TRUE,
      'delete revisions' => TRUE,
      'delete terms in 1' => TRUE,
      'delete terms in 2' => TRUE,
      'display drupal links' => TRUE,
      'edit all contacts' => TRUE,
      'edit all events' => TRUE,
      'edit all manual batches' => TRUE,
      'edit any article content' => TRUE,
      'edit any goal content' => TRUE,
      'edit any issue content' => TRUE,
      'edit any page content' => TRUE,
      'edit any scheme content' => TRUE,
      'edit any update content' => TRUE,
      'edit contributions' => TRUE,
      'edit event participants' => TRUE,
      'edit groups' => TRUE,
      'edit media' => TRUE,
      'edit memberships' => TRUE,
      'edit own article content' => TRUE,
      'edit own comments' => TRUE,
      'edit own goal content' => TRUE,
      'edit own issue content' => TRUE,
      'edit own manual batches' => TRUE,
      'edit own page content' => TRUE,
      'edit own scheme content' => TRUE,
      'edit own update content' => TRUE,
      'edit pledges' => TRUE,
      'edit terms in 1' => TRUE,
      'edit terms in 2' => TRUE,
      'edit workflow log' => TRUE,
      'execute comment_publish_action' => TRUE,
      'execute comment_save_action' => TRUE,
      'execute comment_unpublish_action' => TRUE,
      'execute comment_unpublish_by_keyword_action' => TRUE,
      'execute node_assign_owner_action' => TRUE,
      'execute node_make_sticky_action' => TRUE,
      'execute node_make_unsticky_action' => TRUE,
      'execute node_promote_action' => TRUE,
      'execute node_publish_action' => TRUE,
      'execute node_save_action' => TRUE,
      'execute node_unpromote_action' => TRUE,
      'execute node_unpublish_action' => TRUE,
      'execute node_unpublish_by_keyword_action' => TRUE,
      'execute og_membership_delete_action' => TRUE,
      'execute og_set_state_action' => TRUE,
      'execute og_user_roles_action' => TRUE,
      'execute pathauto_node_update_action' => TRUE,
      'execute pathauto_taxonomy_term_update_action' => TRUE,
      'execute pathauto_user_update_action' => TRUE,
      'execute system_block_ip_action' => TRUE,
      'execute system_goto_action' => TRUE,
      'execute system_message_action' => TRUE,
      'execute system_send_email_action' => TRUE,
      'execute user_block_user_action' => TRUE,
      'execute views_bulk_operations_archive_action' => TRUE,
      'execute views_bulk_operations_argument_selector_action' => TRUE,
      'execute views_bulk_operations_delete_item' => TRUE,
      'execute views_bulk_operations_modify_action' => TRUE,
      'execute views_bulk_operations_script_action' => TRUE,
      'execute views_bulk_operations_user_roles_action' => TRUE,
      'export all manual batches' => TRUE,
      'export own manual batches' => TRUE,
      'flush caches' => TRUE,
      'import contacts' => TRUE,
      'import media' => TRUE,
      'make online contributions' => TRUE,
      'merge duplicate contacts' => TRUE,
      'notify of path changes' => TRUE,
      'participate in workflow' => TRUE,
      'post comments' => TRUE,
      'profile create' => TRUE,
      'profile edit' => TRUE,
      'profile listings' => TRUE,
      'profile listings and forms' => TRUE,
      'profile view' => TRUE,
      'register for events' => TRUE,
      'revert revisions' => TRUE,
      'schedule workflow transitions' => TRUE,
      'search content' => TRUE,
      'select account cancellation method' => TRUE,
      'show workflow state form' => TRUE,
      'skip BOTCHA' => TRUE,
      'skip CAPTCHA' => TRUE,
      'skip comment approval' => TRUE,
      'switch shortcut sets' => TRUE,
      'translate CiviCRM' => TRUE,
      'use advanced search' => TRUE,
      'use bulk exporter' => TRUE,
      'use PHP for label patterns' => TRUE,
      'use PHP for settings' => TRUE,
      'use text format filtered_html' => TRUE,
      'use text format full_html' => TRUE,
      'use text format php_code' => TRUE,
      'view all activities' => TRUE,
      'view all contacts' => TRUE,
      'view all manual batches' => TRUE,
      'view all notes' => TRUE,
      'view debug output' => TRUE,
      'view event info' => TRUE,
      'view event participants' => TRUE,
      'view media' => TRUE,
      'view own manual batches' => TRUE,
      'view own unpublished content' => TRUE,
      'view post access counter' => TRUE,
      'view public CiviMail content' => TRUE,
      'view revisions' => TRUE,
      'view the administration theme' => TRUE,
      'view workflow state change block even when state cannot be changed' => TRUE,
    ),
  );

  $roles_and_perms['Schemer'] = (object) array(
    'name' => 'Schemer',
    'weight' => '3',
    'permissions' => array(
      'access comments' => TRUE,
      'access content' => TRUE,
      'access user profiles' => TRUE,
      'add media from remote sources' => TRUE,
      'cancel account' => TRUE,
      'change own username' => TRUE,
      'create messages' => TRUE,
      'create scheme content' => TRUE,
      'create update content' => TRUE,
      'edit own comments' => TRUE,
      'edit own scheme content' => TRUE,
      'edit own update content' => TRUE,
      'participate in workflow' => TRUE,
      'post comments' => TRUE,
      'search content' => TRUE,
      'skip comment approval' => TRUE,
      'use advanced search' => TRUE,
      'use text format filtered_html' => TRUE,
      'use text format full_html' => TRUE,
      'view media' => TRUE,
    ),
  );

  $roles_and_perms['Scheme Leader'] = (object) array(
    'name' => 'Scheme Leader',
    'weight' => '4',
    'permissions' => array(
      'participate in workflow' => TRUE,
      'use text format full_html' => TRUE,
    ),
  );

  $roles_and_perms['Facilitator'] = (object) array(
    'name' => 'Facilitator',
    'weight' => '5',
    'permissions' => array(
      'participate in workflow' => TRUE,
      'use text format full_html' => TRUE,
    ),
  );

  $roles_and_perms['Super Facilitator'] = (object) array(
    'name' => 'Super Facilitator',
    'weight' => '6',
    'permissions' => array(
      'participate in workflow' => TRUE,
      'use text format full_html' => TRUE,
    ),
  );

  $roles_and_perms['NGO Contact'] = (object) array(
    'name' => 'NGO Contact',
    'weight' => '7',
    'permissions' => array(
      'participate in workflow' => TRUE,
    ),
  );

  return $roles_and_perms;
}