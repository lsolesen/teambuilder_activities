<?php
/**
 * @file
 * teambuilder_activities.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function teambuilder_activities_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function teambuilder_activities_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function teambuilder_activities_node_info() {
  $items = array(
    'activity' => array(
      'name' => t('Aktivitet'),
      'base' => 'node_content',
      'description' => t('En aktivitet er en leg eller teambuildingsøvelse.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
