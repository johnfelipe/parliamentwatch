<?php

abstract class BasicMigrateCommittee extends Migration {
  public function __construct() {
    parent::__construct();
  }
}

class CommitteeTermMigration extends BasicMigrateCommittee {
  public function __construct() {
    parent::__construct();

    // Setting up dependencies, migrate parliaments first
    $this->dependencies = array('ParliamentTerm');

    // Sets up database connection and query
    $query = Database::getConnection('default', 'parlamentwatch')
      ->select('legacy_committee', 'c');
    $query->join('legacy_projects', 'p', 'c.cmd = p.cmd');
    $query->fields('c', array('id', 'committee', 'teaser', 'committee_type',
                              'picture_url', 'txt'));
    $query->fields('p', array('parliament'));

    // Gets only migration terms for the current site
    switch(variable_get('site_name')){

      // Germany
      case 'abgeordnetenwatch.de':
        $query->condition('p.project_cmd', array(0, 2000), 'BETWEEN');
        $query->condition('p.project_cmd',
                          array(233, 486, 974, 1036, 1010, 1475), 'NOT IN');
        break;

      // Tunesia
      case 'marsad.tn':
        $query->condition('p.project_cmd', 974);
        break;

      // Ireland
      case 'dailwatch.ie':
        $query->condition('p.project_cmd', array(233, 486, 30073, 30988));
        break;

      // Luxembourg
      case 'politikercheck.lu':
        $query->condition('p.project_cmd', array(20000, 30000), 'BETWEEN');
        break;

      default:
        $query->condition('p.project_cmd', 0);
        break;
    }

    // Starts the migration based on the created query
    $this->source = new MigrateSourceSQL($query);
    $this->map = new MigrateSQLMap($this->machineName, array(
                      'id' => array(
                        'type' => 'int',
                        'not null' => TRUE,
                        'alias' => 'c')
                      ), MigrateDestinationTerm::getKeySchema()
    );

    // Adds new taxonomy term 'committee'
    $this->destination = new MigrateDestinationTerm('committee');

    // Maps the committee term fields
    $this->addFieldMapping('name', 'committee');
    $this->addFieldMapping('description', 'txt');
    $this->addFieldMapping('field_committee_teaser', 'teaser');
    $this->addFieldMapping('field_committee_picture', 'picture_url');

    // Connects committee term with parliament term
    $this->addFieldMapping('field_parliament', 'parliament');

    // Connects committee term with committee type, creates it if not exists
    $this->addFieldMapping('field_committee_type', 'committee_type')
      ->arguments(array('create_term' => TRUE));
  }

  public function prepareRow($r){
    if (empty($r->committee)) {

      // Skip empty committee terms
      return FALSE;
    } else {

      // Replace empty description with lorem ipsum
      if(empty($r->txt)){
        $r->txt = 'Lorem ipsum dolor sit amet, consetetur sadipscing elitr, '
          . 'sed diam nonumy eirmod tempor invidunt ut labore et dolore magna '
          . 'aliquyam erat, sed diam voluptua. At vero eos et accusam et justo '
          . 'duo dolores et ea rebum. Stet clita kasd gubergren, no sea '
          . 'takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum '
          . 'dolor sit amet, consetetur sadipscing elitr, sed diam nonumy '
          . 'eirmod tempor invidunt ut labore et dolore magna aliquyam erat, '
          . 'sed diam voluptua. At vero eos et accusam et justo duo dolores et '
          . 'ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est '
          . 'Lorem ipsum dolor sit amet.';
      }

      // Replace empty teaser with lorem ipsum
      if(empty($r->teaser)){
        $r->teaser = 'Lorem ipsum dolor sit amet, ...';
      }

      // Create committee term
      return TRUE;
    }
  }
}
