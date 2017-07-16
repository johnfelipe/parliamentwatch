<?php

/**
 * @file
 * Provides SearchApiAddLeadingZero.
 */

/**
 * Processor for adding zero padded area codes.
 */
class SearchApiAddLeadingZero extends SearchApiAbstractProcessor {

  public function preprocessIndexItems(array &$items) {
    foreach ($items as &$item) {
      $area_codes = $item['field_user_constituency:field_constituency_area_codes:name']['value'][0];
      if (is_array($area_codes)) {
        foreach ($area_codes as $area_code) {
          if (strlen($area_code) == 4) {
            $area_codes[] = '0' . $area_code;
          }
        }
      }
      $item['field_user_constituency:field_constituency_area_codes:name']['value'][0] = $area_codes;
    }
  }

}
