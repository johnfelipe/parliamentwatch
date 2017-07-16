<?php

/**
 * @file
 * Provides UserArchiveController.
 */

/**
 * Controller class for user_revision.
 *
 * This extends the UserRevisionController class from the user_revision module,
 * adding revision handling for roles.
 */
class UserArchiveController extends UserRevisionController {
  function attachLoad(&$queried_users, $revision_id = FALSE) {
    parent::attachLoad($queried_users, $revision_id);

    if ($revision_id) {
      $sql = 'SELECT uac.uid, uac.actual_profile, r.rid, r.name FROM {user_archive_cache} uac JOIN {role} r ON uac.user_role = r.name WHERE uid = :uid AND vid = :vid';
      $result = db_query($sql, [':uid' => reset($queried_users)->uid, ':vid' => $revision_id]);
      foreach ($result as $record) {
        $queried_users[$record->uid]->roles = [];
        $queried_users[$record->uid]->roles[DRUPAL_AUTHENTICATED_RID] = 'authenticated user';
        $queried_users[$record->uid]->roles[PW_GLOBALS_POLITICIAN_RID] = 'Politician';
        $queried_users[$record->uid]->roles[$record->rid] = $record->name;
        $queried_users[$record->uid]->actual_profile = $record->actual_profile;
      }
    }
  }
}