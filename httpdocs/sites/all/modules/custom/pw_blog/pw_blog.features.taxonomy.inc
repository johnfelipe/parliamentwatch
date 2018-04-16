<?php
/**
 * @file
 * pw_blog.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pw_blog_taxonomy_default_vocabularies() {
  return array(
    'blogcategories' => array(
      'name' => 'Blogcategories',
      'machine_name' => 'blogcategories',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
