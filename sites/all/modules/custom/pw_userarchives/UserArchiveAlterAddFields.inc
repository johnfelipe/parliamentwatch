<?php

/**
 * @file
 * Provides UserArchiveAlterAddFields.
 */

/**
 * Adds additional fields to the items.
 *
 * This class is responsible for adding politician specific data to the index:
 * - has_picture
 * - picture_uri
 * - number_of_questions
 * - number_of_answers
 */
class UserArchiveAlterAddFields extends SearchApiAbstractAlterCallback {

  /**
   * Returns TRUE for the politician archive index, FALSE otherwise.
   *
   * @param SearchApiIndex $index
   *   The index.
   *
   * @return boolean
   *   TRUE for the politician archive index, FALSE otherwise.
   */
  public function supportsIndex(SearchApiIndex $index) {
    return $index->machine_name == 'politician_archive_index';
  }

  /**
   * Declares additional fields.
   *
   * @return array
   *   The info array for the additional fields.
   */
  public function propertyInfo() {
    return [
      'has_picture' => [
        'label' => t('Has uploaded profile picture?'),
        'type' => 'boolean',
        'description' => t('Whether the user has uploaded a profile picture'),
      ],
      'picture_uri' => [
        'label' => t('Profile picture'),
        'type' => 'uri',
        'description' => t('The URI of the profile picture'),
      ],
      'number_of_questions' => [
        'label' => t('Number of questions'),
        'type' => 'integer',
        'description' => t('The number of questions asked'),
      ],
      'number_of_answers' => [
        'label' => t('Number of answers'),
        'type' => 'integer',
        'description' => t('The number of answers given'),
      ],
    ];
  }

  /**
   * Adds has_picture and picture_uri to item.
   *
   * @param array $items
   *   The items to be indexed.
   */
  public function alterItems(array &$items) {
    foreach ($items as $item) {
      if (empty($item->field_user_picture)) {
        $item->has_picture = FALSE;
      }
      else {
        $item->has_picture = TRUE;
        $item->picture_uri = $item->field_user_picture[LANGUAGE_NONE][0]['uri'];
      }
    }
  }

}