<?php
/**
 * @file
 * pw_diff_tracking.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function pw_diff_tracking_default_rules_configuration() {
  $items = array();
  $items['rules_user_changed'] = entity_import('rules_config', '{ "rules_user_changed" : {
      "LABEL" : "Account updated",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_update" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "181527986" : "181527986" } }
          }
        },
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "181527986" : "181527986" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "notifications@abgeordnetenwatch.de",
            "subject" : "Account [account:field-user-fname] [account:field-user-lname] updated       ",
            "message" : "UUID: [account:uuid]\\r\\nUID: [account:uid]\\r\\nName: [account:field-user-fname] [account:field-user-lname]\\r\\nE-Mail: [account:mail]\\r\\nURL: [account:url]\\r\\nEdit: [account:edit-url]\\r\\n\\r\\nDIFFs\\r\\n+++++++++++++++++++++++++++++++++++\\r\\n[account:pw_diff]\\r\\n+++++++++++++++++++++++++++++++++++\\u0022,",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
