<?php

abstract class BasicMigrateParliament extends Migration {
  public function __construct() {
    parent::__construct();
  }
}

class ParliamentTermMigration extends BasicMigrateParliament {
  public function __construct() {
    parent::__construct();

    // Sets up database connection and query
    $query = Database::getConnection('default', 'parlamentwatch')
      ->select('legacy_projects', 'p');
    $query->fields('p', array('parl_id', 'parliament', 'valid_from',
                              'valid_to'));
    $query->condition('p.is_mapping_id', 1);

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
        // @TODO ? 1036, 1010, 1475
        $query->condition('p.project_cmd', array(233, 486, 30073, 30988));
        break;

      // Pirate party bavaria
      case 'piratenpartei-bayern.de':
        $query->condition('p.project_cmd', array(1036, 1010, 1475));
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
                    'parl_id' => array(
                      'type' => 'int',
                      'not null' => TRUE)
                    ), MigrateDestinationTerm::getKeySchema()
    );

    // Adds new taxonomy term 'parliaments'
    $this->destination = new MigrateDestinationTerm('parliaments');

    // Placeholder for emptry description
    $lorem = 'Lorem ipsum dolor sit amet, consetetur sadipscing '
          . 'elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore '
          . 'magna aliquyam erat, sed diam voluptua. At vero eos et accusam et '
          . 'justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea '
          . 'takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum '
          . 'dolor sit amet, consetetur sadipscing elitr, sed diam nonumy '
          . 'eirmod tempor invidunt ut labore et dolore magna aliquyam erat, '
          . 'sed diam voluptua. At vero eos et accusam et justo duo dolores et '
          . 'ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est '
          . 'Lorem ipsum dolor sit amet.';

    // Adds field mapping for parliament taxonomy
    $this->addFieldMapping('name', 'parliament');
    $this->addFieldMapping('description')->defaultValue($lorem);

    // Adds field mapping for parliament valid time range, @see prepareRow()
    $this->addFieldMapping('field_parliament_valid', 'valid_from');
  }

  public function prepareRow($r) {
    if (empty($r->parliament)) {

      // Skip empty parliament terms
      return FALSE;
    } else {

      // Checks for malformed date strings in DB and sets default values
      if (($r->valid_from = strtotime($r->valid_from)) === false) {
        $r->valid_from = strtotime('1970-02-01');
      }
      if (($r->valid_to = strtotime($r->valid_to)) === false) {
        $r->valid_to = strtotime('2037-12-31');
      }

      // Formats the the date to '0000-00-00 00:00:00'
      $f = 'Y-m-d H:i:s';
      $r->valid_from = date($f, $r->valid_from);
      $r->valid_to = date($f, $r->valid_to);

      // Creates a date field containing the range valid from/to
      $r->valid_from = array(
        'from' => (string) $r->valid_from,
        'to' => (string) $r->valid_to,
      );

      // Wraps up into a JSON string
      $r->valid_from = drupal_json_encode($r->valid_from);

      // Create parliament term
      return TRUE;
    }
  }
}
