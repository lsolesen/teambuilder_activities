<?php

/**
 * @file
 *  Migrations for teambuilder_activities.
 */

class TeambuilderActivity extends Migration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import activity nodes.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'teambuilder_activities') . '/import/activity.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('activity');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);

    $this->addFieldMapping('title_field', 'title');

    $this->addFieldMapping('field_kategori', 'category');
    $this->addFieldMapping('field_kategori:create_term')
      ->defaultValue(TRUE);

    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format')
      ->defaultValue('plain_text');

    $this->addFieldMapping('field_instruction', 'instruction');
    $this->addFieldMapping('field_formaal', 'goal');
    $this->addFieldMapping('field_preparation', 'preparation');
    $this->addFieldMapping('field_video', 'video');

    // Assignment Image
    $this->addFieldMapping('field_image', 'assignment_picture');
    $this->addFieldMapping('field_image:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_image:source_dir')
      ->defaultValue(drupal_get_path('module', 'teambuilder_activities') . '/import/images');

    $this->addFieldMapping('taxonomy_vocabulary_1', 'tags');
    $this->addFieldMapping('taxonomy_vocabulary_1:create_term')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_activity_who', 'group');
    $this->addFieldMapping('field_groupsize', 'group_size');
    $this->addFieldMapping('field_preparation_time', 'preparation_time');
    $this->addFieldMapping('field_space', 'where');
    $this->addFieldMapping('field_materials', 'materials');
    $this->addFieldMapping('field_source', 'source');
    $this->addFieldMapping('field_time', 'time');

    $this->addFieldMapping('field_debriefing', 'solution');

    // Solution image
    $this->addFieldMapping('field_image_solution', 'solution_picture');
    $this->addFieldMapping('field_image_solution:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_image_solution:source_dir')
      ->defaultValue(drupal_get_path('module', 'teambuilder_activities') . '/import/images');
  }

  function prepareRow($row) {
    $row->assignment_picture = explode(',', $row->assignment_picture);
  }

  function csvcolumns() {
    $columns[0] = array('id', 'Id');
    $columns[1] = array('title', 'Title');
    $columns[2] = array('category', 'Category');
    $columns[3] = array('body', 'Body');
    $columns[4] = array('instruction', 'Instruction');
    $columns[5] = array('goal', 'Goal');

    $columns[6] = array('preparation', 'Preparation');
    $columns[7] = array('assignment_picture', 'Assignment picture');
    $columns[8] = array('video', 'Video');
    $columns[9] = array('tags', 'Tags');

    $columns[10] = array('group', 'Group');
    $columns[11] = array('group_size', 'Group size');
    $columns[12] = array('preparation_time', 'Preparation time');
    $columns[13] = array('time', 'Time');
    $columns[14] = array('where', 'Where');
    $columns[15] = array('materials', 'Materials');
    $columns[16] = array('source', 'Source');

    $columns[17] = array('solution', 'Solution');
    $columns[18] = array('solution_picture', 'Solution picture');
    return $columns;
  }
}
