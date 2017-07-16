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
    $item_ids_to_delete = [];
    $q = db_select('user_archive_cache', 'uac')
      ->fields('uac', ['vid', 'uid'])
      ->condition('vid', $ids);

    foreach ($q->execute()->fetchAllKeyed() as $vid => $uid) {
      $revision = user_revision_load($uid, $vid);

      if (!$revision) {
        $item_ids_to_delete[] = $vid;
      }
      else {
        $items[$vid] = $revision;
      }
    }

    search_api_track_item_delete($this->type, $item_ids_to_delete);

    return $items;
  }

  /**
   * {@inheritdoc}
   */
  protected function getAllItemIds() {
    return db_select('user_archive_cache', 'uac')
      ->fields('uac', [$this->getIdFieldInfo()['key']])
      ->execute()
      ->fetchCol();
  }
}
