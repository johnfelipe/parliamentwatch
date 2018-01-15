<?php

/**
 * @file
 * Provides SearchApiAddLeadingZero.
 */

/**
 * Processor for zero-padding area codes.
 */
class SearchApiAddLeadingZero extends SearchApiAbstractProcessor {

  public function preprocessIndexItems(array &$items) {
    $zero_pad = function ($input) {
      return str_pad($input, 5, '0');
    };

    foreach ($items as &$item) {
      $area_codes = $item['field_user_constituency:field_constituency_area_codes:name']['value'][0];
      if (is_array($area_codes)) {
        $area_codes = array_map($zero_pad, $area_codes);
      }
      $item['field_user_constituency:field_constituency_area_codes:name']['value'][0] = $area_codes;
    }
  }

}
