<?php
/**
 * @file
 * teambuilder_activities.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function teambuilder_activities_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_1' => array(
      'name' => 'Tags',
      'machine_name' => 'vocabulary_1',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
