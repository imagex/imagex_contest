<?php
/**
 * @file
 * imagex_contest_voting.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function imagex_contest_voting_default_rules_configuration() {
  $items = array();
  $items['rules_imagex_contest_entry_vote_single'] = entity_import('rules_config', '{ "rules_imagex_contest_entry_vote_single" : {
      "LABEL" : "ImageX Contest Entry Vote Single",
      "PLUGIN" : "rule set",
      "TAGS" : [ "imagex_contest" ],
      "REQUIRES" : [ "rules", "imagex_contest_voting" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "contest_entry_entity" : { "label" : "Contest Entry", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "entity_has_field" : {
                  "entity" : [ "contest-entry-entity" ],
                  "field" : "field_contest_entry_contest"
                }
              }
            ],
            "DO" : [
              { "imagex_contest_voting_cast_vote" : {
                  "contest_entity" : [ "contest-entry-entity:field-contest-entry-contest" ],
                  "contest_entry_entity" : [ "contest-entry-entity" ],
                  "account" : [ "site:current-user" ],
                  "vote_value" : "1"
                }
              }
            ],
            "LABEL" : "Vote On Entry"
          }
        }
      ]
    }
  }');
  return $items;
}
