<?php
/**
 * @file
 * pw_seo.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function pw_seo_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[site:name] | [current-page:title]',
      ),
      'description' => array(
        'value' => '',
      ),
      'abstract' => array(
        'value' => '',
      ),
      'keywords' => array(
        'value' => '',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'news_keywords' => array(
        'value' => '',
      ),
      'standout' => array(
        'value' => '',
      ),
      'rating' => array(
        'value' => '',
      ),
      'referrer' => array(
        'value' => '',
      ),
      'generator' => array(
        'value' => 'Drupal 7 (http://drupal.org)',
      ),
      'rights' => array(
        'value' => '',
      ),
      'image_src' => array(
        'value' => '',
      ),
      'canonical' => array(
        'value' => 'https://www.abgeordnetenwatch.de/[current-page:url:path]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
      'original-source' => array(
        'value' => '',
      ),
      'prev' => array(
        'value' => '',
      ),
      'next' => array(
        'value' => '',
      ),
      'content-language' => array(
        'value' => '',
      ),
      'geo.position' => array(
        'value' => '',
      ),
      'geo.placename' => array(
        'value' => '',
      ),
      'geo.region' => array(
        'value' => '',
      ),
      'icbm' => array(
        'value' => '',
      ),
      'refresh' => array(
        'value' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
      ),
      'pragma' => array(
        'value' => '',
      ),
      'cache-control' => array(
        'value' => '',
      ),
      'expires' => array(
        'value' => '',
      ),
      'fb:admins' => array(
        'value' => '',
      ),
      'fb:app_id' => array(
        'value' => '',
      ),
      'fb:pages' => array(
        'value' => '',
      ),
      'itemtype' => array(
        'value' => '',
      ),
      'itemprop:name' => array(
        'value' => '[current-page:title]',
      ),
      'itemprop:description' => array(
        'value' => '',
      ),
      'itemprop:image' => array(
        'value' => '',
      ),
      'author' => array(
        'value' => '',
      ),
      'publisher' => array(
        'value' => '',
      ),
      'og:site_name' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'article',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'og:title' => array(
        'value' => '[current-page:title]',
      ),
      'og:determiner' => array(
        'value' => '',
      ),
      'og:description' => array(
        'value' => '',
      ),
      'og:updated_time' => array(
        'value' => '',
      ),
      'og:see_also' => array(
        'value' => '',
      ),
      'og:image' => array(
        'value' => '[site:url]sites/all/themes/custom/parliamentwatch/images/share/aw_share_image_default.jpg',
      ),
      'og:image:url' => array(
        'value' => '',
      ),
      'og:image:secure_url' => array(
        'value' => '',
      ),
      'og:image:type' => array(
        'value' => '',
      ),
      'og:image:width' => array(
        'value' => '',
      ),
      'og:image:height' => array(
        'value' => '',
      ),
      'og:latitude' => array(
        'value' => '',
      ),
      'og:longitude' => array(
        'value' => '',
      ),
      'og:street_address' => array(
        'value' => '',
      ),
      'og:locality' => array(
        'value' => '',
      ),
      'og:region' => array(
        'value' => '',
      ),
      'og:postal_code' => array(
        'value' => '',
      ),
      'og:country_name' => array(
        'value' => '',
      ),
      'og:email' => array(
        'value' => '',
      ),
      'og:phone_number' => array(
        'value' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
      ),
      'og:locale' => array(
        'value' => '',
      ),
      'og:locale:alternate' => array(
        'value' => '',
      ),
      'article:author' => array(
        'value' => '',
      ),
      'article:publisher' => array(
        'value' => '',
      ),
      'article:section' => array(
        'value' => '',
      ),
      'article:tag' => array(
        'value' => '',
      ),
      'article:published_time' => array(
        'value' => '',
      ),
      'article:modified_time' => array(
        'value' => '',
      ),
      'article:expiration_time' => array(
        'value' => '',
      ),
      'profile:first_name' => array(
        'value' => '',
      ),
      'profile:last_name' => array(
        'value' => '',
      ),
      'profile:username' => array(
        'value' => '',
      ),
      'profile:gender' => array(
        'value' => '',
      ),
      'og:audio' => array(
        'value' => '',
      ),
      'og:audio:secure_url' => array(
        'value' => '',
      ),
      'og:audio:type' => array(
        'value' => '',
      ),
      'book:author' => array(
        'value' => '',
      ),
      'book:isbn' => array(
        'value' => '',
      ),
      'book:release_date' => array(
        'value' => '',
      ),
      'book:tag' => array(
        'value' => '',
      ),
      'og:video:url' => array(
        'value' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
      ),
      'og:video:width' => array(
        'value' => '',
      ),
      'og:video:height' => array(
        'value' => '',
      ),
      'og:video:type' => array(
        'value' => '',
      ),
      'video:actor' => array(
        'value' => '',
      ),
      'video:actor:role' => array(
        'value' => '',
      ),
      'video:director' => array(
        'value' => '',
      ),
      'video:writer' => array(
        'value' => '',
      ),
      'video:duration' => array(
        'value' => '',
      ),
      'video:release_date' => array(
        'value' => '',
      ),
      'video:tag' => array(
        'value' => '',
      ),
      'video:series' => array(
        'value' => '',
      ),
      'twitter:card' => array(
        'value' => 'summary_large_image',
      ),
      'twitter:site' => array(
        'value' => '@a_watch',
      ),
      'twitter:site:id' => array(
        'value' => '35142791',
      ),
      'twitter:creator' => array(
        'value' => '',
      ),
      'twitter:creator:id' => array(
        'value' => '',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'twitter:title' => array(
        'value' => '[current-page:title]',
      ),
      'twitter:description' => array(
        'value' => '[site:slogan]',
      ),
      'twitter:image' => array(
        'value' => '[site:url]sites/all/themes/custom/parliamentwatch/images/share/aw_share_image_default.jpg',
      ),
      'twitter:image:width' => array(
        'value' => '',
      ),
      'twitter:image:height' => array(
        'value' => '',
      ),
      'twitter:image:alt' => array(
        'value' => '',
      ),
      'twitter:image0' => array(
        'value' => '',
      ),
      'twitter:image1' => array(
        'value' => '',
      ),
      'twitter:image2' => array(
        'value' => '',
      ),
      'twitter:image3' => array(
        'value' => '',
      ),
      'twitter:player' => array(
        'value' => '',
      ),
      'twitter:player:width' => array(
        'value' => '',
      ),
      'twitter:player:height' => array(
        'value' => '',
      ),
      'twitter:player:stream' => array(
        'value' => '',
      ),
      'twitter:player:stream:content_type' => array(
        'value' => '',
      ),
      'twitter:app:country' => array(
        'value' => '',
      ),
      'twitter:app:name:iphone' => array(
        'value' => '',
      ),
      'twitter:app:id:iphone' => array(
        'value' => '',
      ),
      'twitter:app:url:iphone' => array(
        'value' => '',
      ),
      'twitter:app:name:ipad' => array(
        'value' => '',
      ),
      'twitter:app:id:ipad' => array(
        'value' => '',
      ),
      'twitter:app:url:ipad' => array(
        'value' => '',
      ),
      'twitter:app:name:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:id:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:url:googleplay' => array(
        'value' => '',
      ),
      'twitter:label1' => array(
        'value' => '',
      ),
      'twitter:data1' => array(
        'value' => '',
      ),
      'twitter:label2' => array(
        'value' => '',
      ),
      'twitter:data2' => array(
        'value' => '',
      ),
    ),
  );

  // Exported Metatag config instance: global:403.
  $config['global:403'] = array(
    'instance' => 'global:403',
    'disabled' => FALSE,
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'itemprop:name' => array(
        'value' => '[current-page:title]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:404.
  $config['global:404'] = array(
    'instance' => 'global:404',
    'disabled' => FALSE,
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'itemprop:name' => array(
        'value' => '[current-page:title]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[site:name] | [site:slogan]',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'itemprop:name' => array(
        'value' => '[current-page:title]',
      ),
      'og:description' => array(
        'value' => '[site:slogan]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:description' => array(
        'value' => '[site:slogan]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[site:name] | [node:title]',
      ),
      'description' => array(
        'value' => '[node:summary]',
      ),
      'itemprop:name' => array(
        'value' => '[node:title]',
      ),
      'itemprop:description' => array(
        'value' => '[node:summary]',
      ),
      'og:title' => array(
        'value' => '[node:title]',
      ),
      'og:description' => array(
        'value' => '[node:summary]',
      ),
      'og:updated_time' => array(
        'value' => '[node:changed:custom:c]',
      ),
      'article:published_time' => array(
        'value' => '[node:created:custom:c]',
      ),
      'article:modified_time' => array(
        'value' => '[node:changed:custom:c]',
      ),
      'twitter:title' => array(
        'value' => '[node:title]',
      ),
      'twitter:description' => array(
        'value' => '[node:summary]',
      ),
    ),
  );

  // Exported Metatag config instance: node:blogpost.
  $config['node:blogpost'] = array(
    'instance' => 'node:blogpost',
    'disabled' => FALSE,
    'config' => array(
      'description' => array(
        'value' => '[node:field_blogpost_intro]',
      ),
      'abstract' => array(
        'value' => '[node:summary]',
      ),
      'robots' => array(
        'value' => array(
          'index' => 'index',
          'follow' => 'follow',
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'image_src' => array(
        'value' => '[node:field-teaser-image:file:url]',
      ),
      'itemtype' => array(
        'value' => 'Blog',
      ),
      'itemprop:name' => array(
        'value' => '[site:name] | [node:title]',
      ),
      'itemprop:image' => array(
        'value' => '[node:field-teaser-image:file:url]',
      ),
      'og:title' => array(
        'value' => '[site:name] | [node:title]',
      ),
      'og:image' => array(
        'value' => '[node:field_teaser_image:share_image]',
      ),
      'twitter:title' => array(
        'value' => '[site:name] | [node:title]',
      ),
      'twitter:image' => array(
        'value' => '[node:field-teaser-image:file:url]',
      ),
      'twitter:image:alt' => array(
        'value' => '[node:field-teaser-image:alt]',
      ),
    ),
  );

  // Exported Metatag config instance: node:dialogue.
  $config['node:dialogue'] = array(
    'instance' => 'node:dialogue',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[site:name] | Frage an [node:field-dialogue-recipient:field_user_prefix] [node:field-dialogue-recipient:field_user_fname] [node:field-dialogue-recipient:field_user_lname] bezüglich [node:field-dialogue-topic] - [node:field_parliament]',
      ),
      'abstract' => array(
        'value' => '[node:summary]',
      ),
      'robots' => array(
        'value' => array(
          'noindex' => 'noindex',
          'nofollow' => 'nofollow',
          'noarchive' => 'noarchive',
          'nosnippet' => 'nosnippet',
          'noodp' => 'noodp',
          'noydir' => 'noydir',
          'noimageindex' => 'noimageindex',
          'notranslate' => 'notranslate',
          'index' => 0,
          'follow' => 0,
        ),
      ),
      'content-language' => array(
        'value' => 'DE',
      ),
      'itemtype' => array(
        'value' => 'Person',
      ),
      'itemprop:name' => array(
        'value' => '[site:name] | Frage an [node:field-dialogue-recipient:field_user_prefix] [node:field-dialogue-recipient:field_user_fname] [node:field-dialogue-recipient:field_user_lname] - [node:field_parliament]',
      ),
      'og:title' => array(
        'value' => '[site:name] | Frage an [node:field-dialogue-recipient:field_user_prefix] [node:field-dialogue-recipient:field_user_fname] [node:field-dialogue-recipient:field_user_lname] bezüglich [node:field-dialogue-topic] - [node:field_parliament]',
      ),
      'og:see_also' => array(
        'value' => 'https://www.abgeordnetenwatch.de/profile/[node:field-dialogue-recipient]',
      ),
      'og:image' => array(
        'value' => '[node:field-dialogue-recipient:field_user_picture:square_medium]',
      ),
      'og:locale' => array(
        'value' => 'de_DE',
      ),
      'twitter:title' => array(
        'value' => '[site:name] | Frage an [node:field-dialogue-recipient:field_user_prefix] [node:field-dialogue-recipient:field_user_fname] [node:field-dialogue-recipient:field_user_lname] bezüglich [node:field-dialogue-topic] - [node:field_parliament]',
      ),
      'twitter:image' => array(
        'value' => '[node:field-dialogue-recipient:field_user_picture:square_medium]',
      ),
    ),
  );

  // Exported Metatag config instance: node:newsletter.
  $config['node:newsletter'] = array(
    'instance' => 'node:newsletter',
    'disabled' => FALSE,
    'config' => array(
      'robots' => array(
        'value' => array(
          'noindex' => 'noindex',
          'nofollow' => 'nofollow',
          'noarchive' => 'noarchive',
          'nosnippet' => 'nosnippet',
          'noodp' => 'noodp',
          'noydir' => 'noydir',
          'noimageindex' => 'noimageindex',
          'notranslate' => 'notranslate',
          'index' => 0,
          'follow' => 0,
        ),
      ),
    ),
  );

  // Exported Metatag config instance: node:press_release.
  $config['node:press_release'] = array(
    'instance' => 'node:press_release',
    'disabled' => FALSE,
    'config' => array(
      'abstract' => array(
        'value' => '[node:summary]',
      ),
      'robots' => array(
        'value' => array(
          'index' => 'index',
          'follow' => 'follow',
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'itemtype' => array(
        'value' => 'Article',
      ),
      'itemprop:name' => array(
        'value' => '[site:name] | [node:title]',
      ),
      'og:title' => array(
        'value' => '[site:name] | [node:title]',
      ),
      'twitter:title' => array(
        'value' => '[site:name] | [node:title]',
      ),
    ),
  );

  // Exported Metatag config instance: node:pw_petition.
  $config['node:pw_petition'] = array(
    'instance' => 'node:pw_petition',
    'disabled' => FALSE,
    'config' => array(
      'og:image' => array(
        'value' => '[node:field_teaser_image:share_image]',
      ),
    ),
  );

  // Exported Metatag config instance: taxonomy_term.
  $config['taxonomy_term'] = array(
    'instance' => 'taxonomy_term',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[site:name] | [term:name]',
      ),
      'description' => array(
        'value' => '[term:description]',
      ),
      'itemprop:name' => array(
        'value' => '[term:name]',
      ),
      'itemprop:description' => array(
        'value' => '[term:description]',
      ),
      'og:title' => array(
        'value' => '[term:name]',
      ),
      'og:description' => array(
        'value' => '[term:description]',
      ),
      'twitter:title' => array(
        'value' => '[site:name] | [term:name]',
      ),
      'twitter:description' => array(
        'value' => '[term:description]',
      ),
    ),
  );

  // Exported Metatag config instance: user.
  $config['user'] = array(
    'instance' => 'user',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[site:name] | Profil von [user:field-user-prefix] [user:field-user-fname] [user:field_user_lname], [user:field-user-party] - [user:field-user-parliament]',
      ),
      'robots' => array(
        'value' => array(
          'index' => 'index',
          'follow' => 'follow',
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'image_src' => array(
        'value' => '[user:field-user-picture:file:url]',
      ),
      'itemtype' => array(
        'value' => 'Person',
      ),
      'itemprop:name' => array(
        'value' => '[site:name] | Profil von [user:field-user-prefix] [user:field-user-fname] [user:field_user_lname], [user:field-user-party] - [user:field-user-parliament]',
      ),
      'og:type' => array(
        'value' => 'profile',
      ),
      'og:title' => array(
        'value' => '[site:name] | Profil von [user:field-user-prefix] [user:field-user-fname] [user:field_user_lname], [user:field-user-party] - [user:field-user-parliament]',
      ),
      'og:description' => array(
        'value' => '[site:name] | Profil von [user:field-user-prefix] [user:field-user-fname] [user:field_user_lname], [user:field-user-party] - [user:field-user-parliament]',
      ),
      'og:image' => array(
        'value' => '[user:field_user_picture:square_medium]',
      ),
      'profile:username' => array(
        'value' => '[user:name]',
      ),
      'twitter:card' => array(
        'value' => 'summary',
      ),
      'twitter:title' => array(
        'value' => '[site:name] | Profil von [user:field-user-prefix] [user:field-user-fname] [user:field_user_lname], [user:field-user-party] - [user:field-user-parliament]',
      ),
      'twitter:image' => array(
        'value' => '[user:field_user_picture:square_medium]',
      ),
    ),
  );

  return $config;
}
