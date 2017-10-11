<?php

/*
 * @file
 * pw_api.constituencies.inc
 */


/**
 *
 * @return array $constituencies
 *   All constituencies with related areacodes as array.
 */

function pw_api_constituencies($parliament) {

    // translate uuid into parliament name
  if(preg_match('/[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}/i', $parliament, $uuid)){
    $parliament_term = entity_uuid_load('taxonomy_term', $uuid);
  }
  else{
    $parliament_term = taxonomy_get_term_by_name($parliament, 'parliaments');
  }

  $constituencies = array();

  $constituency_voc = taxonomy_vocabulary_machine_name_load('constituency');

  // query for all constituency terms
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'taxonomy_term')
  ->propertyCondition('vid', $constituency_voc->vid)
  ->fieldCondition('field_parliament', 'tid', key($parliament_term))
  ->propertyOrderBy('name', 'ASC');
  # ->fieldOrderBy('field_constituency_nr', 'value', 'ASC') bug? if field_constituency_nr is empty, EFQ is empty too.

  $result = $query->execute();
  if($result['taxonomy_term']){

    // preload all area codes
    $area_codes_voc = taxonomy_vocabulary_machine_name_load('area_codex');
    $result_codes = db_query('SELECT tid, name FROM taxonomy_term_data  WHERE vid = :vid', array(':vid' => $area_codes_voc->vid))->fetchAllKeyed();

    // load all terms by tids
    $terms = taxonomy_term_load_multiple(array_keys($result['taxonomy_term']));
    foreach ($terms as $tid => $term) {

      // dont display terms for structuring
      if(!taxonomy_get_children($tid)){

        // add name & uuid
        $constituency = array();
        $constituency['name'] = $term->name;
        $constituency['uuid'] = $term->uuid;

        // add number
        $field_number = field_get_items('taxonomy_term', $term, 'field_constituency_nr');
        $constituency['number'] = $field_number[0]['value'];

        // prepare for adding area codes
        $field_area_codes = field_get_items('taxonomy_term', $term, 'field_constituency_area_codes');
        $field_areas = field_get_items('taxonomy_term', $term, 'field_constituency_ac_descriptor');

        // add area codes
        $constituency['areacodes'] = array();
        //$constituency['areacodes']['debug'] = $field_areas[0]['value'];
        foreach ($field_area_codes as $index => $value) {
          $code = $result_codes[$value['tid']];
          $constituency['areacodes']['areacode_'.$index] = array();
          $constituency['areacodes']['areacode_'.$index]['code'] = $code;
          $constituency['areacodes']['areacode_'.$index]['areas'] = array();

          // add all areas which begin with the code (12345:AREANAME)
          if(preg_match_all("/(^|\W)$code:([^,]+)/", $field_areas[0]['value'], $m)){
            foreach($m[2] as $index_area => $area){
              $constituency['areacodes']['areacode_'.$index]['areas']['area_'.$index_area] = $area;
            }
          }
        }

        // add to array
        $constituencies['constituency_'.$tid] = $constituency;
      }
    }
  }

  // sort array by constituency number
  uasort($constituencies, "pw_api_compare_constituency_number");

  // wrap into constituencies root element
  $constituencies = array('constituencies' => $constituencies);

  return $constituencies;
}

/**
 *
 * Sorts array by constituency number
 *
 * @param $a array
 * @param $b array
 * @return number
 */

function pw_api_compare_constituency_number($a, $b) {
  return $a["number"] - $b["number"];
}
