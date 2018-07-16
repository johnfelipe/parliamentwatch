<?php

/**
 * @file
 * Provides UserRevisionDataSourceController.
 */

/**
 * Implements Search API data source for user revisions.
 */
class UserArchiveDataSourceController extends SearchApiAbstractDataSourceController {

  /**
   * Entity type info for this type.
   *
   * @var array
   */
  protected $entity_info;

  /**
   * {@inheritdoc}
   */
  public function __construct($type) {
    parent::__construct($type);
    $this->entityInfo = entity_get_info($this->entityType);
  }

  /**
   * {@inheritdoc}
   */
  public function getIdFieldInfo() {
    return array(
      'key' => 'vid',
      'type' => 'integer',
    );
  }

  /**
   * {@inheritdoc}
   */
  public function loadItems(array $ids) {
    $items = [];
    $q = db_select('user_archive_cache', 'uac');
    $q->addExpression('MAX(uac.vid)', 'vid');
    $q->addField('uac', 'uid');
    $q->condition('uac.vid', $ids);
    $q->groupBy('uac.uid, uac.parliament_name, uac.user_role');

    foreach ($q->execute()->fetchAllKeyed(1, 0) as $vid => $uid) {
      $items[$vid] = user_revision_load($uid, $vid);
    }

    if (count($items) != count($ids)) {
      search_api_track_item_delete($this->type, array_diff($ids, array_keys($items)));
    }

    return $items;
  }

  /**
   * {@inheritdoc}
   */
  protected function getAllItemIds() {
    $q = db_select('user_archive_cache', 'uac')
      ->groupBy('uac.uid, uac.parliament_name, uac.user_role');
    $q->addExpression('MAX(uac.vid)');
    return $q->execute()->fetchCol();
  }
}
