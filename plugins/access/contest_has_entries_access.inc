<?php
/**
 * @file
 * Ctools access plugin for checking if a contest has entries.
 */
/**
 * Plugins are described by creating a $plugin array which will
 * be used by the system that includes the file.
 */
$plugin = array(
  'title' => t('Contest: Contest has finalists'),
  'description' => t('Grants access if given contest has contest entry finalists.'),
  'callback' => 'imagex_contest_contest_has_finalists_access',  
  'summary' => 'imagex_contest_contest_has_finalists_summary',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Custom callback defined by 'callback' in the $plugin array.
 *
 * Check for access.
 */
function imagex_contest_contest_has_finalists_access($conf, $context) {
  if (empty($context) || empty($context->data) || !isset($context->data->nid)) {
    return FALSE;
  }  

  return imagex_contest_contest_has_entries($context->data->nid);
}

/**
 * Provide a summary description
 */
function imagex_contest_contest_has_finalists_summary($conf, $context) {
  // Here we use the label value so its pretty
  return t('Contest has entry finalists.');
}
