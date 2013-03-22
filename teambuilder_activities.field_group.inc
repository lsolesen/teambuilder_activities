<?php
/**
 * @file
 * teambuilder_activities.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function teambuilder_activities_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|activity|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'activity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Information',
    'weight' => '0',
    'children' => array(
      0 => 'taxonomy_vocabulary_1',
      1 => 'body',
      2 => 'field_video',
      3 => 'field_formaal',
      4 => 'field_instruction',
      5 => 'field_preparation',
      6 => 'field_image',
      7 => 'title_field',
      8 => 'field_kategori',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_info|node|activity|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|activity|default';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'activity';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '9',
    'children' => array(
      0 => 'taxonomy_vocabulary_1',
      1 => 'field_groupsize',
      2 => 'field_time',
      3 => 'field_materials',
      4 => 'field_space',
      5 => 'field_activity_who',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_metadata|node|activity|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|activity|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'activity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '1',
    'children' => array(
      0 => 'field_groupsize',
      1 => 'field_time',
      2 => 'field_materials',
      3 => 'field_space',
      4 => 'field_source',
      5 => 'field_activity_who',
      6 => 'field_preparation_time',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_metadata|node|activity|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_solution|node|activity|default';
  $field_group->group_name = 'group_solution';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'activity';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Løsning',
    'weight' => '10',
    'children' => array(
      0 => 'field_debriefing',
      1 => 'field_image_solution',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Løsning',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_solution|node|activity|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_solution|node|activity|form';
  $field_group->group_name = 'group_solution';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'activity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Løsning',
    'weight' => '2',
    'children' => array(
      0 => 'field_debriefing',
      1 => 'field_image_solution',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Løsning',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_solution|node|activity|form'] = $field_group;

  return $export;
}
