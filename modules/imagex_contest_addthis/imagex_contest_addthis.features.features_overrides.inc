<?php
/**
 * @file
 * imagex_contest_addthis.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function imagex_contest_addthis_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:contest:default:default.display|content|new-16|configuration|build_mode"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:contest:default:default.display|content|new-16|configuration|delta_limit"] = 0;
  $overrides["panelizer_defaults.node:contest:default:default.display|content|new-16|configuration|delta_offset"] = 0;
  $overrides["panelizer_defaults.node:contest:default:default.display|content|new-16|configuration|delta_reversed"] = FALSE;
  $overrides["panelizer_defaults.node:contest:default:default.display|content|new-16|configuration|formatter"] = 'addthis_basic_button';
  $overrides["panelizer_defaults.node:contest:default:default.display|content|new-16|configuration|formatter_settings"] = array(
    'extra_css' => '',
    'button_size' => 'small',
  );
  $overrides["panelizer_defaults.node:contest:default:default.display|content|new-16|configuration|identifier"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:contest:default:default.display|content|new-16|configuration|label"] = 'hidden';
  $overrides["panelizer_defaults.node:contest:default:default.display|content|new-16|configuration|link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:contest:default:default.display|content|new-16|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:contest:default:default.display|content|new-16|css|css_class"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:contest:default:default.display|content|new-16|subtype"] = 'node:field_addthis';
  $overrides["panelizer_defaults.node:contest:default:default.display|content|new-16|type"] = 'entity_field';
  $overrides["panelizer_defaults.node:contest:default:default.display|content|new-17"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:contest:default:default.display|panels|one_main|8"] = 'new-17';

 return $overrides;
}
