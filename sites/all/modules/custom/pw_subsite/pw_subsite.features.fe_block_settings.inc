<?php
/**
 * @file
 * pw_subsite.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pw_subsite_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-menu_meta_de'] = array(
    'cache' => '1',
    'css_class' => 'small medium desktop-only',
    'custom' => '0',
    'machine_name' => 'menu_meta_de',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => 'user_second',
        'status' => '1',
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => 'user_second',
        'status' => '1',
        'theme' => 'parliamentwatch',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['block-pw_footer_abstract'] = array(
    'cache' => '1',
    'css_class' => 'medium',
    'custom' => '0',
    'machine_name' => 'pw_footer_abstract',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => 'postscript_first',
        'status' => '1',
        'theme' => 'parliamentwatch',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['block-pw_placeholder'] = array(
    'cache' => -1,
    'css_class' => 'desktop-only',
    'custom' => '0',
    'machine_name' => 'pw_placeholder',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'parliamentwatch',
        'weight' => '65',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['block-pw_transparancy_header'] = array(
    'cache' => '1',
    'css_class' => '',
    'custom' => '0',
    'machine_name' => 'pw_transparancy_header',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'parliamentwatch',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['block-social_media_footer'] = array(
    'cache' => '1',
    'css_class' => '',
    'custom' => '0',
    'machine_name' => 'social_media_footer',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => 'footer_first',
        'status' => '1',
        'theme' => 'parliamentwatch',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['custom_search_blocks-1'] = array(
    'cache' => '5',
    'css_class' => 'pw-custom-search custom-search-button',
    'custom' => '0',
    'delta' => '1',
    'module' => 'custom_search_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '-34',
      ),
      'parliamentwatch' => array(
        'region' => 'user_second',
        'status' => '1',
        'theme' => 'parliamentwatch',
        'weight' => '1',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '-34',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['custom_search_blocks-3'] = array(
    'cache' => '1',
    'css_class' => 'grid-5 alpha omega',
    'custom' => '0',
    'delta' => '3',
    'module' => 'custom_search_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'blank',
        'weight' => '8',
      ),
      'parliamentwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'parliamentwatch',
        'weight' => '-73',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '1',
  );

  $export['locale-language'] = array(
    'cache' => '1',
    'css_class' => '',
    'custom' => '0',
    'delta' => 'language',
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '-26',
      ),
      'parliamentwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'parliamentwatch',
        'weight' => '-26',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '-26',
      ),
    ),
    'title' => 'Language',
    'visibility' => '0',
  );

  $export['menu-menu-about-us-de'] = array(
    'cache' => '1',
    'css_class' => 'desktop-only',
    'custom' => '0',
    'delta' => 'menu-about-us-de',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '-36',
      ),
      'parliamentwatch' => array(
        'region' => 'footer_first',
        'status' => '1',
        'theme' => 'parliamentwatch',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '-36',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['menu-menu-elections-de'] = array(
    'cache' => '1',
    'css_class' => '',
    'custom' => '0',
    'delta' => 'menu-elections-de',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'parliamentwatch',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['menu-menu-main-menu-de'] = array(
    'cache' => '1',
    'css_class' => '',
    'custom' => '0',
    'delta' => 'menu-main-menu-de',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'blank',
        'weight' => '-20',
      ),
      'parliamentwatch' => array(
        'region' => 'user_second',
        'status' => '1',
        'theme' => 'parliamentwatch',
        'weight' => '-20',
      ),
      'pw_seven' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '-20',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['menu-menu-meta-de'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'menu-meta-de',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '-17',
      ),
      'parliamentwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'parliamentwatch',
        'weight' => '-17',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '-17',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['menu-menu-support-us-de'] = array(
    'cache' => '1',
    'css_class' => '',
    'custom' => '0',
    'delta' => 'menu-support-us-de',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'parliamentwatch',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['submenutree-0'] = array(
    'cache' => '4',
    'css_class' => '',
    'custom' => '0',
    'delta' => '0',
    'module' => 'submenutree',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'blank',
        'weight' => '7',
      ),
      'parliamentwatch' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'parliamentwatch',
        'weight' => '17',
      ),
      'pw_seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '-62',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['views-pw_donation_drive-block'] = array(
    'cache' => '-1',
    'css_class' => '',
    'custom' => '0',
    'delta' => 'pw_donation_drive-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'parliamentwatch',
        'weight' => '52',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Spendenkampagne',
    'visibility' => '1',
  );

  $export['views-pw_donation_state-all_countries'] = array(
    'cache' => -1,
    'css_class' => 'grid-4 alpha',
    'custom' => '0',
    'delta' => 'pw_donation_state-all_countries',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'parliamentwatch',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-pw_donation_state-block'] = array(
    'cache' => '1',
    'css_class' => '',
    'custom' => '0',
    'delta' => 'pw_donation_state-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'ueber-uns/spendenformular',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'parliamentwatch',
        'weight' => '58',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-pw_donation_state-block_1'] = array(
    'cache' => -1,
    'css_class' => 'grid-4 omega',
    'custom' => '0',
    'delta' => 'pw_donation_state-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'parliamentwatch',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-pw_donations_recent-recent'] = array(
    'cache' => '-1',
    'css_class' => '',
    'custom' => '0',
    'delta' => 'pw_donations_recent-recent',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'ueber-uns/spendenformular',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'parliamentwatch',
        'weight' => '99',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-pw_testimonials_header-block'] = array(
    'cache' => '-1',
    'css_class' => 'desktop-only',
    'custom' => '0',
    'delta' => 'pw_testimonials_header-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => 'header_second',
        'status' => '1',
        'theme' => 'parliamentwatch',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-pw_user_revision_switch-block'] = array(
    'cache' => -1,
    'css_class' => 'relative desktop-only',
    'custom' => '0',
    'delta' => 'pw_user_revision_switch-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'parliamentwatch',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-slider-block'] = array(
    'cache' => '-1',
    'css_class' => 'desktop-only',
    'custom' => '0',
    'delta' => 'slider-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '-17',
      ),
      'parliamentwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'parliamentwatch',
        'weight' => '-100',
      ),
      'pw_seven' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '-17',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['webform-client-block-10380'] = array(
    'cache' => '-1',
    'css_class' => '',
    'custom' => '0',
    'delta' => 'client-block-10380',
    'module' => 'webform',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => 'user_second',
        'status' => '1',
        'theme' => 'parliamentwatch',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['webform-client-block-104846'] = array(
    'cache' => '-1',
    'css_class' => 'pw-promo-block',
    'custom' => '0',
    'delta' => 'client-block-104846',
    'module' => 'webform',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'parliamentwatch',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
