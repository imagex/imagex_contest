<?php
/**
 * @file
 * imagex_contest_voting.rules.inc
 *
 * Custom Rules action for voting on contest
 * Why oh why, make a voting_rules module with no actions!!
 * @see https://drupal.org/node/1444030 (code based on patch)
 */

/**
 * Implements hook_rules_action_info().
 */
function imagex_contest_voting_rules_action_info() {
  $actions = array();
  // Allows Rules to create a new, arbitrary vote.
  $actions['imagex_contest_voting_cast_vote'] = array(
    'group' => t('ImageX Contest'),
    'label' => t('Cast vote on contest entry'),
    'parameter' => array(
      'contest_entity' => array(
        'type' => 'entity',
        'label' => 'Related Contest entity',
      ),
      'contest_entry_entity' => array(
        'type' => 'entity',
        'label' => 'Contest Entry entity to vote on',
      ),
      'account' => array(
        'type' => 'user',
        'label' => 'Voting user',
      ),
      'vote_value' => array(
        'type' => 'integer',
        'label' => 'Voting value',
      ),
      'vote_delete_current' => array(
        'type' => 'boolean',
        'label' => t('Delete current votes on contest by user'),
        'description' => t("If checked any current votes by the acting user on this contest will be deleted before casting the new vote. Leaving unchecked will cast a new vote on top of any previous votes."),
        'default value' => TRUE,
        'optional' => TRUE,
        'restriction' => 'input',
      ),      
    ),
  );
  return $actions;
}

/**
 * Action callback for imagex_contest_voting_cast_vote().
 *
 * Invokes Voting API to cast vote
 */
function imagex_contest_voting_cast_vote($contest, $contest_entry, $account, $value, $delete_current = FALSE) {
  $tag = 'imagex_contest_' . $contest->getIdentifier();
  
  // Prepare data in the form Voting API expects it.
  $vote = array(
    'entity_type' => $contest_entry->type(),
    'entity_id' => $contest_entry->getIdentifier(),
    'value' => $value,
    'value_type' => 'points',
    'tag' => $tag,
    'uid' => $account->uid,
  );
  
  // Passing blank array will add this vote on top of previous
  $criteria = array();
  
  // Delete current votes?
  if (!empty($delete_current)) {
    global $user;
    
    $criteria = votingapi_current_user_identifier();
    $criteria['tag'] = $tag;
    $criteria = array($criteria);
    
    // Deleted cache, votingapi_set_votes will regenerate it
    $query = db_delete('votingapi_cache')
      ->condition('tag', $tag)
      ->execute();
  }
  
  // Cast the vote!
  votingapi_set_votes($vote, $criteria);
}