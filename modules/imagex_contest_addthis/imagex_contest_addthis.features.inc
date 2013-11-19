<?php
/**
 * @file
 * imagex_contest_addthis.features.inc
 */

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function imagex_contest_addthis_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:contest:default:default'])) {
    $data['node:contest:default:default']->display->content['new-16']->configuration['delta_limit'] = 0; /* WAS: '' */
    $data['node:contest:default:default']->display->content['new-16']->configuration['delta_offset'] = 0; /* WAS: '' */
    $data['node:contest:default:default']->display->content['new-16']->configuration['delta_reversed'] = FALSE; /* WAS: '' */
    $data['node:contest:default:default']->display->content['new-16']->configuration['formatter'] = 'addthis_basic_button'; /* WAS: '' */
    $data['node:contest:default:default']->display->content['new-16']->configuration['formatter_settings'] = array(
      'extra_css' => '',
      'button_size' => 'small',
    ); /* WAS: '' */
    $data['node:contest:default:default']->display->content['new-16']->configuration['label'] = 'hidden'; /* WAS: '' */
    $data['node:contest:default:default']->display->content['new-16']->configuration['override_title'] = 1; /* WAS: FALSE */
    $data['node:contest:default:default']->display->content['new-16']->subtype = 'node:field_addthis'; /* WAS: 'node_links' */
    $data['node:contest:default:default']->display->content['new-16']->type = 'entity_field'; /* WAS: 'node_links' */
    $data['node:contest:default:default']->display->content['new-17'] = (object) array(
          'pid' => 'new-17',
          'panel' => 'one_main',
          'type' => 'node_links',
          'subtype' => 'node_links',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => FALSE,
            'override_title_text' => '',
            'build_mode' => 'default',
            'identifier' => '',
            'link' => TRUE,
            'context' => 'panelizer',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_class' => 'link-wrapper',
          ),
          'extras' => array(),
          'position' => 8,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:contest:default:default']->display->panels['one_main']['8'] = 'new-17'; /* WAS: '' */
    unset($data['node:contest:default:default']->display->content['new-16']->configuration['build_mode']);
    unset($data['node:contest:default:default']->display->content['new-16']->configuration['identifier']);
    unset($data['node:contest:default:default']->display->content['new-16']->configuration['link']);
    unset($data['node:contest:default:default']->display->content['new-16']->css['css_class']);
  }
}
