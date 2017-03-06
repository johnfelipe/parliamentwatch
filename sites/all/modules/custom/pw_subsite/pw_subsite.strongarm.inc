<?php
/**
 * @file
 * pw_subsite.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pw_subsite_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'Europe/Berlin';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_first_day';
  $strongarm->value = '1';
  $export['date_first_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_default';
  $strongarm->value = (object) array(
    'language' => 'de',
    'name' => 'German',
    'native' => 'Deutsch',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '2',
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'de',
    'weight' => '0',
    'javascript' => 'UCZpovnTnwx3c60hRhyPlVi5281GT9C2UKa2GDL3ocE',
  );
  $export['language_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blogpost_de_pattern';
  $strongarm->value = '';
  $export['pathauto_node_blogpost_de_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_de_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_de_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_press_article_de_pattern';
  $strongarm->value = 'ueber-uns/presse/presseartikel/[node:field-press-article-date:custom:Y-m-d]/[node:title]';
  $export['pathauto_node_press_article_de_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_press_release_de_pattern';
  $strongarm->value = 'ueber-uns/presse/pressemitteilungen/[node:field-press-release-date:custom:Y-m-d]/[node:title]';
  $export['pathauto_node_press_release_de_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_trustee_de_pattern';
  $strongarm->value = 'ueber-uns/mehr/kuratorium/[node:title]';
  $export['pathauto_node_trustee_de_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_webform_de_pattern';
  $strongarm->value = '';
  $export['pathauto_node_webform_de_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_cache';
  $strongarm->value = 1;
  $export['piwik_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_codesnippet_after';
  $strongarm->value = '';
  $export['piwik_codesnippet_after'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_codesnippet_before';
  $strongarm->value = '';
  $export['piwik_codesnippet_before'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_custom';
  $strongarm->value = '0';
  $export['piwik_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_custom_var';
  $strongarm->value = array(
    'slots' => array(
      1 => array(
        'slot' => 1,
        'name' => '',
        'value' => '',
        'scope' => 'visit',
      ),
      2 => array(
        'slot' => 2,
        'name' => '',
        'value' => '',
        'scope' => 'visit',
      ),
      3 => array(
        'slot' => 3,
        'name' => '',
        'value' => '',
        'scope' => 'visit',
      ),
      4 => array(
        'slot' => 4,
        'name' => '',
        'value' => '',
        'scope' => 'visit',
      ),
      5 => array(
        'slot' => 5,
        'name' => '',
        'value' => '',
        'scope' => 'visit',
      ),
    ),
  );
  $export['piwik_custom_var'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_domain_mode';
  $strongarm->value = '1';
  $export['piwik_domain_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_js_scope';
  $strongarm->value = 'header';
  $export['piwik_js_scope'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_pages';
  $strongarm->value = 'admin
admin/*
batch
node/add*
node/*/*
user/*/*';
  $export['piwik_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_page_title_hierarchy';
  $strongarm->value = 1;
  $export['piwik_page_title_hierarchy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_page_title_hierarchy_exclude_home';
  $strongarm->value = 1;
  $export['piwik_page_title_hierarchy_exclude_home'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_privacy_donottrack';
  $strongarm->value = 1;
  $export['piwik_privacy_donottrack'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_roles';
  $strongarm->value = array(
    1 => '1',
    2 => '2',
    181527986 => '181527986',
    3 => 0,
    51622513 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
    40118511 => 0,
  );
  $export['piwik_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_site_id';
  $strongarm->value = '1';
  $export['piwik_site_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_site_search';
  $strongarm->value = 0;
  $export['piwik_site_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_track';
  $strongarm->value = 1;
  $export['piwik_track'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_trackfiles_extensions';
  $strongarm->value = '7z|aac|arc|arj|asf|asx|avi|bin|csv|doc(x|m)?|dot(x|m)?|exe|flv|gif|gz|gzip|hqx|jar|jpe?g|js|mp(2|3|4|e?g)|mov(ie)?|msi|msp|pdf|phps|png|ppt(x|m)?|pot(x|m)?|pps(x|m)?|ppam|sld(x|m)?|thmx|qtm?|ra(m|r)?|sea|sit|tar|tgz|torrent|txt|wav|wma|wmv|wpd|xls(x|m|b)?|xlt(x|m)|xlam|xml|z|zip';
  $export['piwik_trackfiles_extensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_translation_set';
  $strongarm->value = 0;
  $export['piwik_translation_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_url_http';
  $strongarm->value = 'https://stats.parliamentwatch.org/';
  $export['piwik_url_http'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_url_https';
  $strongarm->value = 'https://stats.parliamentwatch.org/';
  $export['piwik_url_https'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_visibility_pages';
  $strongarm->value = '0';
  $export['piwik_visibility_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_visibility_roles';
  $strongarm->value = '0';
  $export['piwik_visibility_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'DE';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'info@abgeordnetenwatch.de';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_allthemes';
  $strongarm->value = 0;
  $export['themekey_allthemes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_attributes';
  $strongarm->value = array(
    'comment:cid' => array(
      'description' => 'Comment: ID - The id of a comment (cid). See <a href="/admin/content/comment">admin/content/comment</a> for your published comments or <a href="/admin/content/comment/approval">admin/content/comment/approval</a> for comments awaiting approval',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'drupal:base_path' => array(
      'description' => 'Drupal: Base path - If Drupal is installed in a subdirectory, the base path will be \'/[subdirectory]/\', otherwise just \'/\'.',
      'page cache' => 1,
    ),
    'drupal:get_q' => array(
      'description' => 'Drupal: $_GET[\'q\'] - Current value of Drupal\'s query parameter "q"',
      'validator' => '',
      'page cache' => 1,
    ),
    'drupal:is_front_page' => array(
      'description' => 'Drupal: Is front page - \'true\' if current page is front page, otherwise just \'false\'.',
      'validator' => 'themekey_validator_string_boolean',
      'page cache' => 1,
    ),
    'drupal:path' => array(
      'description' => 'Drupal: Drupal path like "node/add/story" or path alias with support for wildcards.<br />
Query parameters are stripped off before the path gets examined. P.e. "node/add/story?destination=node" becomes "node/add/story" first. If you want to access query parameters, have a look at the <strong>system:query_param</strong> property.<br />
Wildcard characters are "#" for numeric parts and "%" for all characters. To match conditions against a certain part, use an identifier with the wildcard. For example "comment/reply/#xyz" matches all paths with "comment/reply" and a numeric third argument. You can then specify conditions for every wildcard argument using the property "drupal:path:wildcard" and the identifier you choose ("xyz" in this example).<br />
These are the possible wildcard replacements for foo/bar/42/test.html:<pre>
foo/bar/42/test.html
foo/bar/42/%
foo/bar/42
foo/bar/%/test.html
foo/bar/%/%
foo/bar/%
foo/bar/#/test.html
foo/bar/#/%
foo/bar/#
foo/bar
foo/%/42/test.html
foo/%/42/%
foo/%/42
foo/%/%/test.html
foo/%/%/%
foo/%/%
foo/%/#/test.html
foo/%/#/%
foo/%/#
foo/%
foo
%/bar/42/test.html
%/bar/42/%
%/bar/42
%/bar/%/test.html
%/bar/%/%
%/bar/%
%/bar/#/test.html
%/bar/#/%
%/bar/#
%/bar
%/%/42/test.html
%/%/42/%
%/%/42
%/%/%/test.html
%/%/%/%
%/%/%
%/%/#/test.html
%/%/#/%
%/%/#
%/%
%
</pre>',
      'validator' => 'themekey_validator_drupal_path',
      'page cache' => 1,
    ),
    'drupal:path:wildcard' => array(
      'description' => 'Wildcard of "drupal:path". See explanation of "drupal:path" for details.',
      'validator' => 'themekey_validator_wildcard',
      'page cache' => 1,
    ),
    'drupal:path_is_admin' => array(
      'description' => 'Drupal: Path is admin - \'true\' if current page\'s path belongs to the admin section, otherwise just \'false\'.',
      'validator' => 'themekey_validator_string_boolean',
      'page cache' => 1,
    ),
    'locale:language' => array(
      'description' => 'Locale: Language - The code of the current site language, formatted like "en" or "de" or "neutral". See <a href="/admin/config/language">admin/config/language</a> for the codes of your enabled languages',
      'validator' => 'themekey_validator_language',
      'page cache' => 1,
    ),
    'locale:language_content' => array(
      'description' => 'Locale: Language Content - The code of the current content language, formatted like "en" or "de" or "neutral". See <a href="/admin/config/language">admin/config/language</a> for the codes of your enabled languages',
      'validator' => 'themekey_validator_language',
      'page cache' => 1,
    ),
    'locale:language_from_browser' => array(
      'description' => 'Locale: Language From Browser - Identify best matching language from the Accept-language HTTP header we got.',
      'validator' => 'themekey_validator_language',
      'page cache' => 0,
    ),
    'node:body_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">body</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:body_summary' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">summary</em> of the field <em class="placeholder">body</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:body_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">body</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:changed' => array(
      'description' => 'Node: Changed date - The date when the node was last edited/updated, formatted as unix timestamp like "1248873565".',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'node:changed_date' => array(
      'description' => 'Node: Changed date - The date without the time when the node was last edited/updated, formatted like "2009-12-24"',
      'validator' => 'themekey_validator_date',
      'page cache' => 1,
    ),
    'node:changed_date_time' => array(
      'description' => 'Node: Changed date - The date including the time when the node was last edited/updated, formatted like "2009-12-24 18:13:24"',
      'validator' => 'themekey_validator_date_time',
      'page cache' => 1,
    ),
    'node:created' => array(
      'description' => 'Node: Created date - The date when the node was created, formatted as unix timestamp like "1248873565".',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'node:created_date' => array(
      'description' => 'Node: Created date - The date without the time when the node was created, formatted like "2009-12-24"',
      'validator' => 'themekey_validator_date',
      'page cache' => 1,
    ),
    'node:created_date_time' => array(
      'description' => 'Node: Created date - The date including the time when the node was created, formatted like "2009-12-24 18:13:24"',
      'validator' => 'themekey_validator_date_time',
      'page cache' => 1,
    ),
    'node:drulenium_num_command_errors_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">drulenium_num_command_errors</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:drulenium_num_command_failures_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">drulenium_num_command_failures</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:drulenium_num_command_passes_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">drulenium_num_command_passes</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:drulenium_num_test_failures_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">drulenium_num_test_failures</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:drulenium_num_test_passes_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">drulenium_num_test_passes</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:drulenium_num_test_total_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">drulenium_num_test_total</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:drulenium_result_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">drulenium_result</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:drulenium_result_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">drulenium_result</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:drulenium_revision_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">drulenium_revision</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:drulenium_revision_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">drulenium_revision</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:drulenium_suite_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">drulenium_suite</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:drulenium_suite_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">drulenium_suite</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:drulenium_total_time_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">drulenium_total_time</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:drulenium_version_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">drulenium_version</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:drulenium_version_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">drulenium_version</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_announce_background_image_alt' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">alt</em> of the field <em class="placeholder">field_announce_background_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_announce_background_image_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_announce_background_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_announce_background_image_height' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">height</em> of the field <em class="placeholder">field_announce_background_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_announce_background_image_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_announce_background_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_announce_background_image_width' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">width</em> of the field <em class="placeholder">field_announce_background_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_announce_body_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_announce_body</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_announce_body_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_announce_body</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_announce_link_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_announce_link</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_announce_link_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_announce_link</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_announce_link_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_announce_link</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_announce_tab_title_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_announce_tab_title</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_announce_tab_title_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_announce_tab_title</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_blockreference_moddelta' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">moddelta</em> of the field <em class="placeholder">field_blockreference</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_blogpost_blogtags_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_blogpost_blogtags</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_blogpost_categories_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_blogpost_categories</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_calendar_entry_address_administrative_area' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">administrative_area</em> of the field <em class="placeholder">field_calendar_entry_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_calendar_entry_address_country' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">country</em> of the field <em class="placeholder">field_calendar_entry_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_calendar_entry_address_data' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">data</em> of the field <em class="placeholder">field_calendar_entry_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_calendar_entry_address_dependent_locality' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">dependent_locality</em> of the field <em class="placeholder">field_calendar_entry_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_calendar_entry_address_first_name' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">first_name</em> of the field <em class="placeholder">field_calendar_entry_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_calendar_entry_address_last_name' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">last_name</em> of the field <em class="placeholder">field_calendar_entry_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_calendar_entry_address_locality' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">locality</em> of the field <em class="placeholder">field_calendar_entry_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_calendar_entry_address_name_line' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">name_line</em> of the field <em class="placeholder">field_calendar_entry_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_calendar_entry_address_organisation_name' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">organisation_name</em> of the field <em class="placeholder">field_calendar_entry_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_calendar_entry_address_postal_code' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">postal_code</em> of the field <em class="placeholder">field_calendar_entry_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_calendar_entry_address_premise' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">premise</em> of the field <em class="placeholder">field_calendar_entry_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_calendar_entry_address_sub_administrative_area' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">sub_administrative_area</em> of the field <em class="placeholder">field_calendar_entry_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_calendar_entry_address_sub_premise' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">sub_premise</em> of the field <em class="placeholder">field_calendar_entry_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_calendar_entry_address_thoroughfare' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">thoroughfare</em> of the field <em class="placeholder">field_calendar_entry_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_calendar_entry_date_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_calendar_entry_date</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_committee_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_committee</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_deviant_vote_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_deviant_vote</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_dialogue_annotation_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_dialogue_annotation</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_dialogue_annotation_summary' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">summary</em> of the field <em class="placeholder">field_dialogue_annotation</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_dialogue_annotation_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_dialogue_annotation</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_dialogue_before_election_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_dialogue_before_election</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_dialogue_documents_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_dialogue_documents</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_dialogue_documents_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_dialogue_documents</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_dialogue_documents_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_dialogue_documents</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_dialogue_id_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_dialogue_id</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_dialogue_message_id_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_dialogue_message_id</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_dialogue_message_type_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_dialogue_message_type</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_dialogue_recipient_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_dialogue_recipient</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_dialogue_sender_name_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_dialogue_sender_name</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_dialogue_sender_name_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_dialogue_sender_name</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_dialogue_tags_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_dialogue_tags</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_dialogue_topic_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_dialogue_topic</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_donation_amount_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_donation_amount</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_donation_progress_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_donation_progress</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_donation_required_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_donation_required</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_duration_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_duration</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_election_programme_open_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_election_programme_open</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_election_programme_open_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_election_programme_open</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_election_programme_open_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_election_programme_open</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_job_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_job</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_kc_thesis_number_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_kc_thesis_number</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_link_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_link</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_link_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_link</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_link_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_link</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_newsletter_paragraph_revision_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">revision_id</em> of the field <em class="placeholder">field_newsletter_paragraph</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_newsletter_paragraph_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_newsletter_paragraph</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_parliament_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_parliament</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_pdf_download_data' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">data</em> of the field <em class="placeholder">field_pdf_download</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_pdf_download_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_pdf_download</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_pdf_download_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_pdf_download</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_content_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_petition_content</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_content_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_petition_content</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_end_date_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_petition_end_date</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_external_url_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_petition_external_url</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_external_url_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_petition_external_url</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_external_url_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_petition_external_url</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_partner_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_petition_partner</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_partner_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_petition_partner</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_recipient_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_petition_recipient</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_recipient_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_petition_recipient</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_required_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_petition_required</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_signings_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_petition_signings</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_starter_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_petition_starter</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_starter_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_petition_starter</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_status_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_petition_status</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_text_donation_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_petition_text_donation</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_text_donation_summary' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">summary</em> of the field <em class="placeholder">field_petition_text_donation</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_text_donation_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_petition_text_donation</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_text_parliament_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_petition_text_parliament</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_text_parliament_summary' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">summary</em> of the field <em class="placeholder">field_petition_text_parliament</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_text_parliament_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_petition_text_parliament</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_text_passed_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_petition_text_passed</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_text_passed_summary' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">summary</em> of the field <em class="placeholder">field_petition_text_passed</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_text_passed_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_petition_text_passed</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_welcome_message_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_petition_welcome_message</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_petition_welcome_message_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_petition_welcome_message</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_piwik_campaign_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_piwik_campaign</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_piwik_campaign_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_piwik_campaign</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_politician_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_politician</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_poll_date_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_poll_date</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_poll_external_url_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_poll_external_url</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_poll_external_url_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_poll_external_url</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_article_attachment_description' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">description</em> of the field <em class="placeholder">field_press_article_attachment</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_article_attachment_display' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">display</em> of the field <em class="placeholder">field_press_article_attachment</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_article_attachment_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_press_article_attachment</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_article_date_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_press_article_date</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_article_link_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_press_article_link</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_article_link_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_press_article_link</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_article_link_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_press_article_link</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_article_publisher_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_press_article_publisher</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_article_publisher_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_press_article_publisher</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_article_sound_data' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">data</em> of the field <em class="placeholder">field_press_article_sound</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_article_sound_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_press_article_sound</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_article_sound_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_press_article_sound</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_article_video_data' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">data</em> of the field <em class="placeholder">field_press_article_video</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_article_video_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_press_article_video</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_article_video_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_press_article_video</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_release_body_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_press_release_body</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_release_body_summary' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">summary</em> of the field <em class="placeholder">field_press_release_body</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_release_body_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_press_release_body</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_press_release_date_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_press_release_date</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_pw_kc_thesis_reference_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_pw_kc_thesis_reference</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_pw_kc_user_reference_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_pw_kc_user_reference</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_pw_kc_vote_reference_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_pw_kc_vote_reference</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_search_sort_date_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_search_sort_date</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sectors_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_sectors</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_share_sum_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_share_sum</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_show_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_show</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_address_administrative_area' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">administrative_area</em> of the field <em class="placeholder">field_sidejob_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_address_country' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">country</em> of the field <em class="placeholder">field_sidejob_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_address_data' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">data</em> of the field <em class="placeholder">field_sidejob_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_address_dependent_locality' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">dependent_locality</em> of the field <em class="placeholder">field_sidejob_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_address_first_name' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">first_name</em> of the field <em class="placeholder">field_sidejob_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_address_last_name' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">last_name</em> of the field <em class="placeholder">field_sidejob_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_address_locality' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">locality</em> of the field <em class="placeholder">field_sidejob_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_address_name_line' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">name_line</em> of the field <em class="placeholder">field_sidejob_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_address_organisation_name' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">organisation_name</em> of the field <em class="placeholder">field_sidejob_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_address_postal_code' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">postal_code</em> of the field <em class="placeholder">field_sidejob_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_address_premise' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">premise</em> of the field <em class="placeholder">field_sidejob_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_address_sub_administrative_area' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">sub_administrative_area</em> of the field <em class="placeholder">field_sidejob_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_address_sub_premise' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">sub_premise</em> of the field <em class="placeholder">field_sidejob_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_address_thoroughfare' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">thoroughfare</em> of the field <em class="placeholder">field_sidejob_address</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_classification_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_sidejob_classification</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_classification_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_sidejob_classification</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_date_end_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_sidejob_date_end</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_date_start_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_sidejob_date_start</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_income_interval_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_sidejob_income_interval</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_income_max_total_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_sidejob_income_max_total</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_income_max_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_sidejob_income_max</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_income_min_total_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_sidejob_income_min_total</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_income_min_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_sidejob_income_min</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sidejob_organization_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_sidejob_organization</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_slider_teaserbody_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_slider_teaserbody</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_slider_teaserbody_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_slider_teaserbody</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_slider_url_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_slider_url</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_slider_url_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_slider_url</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_slider_url_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_slider_url</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_taxonomy_party_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_taxonomy_party</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_teaser_image_alt' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">alt</em> of the field <em class="placeholder">field_teaser_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_teaser_image_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_teaser_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_teaser_image_height' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">height</em> of the field <em class="placeholder">field_teaser_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_teaser_image_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_teaser_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_teaser_image_width' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">width</em> of the field <em class="placeholder">field_teaser_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_testimonial_fullname_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_testimonial_fullname</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_testimonial_fullname_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_testimonial_fullname</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_testimonial_month_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_testimonial_month</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_testimonial_portrait_alt' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">alt</em> of the field <em class="placeholder">field_testimonial_portrait</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_testimonial_portrait_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_testimonial_portrait</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_testimonial_portrait_height' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">height</em> of the field <em class="placeholder">field_testimonial_portrait</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_testimonial_portrait_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_testimonial_portrait</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_testimonial_portrait_width' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">width</em> of the field <em class="placeholder">field_testimonial_portrait</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_testimonial_quote_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_testimonial_quote</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_testimonial_quote_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_testimonial_quote</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_trustee_image_alt' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">alt</em> of the field <em class="placeholder">field_trustee_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_trustee_image_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_trustee_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_trustee_image_height' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">height</em> of the field <em class="placeholder">field_trustee_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_trustee_image_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_trustee_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_trustee_image_width' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">width</em> of the field <em class="placeholder">field_trustee_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_valid_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_valid</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_valid_value2' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value2</em> of the field <em class="placeholder">field_valid</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_vote_node_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_vote_node</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_vote_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_vote</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_vote_user_target_id' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">target_id</em> of the field <em class="placeholder">field_vote_user</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_voted_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_voted</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_webform_footer_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_webform_footer</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_webform_footer_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_webform_footer</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:language' => array(
      'description' => 'Node: Language - The code of the selected language of a node (formatted like "en" or "de") or "neutral". See <a href="/admin/config/language">admin/config/language</a> for the codes of your enabled languages',
      'validator' => 'themekey_validator_language',
      'page cache' => 1,
    ),
    'node:nid' => array(
      'description' => 'Node: ID - The id of a node (nid), can be found in the URL of the node, "node/23" or "node/23/edit" (23 = nid)',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'node:promote' => array(
      'description' => 'Node: Promoted - If the node is promoted to the front page. Possible values are "0" for true and "1" for false.',
      'validator' => 'themekey_validator_numeric_boolean',
      'page cache' => 1,
    ),
    'node:sticky' => array(
      'description' => 'Node: Sticky - If the node is set "Sticky at top of lists". Possible values are "0" for true and "1" for false.',
      'validator' => 'themekey_validator_numeric_boolean',
      'page cache' => 1,
    ),
    'node:title' => array(
      'description' => 'Node: Title - The title of the node.',
      'page cache' => 1,
    ),
    'node:type' => array(
      'description' => 'Node: Type - The machine-readable content type of the node. See <a href="/admin/structure/types">admin/structure/types</a> for your content types (use column "Type"). Drupal default types are "page" and "story".',
      'validator' => 'themekey_validator_node_type',
      'page cache' => 1,
    ),
    'node:uid' => array(
      'description' => 'Node: User ID - The node author\'s user id (uid). The user id can be found in the URL of the user\'s profile page, "user/23" or "user/23/edit" (23 = uid). See <a href="/admin/user/user/list">admin/user/user/list</a> for your users.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'node:vid' => array(
      'description' => 'Node: The version id of a node (vid), mostly for internal use within ThemeKey. In most cases it\'s better to use node:nid within your rule chains.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'overlay:mode' => array(
      'description' => 'Overlay: Mode - The current overlay mode used to show the content. Note: If you add such a rule, the mode \'none\' will not work anymore. That means that different modules won\'t be able to turn off overlay manually. That\'s not an issue for drupal core. See <a href="https://api.drupal.org/api/drupal/modules!overlay!overlay.module/function/overlay_set_mode/7">function overlay_set_mode documentation</a> for details.',
      'validator' => 'themekey_validator_overlay_mode',
      'page cache' => 0,
    ),
    'path:node_alias' => array(
      'description' => 'Path: Node alias - The path alias assigned to a node.',
      'validator' => '',
      'page cache' => 1,
    ),
    'system:cookie' => array(
      'description' => 'System: Cookie - Every single cookie and its value if present will be formatted like \'COOKIE_NAME=COOKIE_VALUE\'',
      'page cache' => 0,
    ),
    'system:date' => array(
      'description' => 'System: Date - Current time formatted as Y-m-d (example: 2009-12-24)',
      'validator' => 'themekey_validator_date',
      'page cache' => 2,
    ),
    'system:date_time' => array(
      'description' => 'System: Date Time - Current time formatted as Y-m-d H:i:s (example: 2009-12-24 18:30:10)',
      'validator' => 'themekey_validator_date_time',
      'page cache' => 2,
    ),
    'system:day_of_month' => array(
      'description' => 'System: Day of Month - Current day of the month formatted as 1 - 31',
      'validator' => 'themekey_validator_day_of_month',
      'page cache' => 2,
    ),
    'system:day_of_week' => array(
      'description' => 'System: Day of Week - Current day of the week formatted as three letters \'Mon\' through \'Sun\'',
      'validator' => 'themekey_validator_day_of_week',
      'page cache' => 2,
    ),
    'system:dummy' => array(
      'description' => 'System: Dummy - Dummy property. Value is always \'dummy\'',
      'page cache' => 1,
    ),
    'system:host' => array(
      'description' => 'System: HTTP_HOST - The hostname/domain of the site without http:// or https://, like "www.drupal.org" or "www.biologis.com"',
      'validator' => 'themekey_validator_http_host',
      'page cache' => 1,
    ),
    'system:http_header' => array(
      'description' => 'System: HTTP Header - Every single HTTP header and its value if present will be formatted like \'HEADER_NAME=HEADER_VALUE\'',
      'page cache' => 0,
    ),
    'system:https' => array(
      'description' => 'System: \'HTTPS\' - Set to \'true\' value if the script was queried through the HTTPS protocol, otherwise \'false\'.',
      'validator' => 'themekey_validator_string_boolean',
      'page cache' => 1,
    ),
    'system:month' => array(
      'description' => 'System: Month - Current month formatted as \'Jan\' through \'Dec\'',
      'validator' => 'themekey_validator_month',
      'page cache' => 2,
    ),
    'system:post' => array(
      'description' => 'System: POST - Every single POST value formatted like \'POST_VARIABLE_NAME=POST_VARIABLE_VALUE\'. Example: form_id=node_form. If the POST value is not a scalar but a complex type like array or object, the resulting string is formatted as \'POST_VARIABLE_NAME\' without a value.',
      'page cache' => 0,
    ),
    'system:query_param' => array(
      'description' => 'System: Query Parameter - Every single query parameter other than \'q\' and its value, if present. Note that values are url decoded. Example: \'?q=node&foo=bar&dummy&filter=tid%3A27\' will cause three entries \'foo=bar\', \'dummy\' and \'filter=tid:27\'. For \'q\', see property drupal:get_q.',
      'page cache' => 1,
    ),
    'system:query_string' => array(
      'description' => 'System: Query String - Complete query string except parameter \'q\'. Example: \'?q=node&foo=bar&dummy&filter=tid%3A27\' will result in \'foo=bar&dummy&filter=tid%3A27\'. For \'q\' see property drupal:get_q.',
      'page cache' => 1,
    ),
    'system:random' => array(
      'description' => 'System: Random - A random value that could be \'0\' or 1\'.',
      'validator' => 'themekey_validator_numeric_boolean',
      'page cache' => 0,
    ),
    'system:referer' => array(
      'description' => 'System: \'HTTP_REFERER\' - The address of the page (if any) which referred the user agent to the current page. This is set by the user agent. Not all user agents will set this, and some provide the ability to modify HTTP_REFERER as a feature. In short, it cannot really be trusted.',
      'page cache' => 0,
    ),
    'system:remote_ip' => array(
      'description' => 'System: \'REMOTE_ADDR\' - The IP address from which the user is viewing the current page.',
      'validator' => 'themekey_validator_ip_address',
      'page cache' => 0,
    ),
    'system:server_ip' => array(
      'description' => 'System: \'SERVER_ADDR\' - The IP address of the server under which the current script is executing.',
      'validator' => 'themekey_validator_ip_address',
      'page cache' => 0,
    ),
    'system:server_name' => array(
      'description' => 'System:  \'SERVER_NAME\' - The name of the server host under which the current script is executing. If the script is running on a virtual host, this will be the value defined for that virtual host.',
      'page cache' => 0,
    ),
    'system:server_port' => array(
      'description' => 'System: \'SERVER_PORT\' - The port on the server machine being used by the web server for communication. For default setups, this will be \'80\'; using SSL, for instance, will change this to whatever your defined secure HTTP port is.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 0,
    ),
    'system:session' => array(
      'description' => 'System: Session - Every single session parameter and its value, if a value is present and a simple type (string, integer, boolean). Booleans are represented as integers; \'1\' as TRUE and \'0\' as FALSE.',
      'page cache' => 1,
    ),
    'system:time' => array(
      'description' => 'System: Time - Current time formatted as H:i:s (example: 18:30:10)',
      'validator' => 'themekey_validator_time',
      'page cache' => 2,
    ),
    'system:user_agent' => array(
      'description' => 'System: \'HTTP_USER_AGENT\' - Contents of the User-Agent: header from the current request, if there is one. This is a string denoting the user agent which is accessing the page. A typical example is: Mozilla/4.5 [en] (X11; U; Linux 2.2.9 i586).',
      'page cache' => 0,
    ),
    'system:user_browser' => array(
      'description' => 'System: Browser - Information about user\'s browser. Possible values: \'Blazer [VERSION]\', \'Internet Explorer [VERSION]\', \'Internet Explorer Mobile [VERSION]\', \'Mozilla Firefox [VERSION]\', \'Netscape [VERSION]\', \'Google Chrome [VERSION]\', \'Safari [VERSION]\', \'Galeon [VERSION]\', \'Konqueror [VERSION]\', \'Gecko based\', \'Opera [VERSION]\', \'Lynx [VERSION]\', \'Fennec [VERSION]\', \'Maemo [VERSION]\', \'unknown\'',
      'page cache' => 0,
      'deprecated' => TRUE,
      'deprecated message' => 'Property system:user_browser is deprecated. Consider to use one of the new properties ThemeKey provides in combination with <a href="https://drupal.org/project/browscap">Browscap</a>, <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect API</a>, or <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect</a>.',
    ),
    'system:user_browser_simplified' => array(
      'description' => 'System: Browser - Simplified information about user\'s browser. Possible values: \'Blazer\', \'Internet Explorer\', \'Internet Explorer Mobile\', \'Mozilla Firefox\', \'Netscape\', \'Google Chrome\', \'Safari\', \'Galeon\', \'Konqueror\', \'Gecko based\', \'Opera\', \'Lynx\', \'Fennec\', \'Maemo\', \'unknown\'',
      'page cache' => 0,
      'deprecated' => TRUE,
      'deprecated message' => 'Property system:user_browser_simplified is deprecated. Consider to use one of the new properties ThemeKey provides in combination with <a href="https://drupal.org/project/browscap">Browscap</a>, <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect API</a>, or <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect</a>.',
    ),
    'system:user_os' => array(
      'description' => 'System: Operating System - Information about user\'s browser. Possible values: \'Windows XP\', \'Windows Vista\', \'Windows 98\', \'Windows 2000\', \'Windows 2003 server\', \'Windows NT\',  \'Windows ME\', \'Windows CE\', \'Windows ME\', \'Windows Phone\', \'iPhone\', \'iPad\', \'Mac OS X\', \'Macintosh\', \'Linux\', \'Free BSD\', \'Symbian\', \'webOS\', \'Android\', \'Blackberry\', \'unknown\'',
      'page cache' => 0,
      'deprecated' => TRUE,
      'deprecated message' => 'Property system:user_os is deprecated. Consider to use one of the new properties ThemeKey provides in combination with <a href="https://drupal.org/project/browscap">Browscap</a>, <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect API</a>, or <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect</a>.',
    ),
    'system:user_os_simplified' => array(
      'description' => 'System: Operating System - Simplified information about user\'s browser. Possible values: \'Windows\', \'Windows Phone\', \'iPhone\', \'iPad\', \'Mac OS X\', \'Macintosh\', \'Linux\', \'Free BSD\', \'Symbian\', \'webOS\', \'Android\', \'Blackberry\', \'unknown\'',
      'page cache' => 0,
      'deprecated' => TRUE,
      'deprecated message' => 'Property system:user_os_simplified is deprecated. Consider to use one of the new properties ThemeKey provides in combination with <a href="https://drupal.org/project/browscap">Browscap</a>, <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect API</a>, or <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect</a>.',
    ),
    'taxonomy:name' => array(
      'description' => 'Taxonomy: Name - The term name (name) of a taxonomy term without support for translations.',
      'validator' => '',
      'page cache' => 1,
    ),
    'taxonomy:tid' => array(
      'description' => 'Taxonomy: Term - The term id (tid) of a taxonomy term.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'taxonomy:tid_and_childs' => array(
      'description' => 'Taxonomy: Term and its childs - The term id (tid) of a taxonomy term. If set, all child terms of this term will be used too.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 0,
    ),
    'taxonomy:vid' => array(
      'description' => 'Taxonomy: Vocabulary - The vocabulary id (vid) of a taxonomy vocabulary. See <a href="/admin/structure/taxonomy">admin/structure/taxonomy</a> for your vocabularies.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'user:hostname' => array(
      'description' => 'User: Hostname - The user hostname property which is the IP address of client machine, adjusted for reverse proxy. Text from Drupal bootstrap.inc:
      If Drupal is behind a reverse proxy, we use the X-Forwarded-For header instead of $_SERVER[\'REMOTE_ADDR\'], which would be the IP address of the proxy server, and not the client\'s.',
      'validator' => 'themekey_validator_http_host',
      'page cache' => 0,
    ),
    'user:language' => array(
      'description' => 'User: Language - The language the user has set in the settings of his profile page.
      Format is the language code (for example "en" for English or "de" for German) that can be found on <a href="/admin/config/regional/language/overview">admin/config/regional/language/overview</a>.',
      'validator' => 'themekey_validator_language',
      'page cache' => 1,
    ),
    'user:name' => array(
      'description' => 'User: Name - The username of the user. See <a href="/admin/people/people">admin/people/people</a> for your users.',
      'page cache' => 1,
    ),
    'user:role' => array(
      'description' => 'User: Role - Defined user roles (examples: \'anonymous user\', \'authenticated user\')',
      'validator' => 'themekey_validator_role',
      'page cache' => 1,
    ),
    'user:uid' => array(
      'description' => 'User: ID - The id of the user (uid). The user id can be found in the URL of the users profile page, "user/23" or "user/23/edit" (23 = uid). See <a href="/admin/people/people">admin/people/people</a> for your users.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'views:human_name' => array(
      'description' => 'Views: Human Name - The (human readable) name of a view',
      'page cache' => 1,
    ),
    'views:machine_name' => array(
      'description' => 'Views: Machine Name - The machine name of a view',
      'page cache' => 1,
    ),
    'views:vid' => array(
      'description' => 'Views: VID - The vid of a view (vid)',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
  );
  $export['themekey_attributes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_cron_page_cache';
  $strongarm->value = 0;
  $export['themekey_cron_page_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_maps';
  $strongarm->value = array(
    0 => array(
      'src' => 'system:dummy',
      'dst' => 'locale:language_from_browser',
      'callback' => 'themekey_locale_dummy2language_from_browser',
    ),
    1 => array(
      'src' => 'node:nid',
      'dst' => 'node:changed',
      'callback' => 'themekey_node_nid2changed',
    ),
    2 => array(
      'src' => 'node:nid',
      'dst' => 'node:created',
      'callback' => 'themekey_node_nid2created',
    ),
    3 => array(
      'src' => 'node:changed',
      'dst' => 'node:changed_date_time',
      'callback' => 'themekey_node_timestamp2datetime',
    ),
    4 => array(
      'src' => 'node:created',
      'dst' => 'node:created_date_time',
      'callback' => 'themekey_node_timestamp2datetime',
    ),
    5 => array(
      'src' => 'node:changed',
      'dst' => 'node:changed_date',
      'callback' => 'themekey_node_timestamp2date',
    ),
    6 => array(
      'src' => 'node:created',
      'dst' => 'node:created_date',
      'callback' => 'themekey_node_timestamp2date',
    ),
    7 => array(
      'src' => 'node:nid',
      'dst' => 'node:language',
      'callback' => 'themekey_node_nid2language',
    ),
    8 => array(
      'src' => 'node:nid',
      'dst' => 'node:vid',
      'callback' => 'themekey_node_nid2vid',
    ),
    9 => array(
      'src' => 'node:nid',
      'dst' => 'node:promote',
      'callback' => 'themekey_node_nid2promote',
    ),
    10 => array(
      'src' => 'node:nid',
      'dst' => 'node:sticky',
      'callback' => 'themekey_node_nid2sticky',
    ),
    11 => array(
      'src' => 'node:nid',
      'dst' => 'node:type',
      'callback' => 'themekey_node_nid2type',
    ),
    12 => array(
      'src' => 'node:nid',
      'dst' => 'node:uid',
      'callback' => 'themekey_node_nid2uid',
    ),
    13 => array(
      'src' => 'node:nid',
      'dst' => 'node:title',
      'callback' => 'themekey_node_nid2title',
    ),
    14 => array(
      'src' => 'drupal:get_q',
      'dst' => 'node:type',
      'callback' => 'themekey_node_get_q2type',
    ),
    15 => array(
      'src' => 'node:nid',
      'dst' => 'node:body_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'body',
        'type' => 'text_with_summary',
        'column' => 'value',
        'translatable' => '1',
      ),
    ),
    16 => array(
      'src' => 'node:nid',
      'dst' => 'node:body_summary',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'body',
        'type' => 'text_with_summary',
        'column' => 'summary',
        'translatable' => '1',
      ),
    ),
    17 => array(
      'src' => 'node:nid',
      'dst' => 'node:body_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'body',
        'type' => 'text_with_summary',
        'column' => 'format',
        'translatable' => '1',
      ),
    ),
    18 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_dialogue_annotation_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_dialogue_annotation',
        'type' => 'text_with_summary',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    19 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_dialogue_annotation_summary',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_dialogue_annotation',
        'type' => 'text_with_summary',
        'column' => 'summary',
        'translatable' => '0',
      ),
    ),
    20 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_dialogue_annotation_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_dialogue_annotation',
        'type' => 'text_with_summary',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    21 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_dialogue_documents_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_dialogue_documents',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    22 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_dialogue_documents_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_dialogue_documents',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    23 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_dialogue_documents_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_dialogue_documents',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    24 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_dialogue_id_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_dialogue_id',
        'type' => 'number_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    25 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_dialogue_message_id_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_dialogue_message_id',
        'type' => 'number_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    26 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_dialogue_message_type_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_dialogue_message_type',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    27 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_dialogue_recipient_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_dialogue_recipient',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    28 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_dialogue_sender_name_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_dialogue_sender_name',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    29 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_dialogue_sender_name_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_dialogue_sender_name',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    30 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_trustee_image_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_trustee_image',
        'type' => 'image',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    31 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_trustee_image_alt',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_trustee_image',
        'type' => 'image',
        'column' => 'alt',
        'translatable' => '0',
      ),
    ),
    32 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_trustee_image_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_trustee_image',
        'type' => 'image',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    33 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_trustee_image_width',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_trustee_image',
        'type' => 'image',
        'column' => 'width',
        'translatable' => '0',
      ),
    ),
    34 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_trustee_image_height',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_trustee_image',
        'type' => 'image',
        'column' => 'height',
        'translatable' => '0',
      ),
    ),
    35 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_teaser_image_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_teaser_image',
        'type' => 'image',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    36 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_teaser_image_alt',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_teaser_image',
        'type' => 'image',
        'column' => 'alt',
        'translatable' => '0',
      ),
    ),
    37 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_teaser_image_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_teaser_image',
        'type' => 'image',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    38 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_teaser_image_width',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_teaser_image',
        'type' => 'image',
        'column' => 'width',
        'translatable' => '0',
      ),
    ),
    39 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_teaser_image_height',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_teaser_image',
        'type' => 'image',
        'column' => 'height',
        'translatable' => '0',
      ),
    ),
    40 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_article_attachment_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_article_attachment',
        'type' => 'file',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    41 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_article_attachment_display',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_article_attachment',
        'type' => 'file',
        'column' => 'display',
        'translatable' => '0',
      ),
    ),
    42 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_article_attachment_description',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_article_attachment',
        'type' => 'file',
        'column' => 'description',
        'translatable' => '0',
      ),
    ),
    43 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_article_date_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_article_date',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    44 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_article_link_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_article_link',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    45 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_article_link_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_article_link',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    46 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_article_link_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_article_link',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    47 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_article_publisher_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_article_publisher',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    48 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_article_publisher_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_article_publisher',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    49 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_article_video_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_article_video',
        'type' => 'media',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    50 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_article_video_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_article_video',
        'type' => 'media',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    51 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_article_video_data',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_article_video',
        'type' => 'media',
        'column' => 'data',
        'translatable' => '0',
      ),
    ),
    52 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_release_body_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_release_body',
        'type' => 'text_with_summary',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    53 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_release_body_summary',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_release_body',
        'type' => 'text_with_summary',
        'column' => 'summary',
        'translatable' => '0',
      ),
    ),
    54 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_release_body_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_release_body',
        'type' => 'text_with_summary',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    55 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_release_date_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_release_date',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    56 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_article_sound_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_article_sound',
        'type' => 'media',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    57 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_article_sound_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_article_sound',
        'type' => 'media',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    58 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_press_article_sound_data',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_press_article_sound',
        'type' => 'media',
        'column' => 'data',
        'translatable' => '0',
      ),
    ),
    59 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_parliament_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_parliament',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    60 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_blogpost_blogtags_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_blogpost_blogtags',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    61 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_dialogue_tags_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_dialogue_tags',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    62 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_dialogue_topic_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_dialogue_topic',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    63 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_blogpost_categories_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_blogpost_categories',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    64 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_election_programme_open_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_election_programme_open',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    65 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_election_programme_open_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_election_programme_open',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    66 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_election_programme_open_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_election_programme_open',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    67 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_pdf_download_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_pdf_download',
        'type' => 'media',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    68 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_pdf_download_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_pdf_download',
        'type' => 'media',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    69 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_pdf_download_data',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_pdf_download',
        'type' => 'media',
        'column' => 'data',
        'translatable' => '0',
      ),
    ),
    70 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_taxonomy_party_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_taxonomy_party',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    71 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_calendar_entry_address_country',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_calendar_entry_address',
        'type' => 'addressfield',
        'column' => 'country',
        'translatable' => '0',
      ),
    ),
    72 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_calendar_entry_address_administrative_area',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_calendar_entry_address',
        'type' => 'addressfield',
        'column' => 'administrative_area',
        'translatable' => '0',
      ),
    ),
    73 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_calendar_entry_address_sub_administrative_area',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_calendar_entry_address',
        'type' => 'addressfield',
        'column' => 'sub_administrative_area',
        'translatable' => '0',
      ),
    ),
    74 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_calendar_entry_address_locality',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_calendar_entry_address',
        'type' => 'addressfield',
        'column' => 'locality',
        'translatable' => '0',
      ),
    ),
    75 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_calendar_entry_address_dependent_locality',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_calendar_entry_address',
        'type' => 'addressfield',
        'column' => 'dependent_locality',
        'translatable' => '0',
      ),
    ),
    76 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_calendar_entry_address_postal_code',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_calendar_entry_address',
        'type' => 'addressfield',
        'column' => 'postal_code',
        'translatable' => '0',
      ),
    ),
    77 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_calendar_entry_address_thoroughfare',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_calendar_entry_address',
        'type' => 'addressfield',
        'column' => 'thoroughfare',
        'translatable' => '0',
      ),
    ),
    78 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_calendar_entry_address_premise',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_calendar_entry_address',
        'type' => 'addressfield',
        'column' => 'premise',
        'translatable' => '0',
      ),
    ),
    79 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_calendar_entry_address_sub_premise',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_calendar_entry_address',
        'type' => 'addressfield',
        'column' => 'sub_premise',
        'translatable' => '0',
      ),
    ),
    80 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_calendar_entry_address_organisation_name',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_calendar_entry_address',
        'type' => 'addressfield',
        'column' => 'organisation_name',
        'translatable' => '0',
      ),
    ),
    81 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_calendar_entry_address_name_line',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_calendar_entry_address',
        'type' => 'addressfield',
        'column' => 'name_line',
        'translatable' => '0',
      ),
    ),
    82 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_calendar_entry_address_first_name',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_calendar_entry_address',
        'type' => 'addressfield',
        'column' => 'first_name',
        'translatable' => '0',
      ),
    ),
    83 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_calendar_entry_address_last_name',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_calendar_entry_address',
        'type' => 'addressfield',
        'column' => 'last_name',
        'translatable' => '0',
      ),
    ),
    84 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_calendar_entry_address_data',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_calendar_entry_address',
        'type' => 'addressfield',
        'column' => 'data',
        'translatable' => '0',
      ),
    ),
    85 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_calendar_entry_date_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_calendar_entry_date',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    86 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_slider_teaserbody_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_slider_teaserbody',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    87 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_slider_teaserbody_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_slider_teaserbody',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    88 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_slider_url_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_slider_url',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    89 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_slider_url_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_slider_url',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    90 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_slider_url_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_slider_url',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    91 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_content_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_content',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    92 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_content_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_content',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    93 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_recipient_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_recipient',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    94 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_recipient_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_recipient',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    95 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_required_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_required',
        'type' => 'number_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    96 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_signings_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_signings',
        'type' => 'number_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    97 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_announce_background_image_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_announce_background_image',
        'type' => 'image',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    98 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_announce_background_image_alt',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_announce_background_image',
        'type' => 'image',
        'column' => 'alt',
        'translatable' => '0',
      ),
    ),
    99 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_announce_background_image_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_announce_background_image',
        'type' => 'image',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    100 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_announce_background_image_width',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_announce_background_image',
        'type' => 'image',
        'column' => 'width',
        'translatable' => '0',
      ),
    ),
    101 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_announce_background_image_height',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_announce_background_image',
        'type' => 'image',
        'column' => 'height',
        'translatable' => '0',
      ),
    ),
    102 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_announce_body_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_announce_body',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    103 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_announce_body_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_announce_body',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    104 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_announce_link_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_announce_link',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    105 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_announce_link_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_announce_link',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    106 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_announce_link_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_announce_link',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    107 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_announce_tab_title_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_announce_tab_title',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    108 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_announce_tab_title_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_announce_tab_title',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    109 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_pw_kc_thesis_reference_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_pw_kc_thesis_reference',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    110 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_pw_kc_user_reference_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_pw_kc_user_reference',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    111 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_pw_kc_vote_reference_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_pw_kc_vote_reference',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    112 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_webform_footer_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_webform_footer',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    113 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_webform_footer_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_webform_footer',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    114 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_share_sum_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_share_sum',
        'type' => 'number_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    115 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_dialogue_before_election_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_dialogue_before_election',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    116 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_committee_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_committee',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    117 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_job_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_job',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    118 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_politician_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_politician',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    119 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_valid_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_valid',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    120 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_valid_value2',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_valid',
        'type' => 'datetime',
        'column' => 'value2',
        'translatable' => '0',
      ),
    ),
    121 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_duration_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_duration',
        'type' => 'hms_field',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    122 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_donation_amount_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_donation_amount',
        'type' => 'number_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    123 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_donation_progress_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_donation_progress',
        'type' => 'computed',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    124 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_donation_required_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_donation_required',
        'type' => 'number_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    125 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_end_date_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_end_date',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    126 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_external_url_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_external_url',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    127 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_external_url_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_external_url',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    128 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_external_url_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_external_url',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    129 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_partner_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_partner',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    130 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_partner_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_partner',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    131 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_status_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_status',
        'type' => 'list_text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    132 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_text_donation_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_text_donation',
        'type' => 'text_with_summary',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    133 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_text_donation_summary',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_text_donation',
        'type' => 'text_with_summary',
        'column' => 'summary',
        'translatable' => '0',
      ),
    ),
    134 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_text_donation_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_text_donation',
        'type' => 'text_with_summary',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    135 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_text_parliament_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_text_parliament',
        'type' => 'text_with_summary',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    136 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_text_parliament_summary',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_text_parliament',
        'type' => 'text_with_summary',
        'column' => 'summary',
        'translatable' => '0',
      ),
    ),
    137 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_text_parliament_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_text_parliament',
        'type' => 'text_with_summary',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    138 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_vote_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_vote',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    139 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_vote_node_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_vote_node',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    140 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_vote_user_target_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_vote_user',
        'type' => 'entityreference',
        'column' => 'target_id',
        'translatable' => '0',
      ),
    ),
    141 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_starter_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_starter',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    142 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_starter_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_starter',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    143 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_text_passed_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_text_passed',
        'type' => 'text_with_summary',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    144 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_text_passed_summary',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_text_passed',
        'type' => 'text_with_summary',
        'column' => 'summary',
        'translatable' => '0',
      ),
    ),
    145 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_text_passed_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_text_passed',
        'type' => 'text_with_summary',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    146 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_poll_date_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_poll_date',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    147 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_poll_external_url_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_poll_external_url',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    148 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_poll_external_url_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_poll_external_url',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    149 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_voted_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_voted',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    150 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_welcome_message_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_welcome_message',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    151 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_petition_welcome_message_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_petition_welcome_message',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    152 => array(
      'src' => 'node:nid',
      'dst' => 'node:drulenium_version_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'drulenium_version',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    153 => array(
      'src' => 'node:nid',
      'dst' => 'node:drulenium_version_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'drulenium_version',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    154 => array(
      'src' => 'node:nid',
      'dst' => 'node:drulenium_revision_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'drulenium_revision',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    155 => array(
      'src' => 'node:nid',
      'dst' => 'node:drulenium_revision_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'drulenium_revision',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    156 => array(
      'src' => 'node:nid',
      'dst' => 'node:drulenium_result_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'drulenium_result',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    157 => array(
      'src' => 'node:nid',
      'dst' => 'node:drulenium_result_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'drulenium_result',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    158 => array(
      'src' => 'node:nid',
      'dst' => 'node:drulenium_total_time_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'drulenium_total_time',
        'type' => 'number_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    159 => array(
      'src' => 'node:nid',
      'dst' => 'node:drulenium_num_test_passes_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'drulenium_num_test_passes',
        'type' => 'number_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    160 => array(
      'src' => 'node:nid',
      'dst' => 'node:drulenium_num_test_failures_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'drulenium_num_test_failures',
        'type' => 'number_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    161 => array(
      'src' => 'node:nid',
      'dst' => 'node:drulenium_num_command_passes_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'drulenium_num_command_passes',
        'type' => 'number_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    162 => array(
      'src' => 'node:nid',
      'dst' => 'node:drulenium_num_command_failures_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'drulenium_num_command_failures',
        'type' => 'number_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    163 => array(
      'src' => 'node:nid',
      'dst' => 'node:drulenium_num_command_errors_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'drulenium_num_command_errors',
        'type' => 'number_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    164 => array(
      'src' => 'node:nid',
      'dst' => 'node:drulenium_num_test_total_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'drulenium_num_test_total',
        'type' => 'number_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    165 => array(
      'src' => 'node:nid',
      'dst' => 'node:drulenium_suite_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'drulenium_suite',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    166 => array(
      'src' => 'node:nid',
      'dst' => 'node:drulenium_suite_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'drulenium_suite',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    167 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_blockreference_moddelta',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_blockreference',
        'type' => 'blockreference',
        'column' => 'moddelta',
        'translatable' => '0',
      ),
    ),
    168 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_testimonial_fullname_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_testimonial_fullname',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    169 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_testimonial_fullname_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_testimonial_fullname',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    170 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_testimonial_portrait_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_testimonial_portrait',
        'type' => 'image',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    171 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_testimonial_portrait_alt',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_testimonial_portrait',
        'type' => 'image',
        'column' => 'alt',
        'translatable' => '0',
      ),
    ),
    172 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_testimonial_portrait_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_testimonial_portrait',
        'type' => 'image',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    173 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_testimonial_portrait_width',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_testimonial_portrait',
        'type' => 'image',
        'column' => 'width',
        'translatable' => '0',
      ),
    ),
    174 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_testimonial_portrait_height',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_testimonial_portrait',
        'type' => 'image',
        'column' => 'height',
        'translatable' => '0',
      ),
    ),
    175 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_testimonial_quote_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_testimonial_quote',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    176 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_testimonial_quote_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_testimonial_quote',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    177 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_testimonial_month_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_testimonial_month',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    178 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_link_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_link',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    179 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_link_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_link',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    180 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_link_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_link',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    181 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sectors_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sectors',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    182 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_address_country',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_address',
        'type' => 'addressfield',
        'column' => 'country',
        'translatable' => '0',
      ),
    ),
    183 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_address_administrative_area',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_address',
        'type' => 'addressfield',
        'column' => 'administrative_area',
        'translatable' => '0',
      ),
    ),
    184 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_address_sub_administrative_area',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_address',
        'type' => 'addressfield',
        'column' => 'sub_administrative_area',
        'translatable' => '0',
      ),
    ),
    185 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_address_locality',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_address',
        'type' => 'addressfield',
        'column' => 'locality',
        'translatable' => '0',
      ),
    ),
    186 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_address_dependent_locality',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_address',
        'type' => 'addressfield',
        'column' => 'dependent_locality',
        'translatable' => '0',
      ),
    ),
    187 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_address_postal_code',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_address',
        'type' => 'addressfield',
        'column' => 'postal_code',
        'translatable' => '0',
      ),
    ),
    188 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_address_thoroughfare',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_address',
        'type' => 'addressfield',
        'column' => 'thoroughfare',
        'translatable' => '0',
      ),
    ),
    189 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_address_premise',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_address',
        'type' => 'addressfield',
        'column' => 'premise',
        'translatable' => '0',
      ),
    ),
    190 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_address_sub_premise',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_address',
        'type' => 'addressfield',
        'column' => 'sub_premise',
        'translatable' => '0',
      ),
    ),
    191 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_address_organisation_name',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_address',
        'type' => 'addressfield',
        'column' => 'organisation_name',
        'translatable' => '0',
      ),
    ),
    192 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_address_name_line',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_address',
        'type' => 'addressfield',
        'column' => 'name_line',
        'translatable' => '0',
      ),
    ),
    193 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_address_first_name',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_address',
        'type' => 'addressfield',
        'column' => 'first_name',
        'translatable' => '0',
      ),
    ),
    194 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_address_last_name',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_address',
        'type' => 'addressfield',
        'column' => 'last_name',
        'translatable' => '0',
      ),
    ),
    195 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_address_data',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_address',
        'type' => 'addressfield',
        'column' => 'data',
        'translatable' => '0',
      ),
    ),
    196 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_classification_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_classification',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    197 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_classification_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_classification',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    198 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_date_end_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_date_end',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    199 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_date_start_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_date_start',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    200 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_income_interval_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_income_interval',
        'type' => 'list_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    201 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_income_max_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_income_max',
        'type' => 'number_float',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    202 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_income_max_total_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_income_max_total',
        'type' => 'number_float',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    203 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_income_min_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_income_min',
        'type' => 'number_float',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    204 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_income_min_total_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_income_min_total',
        'type' => 'number_float',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    205 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_sidejob_organization_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_sidejob_organization',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    206 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_deviant_vote_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_deviant_vote',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    207 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_newsletter_paragraph_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_newsletter_paragraph',
        'type' => 'paragraphs',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    208 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_newsletter_paragraph_revision_id',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_newsletter_paragraph',
        'type' => 'paragraphs',
        'column' => 'revision_id',
        'translatable' => '0',
      ),
    ),
    209 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_search_sort_date_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_search_sort_date',
        'type' => 'datetime',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    210 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_piwik_campaign_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_piwik_campaign',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    211 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_piwik_campaign_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_piwik_campaign',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    212 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_show_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_show',
        'type' => 'list_boolean',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    213 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_kc_thesis_number_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_kc_thesis_number',
        'type' => 'number_integer',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    214 => array(
      'src' => 'profile:uid',
      'dst' => 'themekey_ui:author_triggers_theme',
      'callback' => 'themekey_user_profile2theme',
    ),
    215 => array(
      'src' => 'comment:cid',
      'dst' => 'node:nid',
      'callback' => 'themekey_comment_cid2nid',
    ),
    216 => array(
      'src' => 'drupal:get_q',
      'dst' => 'views:vid',
      'callback' => 'themekey_views_getq2vid',
    ),
    217 => array(
      'src' => 'drupal:get_q',
      'dst' => 'views:machine_name',
      'callback' => 'themekey_views_getq2machine_name',
    ),
    218 => array(
      'src' => 'drupal:get_q',
      'dst' => 'views:human_name',
      'callback' => 'themekey_views_getq2human_name',
    ),
    219 => array(
      'src' => 'system:dummy',
      'dst' => 'system:query_param',
      'callback' => 'themekey_dummy2query_param',
    ),
    220 => array(
      'src' => 'system:dummy',
      'dst' => 'system:cookie',
      'callback' => 'themekey_dummy2cookie',
    ),
    221 => array(
      'src' => 'system:dummy',
      'dst' => 'system:http_header',
      'callback' => 'themekey_dummy2http_header',
    ),
    222 => array(
      'src' => 'system:dummy',
      'dst' => 'system:post',
      'callback' => 'themekey_dummy2post',
    ),
    223 => array(
      'src' => 'system:dummy',
      'dst' => 'system:query_string',
      'callback' => 'themekey_dummy2query_string',
    ),
    224 => array(
      'src' => 'system:dummy',
      'dst' => 'system:date_time',
      'callback' => 'themekey_dummy2date_time',
    ),
    225 => array(
      'src' => 'system:dummy',
      'dst' => 'system:date',
      'callback' => 'themekey_dummy2date',
    ),
    226 => array(
      'src' => 'system:dummy',
      'dst' => 'system:month',
      'callback' => 'themekey_dummy2month',
    ),
    227 => array(
      'src' => 'system:dummy',
      'dst' => 'system:time',
      'callback' => 'themekey_dummy2time',
    ),
    228 => array(
      'src' => 'system:dummy',
      'dst' => 'system:day_of_week',
      'callback' => 'themekey_dummy2day_of_week',
    ),
    229 => array(
      'src' => 'system:dummy',
      'dst' => 'system:day_of_month',
      'callback' => 'themekey_dummy2day_of_month',
    ),
    230 => array(
      'src' => 'system:dummy',
      'dst' => 'system:user_browser',
      'callback' => 'themekey_dummy2user_browser',
    ),
    231 => array(
      'src' => 'system:dummy',
      'dst' => 'system:user_os',
      'callback' => 'themekey_dummy2user_os',
    ),
    232 => array(
      'src' => 'system:user_browser',
      'dst' => 'system:user_browser_simplified',
      'callback' => 'themekey_user_browser2user_browser_simplified',
    ),
    233 => array(
      'src' => 'system:user_os',
      'dst' => 'system:user_os_simplified',
      'callback' => 'themekey_user_os2user_os_simplified',
    ),
    234 => array(
      'src' => 'system:dummy',
      'dst' => 'system:session',
      'callback' => 'themekey_dummy2session',
    ),
    235 => array(
      'src' => 'node:nid',
      'dst' => 'path:node_alias',
      'callback' => 'themekey_path_nid2alias',
    ),
    236 => array(
      'src' => 'taxonomy:tid',
      'dst' => 'taxonomy:vid',
      'callback' => 'themekey_taxonomy_tid2vid',
    ),
    237 => array(
      'src' => 'taxonomy:tid',
      'dst' => 'taxonomy:tid_and_childs',
      'callback' => 'themekey_taxonomy_tid2tid_and_parents',
    ),
    238 => array(
      'src' => 'node:nid',
      'dst' => 'taxonomy:tid',
      'callback' => 'themekey_taxonomy_nid2tid',
    ),
    239 => array(
      'src' => 'taxonomy:tid',
      'dst' => 'taxonomy:name',
      'callback' => 'themekey_taxonomy_tid2name',
    ),
    240 => array(
      'src' => 'system:dummy',
      'dst' => 'overlay:mode',
      'callback' => 'themekey_overlay_dummy2mode',
    ),
  );
  $export['themekey_maps'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_modules';
  $strongarm->value = array(
    0 => 'locale',
    1 => 'node',
    2 => 'user',
    3 => 'comment',
    4 => 'views',
    5 => 'system',
    6 => 'path',
    7 => 'taxonomy',
    8 => 'overlay',
    9 => 'admin_menu',
  );
  $export['themekey_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_paths';
  $strongarm->value = array(
    0 => array(
      'path' => 'node/#/revisions/#/view',
      'callbacks' => array(),
      'wildcards' => array(
        1 => 'node:nid',
        3 => 'node:vid',
      ),
      'weight' => 10,
      'fit' => 21,
    ),
    1 => array(
      'path' => 'comment/reply/#/#',
      'callbacks' => array(),
      'wildcards' => array(
        2 => 'node:nid',
        3 => 'comment:cid',
      ),
      'weight' => 3,
      'fit' => 12,
    ),
    2 => array(
      'path' => 'comment/reply/#',
      'callbacks' => array(),
      'wildcards' => array(
        2 => 'node:nid',
      ),
      'weight' => 1,
      'fit' => 6,
    ),
    3 => array(
      'path' => 'taxonomy/term/#',
      'callbacks' => array(),
      'wildcards' => array(
        2 => 'taxonomy:tid',
      ),
      'weight' => 1,
      'fit' => 6,
    ),
    4 => array(
      'path' => 'user/#/edit',
      'callbacks' => array(),
      'wildcards' => array(
        1 => 'profile:uid',
      ),
      'weight' => 2,
      'fit' => 5,
    ),
    5 => array(
      'path' => 'comment/#/edit',
      'callbacks' => array(),
      'wildcards' => array(
        1 => 'comment:cid',
      ),
      'weight' => 2,
      'fit' => 5,
    ),
    6 => array(
      'path' => 'comment/#/delete',
      'callbacks' => array(),
      'wildcards' => array(
        1 => 'comment:cid',
      ),
      'weight' => 2,
      'fit' => 5,
    ),
    7 => array(
      'path' => 'node/#',
      'callbacks' => array(),
      'wildcards' => array(
        1 => 'node:nid',
      ),
      'weight' => 1,
      'fit' => 2,
    ),
    8 => array(
      'path' => 'user/#',
      'callbacks' => array(),
      'wildcards' => array(
        1 => 'profile:uid',
      ),
      'weight' => 1,
      'fit' => 2,
    ),
    9 => array(
      'path' => 'comment/#',
      'callbacks' => array(),
      'wildcards' => array(
        1 => 'comment:cid',
      ),
      'weight' => 1,
      'fit' => 2,
    ),
  );
  $export['themekey_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_path_case_sensitive';
  $strongarm->value = 0;
  $export['themekey_path_case_sensitive'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_properties';
  $strongarm->value = array(
    'comment:cid' => 'comment:cid',
    'drupal:base_path' => 'drupal:base_path',
    'drupal:get_q' => 'drupal:get_q',
    'drupal:is_front_page' => 'drupal:is_front_page',
    'drupal:path' => 'drupal:path',
    'drupal:path:wildcard' => 'drupal:path:wildcard',
    'drupal:path_is_admin' => 'drupal:path_is_admin',
    'locale:language' => 'locale:language',
    'locale:language_content' => 'locale:language_content',
    'locale:language_from_browser' => 'locale:language_from_browser',
    'node:body_format' => 'node:body_format',
    'node:body_summary' => 'node:body_summary',
    'node:body_value' => 'node:body_value',
    'node:changed' => 'node:changed',
    'node:changed_date' => 'node:changed_date',
    'node:changed_date_time' => 'node:changed_date_time',
    'node:created' => 'node:created',
    'node:created_date' => 'node:created_date',
    'node:created_date_time' => 'node:created_date_time',
    'node:drulenium_num_command_errors_value' => 'node:drulenium_num_command_errors_value',
    'node:drulenium_num_command_failures_value' => 'node:drulenium_num_command_failures_value',
    'node:drulenium_num_command_passes_value' => 'node:drulenium_num_command_passes_value',
    'node:drulenium_num_test_failures_value' => 'node:drulenium_num_test_failures_value',
    'node:drulenium_num_test_passes_value' => 'node:drulenium_num_test_passes_value',
    'node:drulenium_num_test_total_value' => 'node:drulenium_num_test_total_value',
    'node:drulenium_result_format' => 'node:drulenium_result_format',
    'node:drulenium_result_value' => 'node:drulenium_result_value',
    'node:drulenium_revision_format' => 'node:drulenium_revision_format',
    'node:drulenium_revision_value' => 'node:drulenium_revision_value',
    'node:drulenium_suite_format' => 'node:drulenium_suite_format',
    'node:drulenium_suite_value' => 'node:drulenium_suite_value',
    'node:drulenium_total_time_value' => 'node:drulenium_total_time_value',
    'node:drulenium_version_format' => 'node:drulenium_version_format',
    'node:drulenium_version_value' => 'node:drulenium_version_value',
    'node:field_announce_background_image_alt' => 'node:field_announce_background_image_alt',
    'node:field_announce_background_image_fid' => 'node:field_announce_background_image_fid',
    'node:field_announce_background_image_height' => 'node:field_announce_background_image_height',
    'node:field_announce_background_image_title' => 'node:field_announce_background_image_title',
    'node:field_announce_background_image_width' => 'node:field_announce_background_image_width',
    'node:field_announce_body_format' => 'node:field_announce_body_format',
    'node:field_announce_body_value' => 'node:field_announce_body_value',
    'node:field_announce_link_attributes' => 'node:field_announce_link_attributes',
    'node:field_announce_link_title' => 'node:field_announce_link_title',
    'node:field_announce_link_url' => 'node:field_announce_link_url',
    'node:field_announce_tab_title_format' => 'node:field_announce_tab_title_format',
    'node:field_announce_tab_title_value' => 'node:field_announce_tab_title_value',
    'node:field_blockreference_moddelta' => 'node:field_blockreference_moddelta',
    'node:field_blogpost_blogtags_tid' => 'node:field_blogpost_blogtags_tid',
    'node:field_blogpost_categories_tid' => 'node:field_blogpost_categories_tid',
    'node:field_calendar_entry_address_administrative_area' => 'node:field_calendar_entry_address_administrative_area',
    'node:field_calendar_entry_address_country' => 'node:field_calendar_entry_address_country',
    'node:field_calendar_entry_address_data' => 'node:field_calendar_entry_address_data',
    'node:field_calendar_entry_address_dependent_locality' => 'node:field_calendar_entry_address_dependent_locality',
    'node:field_calendar_entry_address_first_name' => 'node:field_calendar_entry_address_first_name',
    'node:field_calendar_entry_address_last_name' => 'node:field_calendar_entry_address_last_name',
    'node:field_calendar_entry_address_locality' => 'node:field_calendar_entry_address_locality',
    'node:field_calendar_entry_address_name_line' => 'node:field_calendar_entry_address_name_line',
    'node:field_calendar_entry_address_organisation_name' => 'node:field_calendar_entry_address_organisation_name',
    'node:field_calendar_entry_address_postal_code' => 'node:field_calendar_entry_address_postal_code',
    'node:field_calendar_entry_address_premise' => 'node:field_calendar_entry_address_premise',
    'node:field_calendar_entry_address_sub_administrative_area' => 'node:field_calendar_entry_address_sub_administrative_area',
    'node:field_calendar_entry_address_sub_premise' => 'node:field_calendar_entry_address_sub_premise',
    'node:field_calendar_entry_address_thoroughfare' => 'node:field_calendar_entry_address_thoroughfare',
    'node:field_calendar_entry_date_value' => 'node:field_calendar_entry_date_value',
    'node:field_committee_tid' => 'node:field_committee_tid',
    'node:field_deviant_vote_value' => 'node:field_deviant_vote_value',
    'node:field_dialogue_annotation_format' => 'node:field_dialogue_annotation_format',
    'node:field_dialogue_annotation_summary' => 'node:field_dialogue_annotation_summary',
    'node:field_dialogue_annotation_value' => 'node:field_dialogue_annotation_value',
    'node:field_dialogue_before_election_value' => 'node:field_dialogue_before_election_value',
    'node:field_dialogue_documents_attributes' => 'node:field_dialogue_documents_attributes',
    'node:field_dialogue_documents_title' => 'node:field_dialogue_documents_title',
    'node:field_dialogue_documents_url' => 'node:field_dialogue_documents_url',
    'node:field_dialogue_id_value' => 'node:field_dialogue_id_value',
    'node:field_dialogue_message_id_value' => 'node:field_dialogue_message_id_value',
    'node:field_dialogue_message_type_value' => 'node:field_dialogue_message_type_value',
    'node:field_dialogue_recipient_target_id' => 'node:field_dialogue_recipient_target_id',
    'node:field_dialogue_sender_name_format' => 'node:field_dialogue_sender_name_format',
    'node:field_dialogue_sender_name_value' => 'node:field_dialogue_sender_name_value',
    'node:field_dialogue_tags_tid' => 'node:field_dialogue_tags_tid',
    'node:field_dialogue_topic_tid' => 'node:field_dialogue_topic_tid',
    'node:field_donation_amount_value' => 'node:field_donation_amount_value',
    'node:field_donation_progress_value' => 'node:field_donation_progress_value',
    'node:field_donation_required_value' => 'node:field_donation_required_value',
    'node:field_duration_value' => 'node:field_duration_value',
    'node:field_election_programme_open_attributes' => 'node:field_election_programme_open_attributes',
    'node:field_election_programme_open_title' => 'node:field_election_programme_open_title',
    'node:field_election_programme_open_url' => 'node:field_election_programme_open_url',
    'node:field_job_tid' => 'node:field_job_tid',
    'node:field_kc_thesis_number_value' => 'node:field_kc_thesis_number_value',
    'node:field_link_attributes' => 'node:field_link_attributes',
    'node:field_link_title' => 'node:field_link_title',
    'node:field_link_url' => 'node:field_link_url',
    'node:field_newsletter_paragraph_revision_id' => 'node:field_newsletter_paragraph_revision_id',
    'node:field_newsletter_paragraph_value' => 'node:field_newsletter_paragraph_value',
    'node:field_parliament_tid' => 'node:field_parliament_tid',
    'node:field_pdf_download_data' => 'node:field_pdf_download_data',
    'node:field_pdf_download_fid' => 'node:field_pdf_download_fid',
    'node:field_pdf_download_title' => 'node:field_pdf_download_title',
    'node:field_petition_content_format' => 'node:field_petition_content_format',
    'node:field_petition_content_value' => 'node:field_petition_content_value',
    'node:field_petition_end_date_value' => 'node:field_petition_end_date_value',
    'node:field_petition_external_url_attributes' => 'node:field_petition_external_url_attributes',
    'node:field_petition_external_url_title' => 'node:field_petition_external_url_title',
    'node:field_petition_external_url_url' => 'node:field_petition_external_url_url',
    'node:field_petition_partner_format' => 'node:field_petition_partner_format',
    'node:field_petition_partner_value' => 'node:field_petition_partner_value',
    'node:field_petition_recipient_format' => 'node:field_petition_recipient_format',
    'node:field_petition_recipient_value' => 'node:field_petition_recipient_value',
    'node:field_petition_required_value' => 'node:field_petition_required_value',
    'node:field_petition_signings_value' => 'node:field_petition_signings_value',
    'node:field_petition_starter_format' => 'node:field_petition_starter_format',
    'node:field_petition_starter_value' => 'node:field_petition_starter_value',
    'node:field_petition_status_value' => 'node:field_petition_status_value',
    'node:field_petition_text_donation_format' => 'node:field_petition_text_donation_format',
    'node:field_petition_text_donation_summary' => 'node:field_petition_text_donation_summary',
    'node:field_petition_text_donation_value' => 'node:field_petition_text_donation_value',
    'node:field_petition_text_parliament_format' => 'node:field_petition_text_parliament_format',
    'node:field_petition_text_parliament_summary' => 'node:field_petition_text_parliament_summary',
    'node:field_petition_text_parliament_value' => 'node:field_petition_text_parliament_value',
    'node:field_petition_text_passed_format' => 'node:field_petition_text_passed_format',
    'node:field_petition_text_passed_summary' => 'node:field_petition_text_passed_summary',
    'node:field_petition_text_passed_value' => 'node:field_petition_text_passed_value',
    'node:field_petition_welcome_message_format' => 'node:field_petition_welcome_message_format',
    'node:field_petition_welcome_message_value' => 'node:field_petition_welcome_message_value',
    'node:field_piwik_campaign_format' => 'node:field_piwik_campaign_format',
    'node:field_piwik_campaign_value' => 'node:field_piwik_campaign_value',
    'node:field_politician_target_id' => 'node:field_politician_target_id',
    'node:field_poll_date_value' => 'node:field_poll_date_value',
    'node:field_poll_external_url_format' => 'node:field_poll_external_url_format',
    'node:field_poll_external_url_value' => 'node:field_poll_external_url_value',
    'node:field_press_article_attachment_description' => 'node:field_press_article_attachment_description',
    'node:field_press_article_attachment_display' => 'node:field_press_article_attachment_display',
    'node:field_press_article_attachment_fid' => 'node:field_press_article_attachment_fid',
    'node:field_press_article_date_value' => 'node:field_press_article_date_value',
    'node:field_press_article_link_attributes' => 'node:field_press_article_link_attributes',
    'node:field_press_article_link_title' => 'node:field_press_article_link_title',
    'node:field_press_article_link_url' => 'node:field_press_article_link_url',
    'node:field_press_article_publisher_format' => 'node:field_press_article_publisher_format',
    'node:field_press_article_publisher_value' => 'node:field_press_article_publisher_value',
    'node:field_press_article_sound_data' => 'node:field_press_article_sound_data',
    'node:field_press_article_sound_fid' => 'node:field_press_article_sound_fid',
    'node:field_press_article_sound_title' => 'node:field_press_article_sound_title',
    'node:field_press_article_video_data' => 'node:field_press_article_video_data',
    'node:field_press_article_video_fid' => 'node:field_press_article_video_fid',
    'node:field_press_article_video_title' => 'node:field_press_article_video_title',
    'node:field_press_release_body_format' => 'node:field_press_release_body_format',
    'node:field_press_release_body_summary' => 'node:field_press_release_body_summary',
    'node:field_press_release_body_value' => 'node:field_press_release_body_value',
    'node:field_press_release_date_value' => 'node:field_press_release_date_value',
    'node:field_pw_kc_thesis_reference_target_id' => 'node:field_pw_kc_thesis_reference_target_id',
    'node:field_pw_kc_user_reference_target_id' => 'node:field_pw_kc_user_reference_target_id',
    'node:field_pw_kc_vote_reference_tid' => 'node:field_pw_kc_vote_reference_tid',
    'node:field_search_sort_date_value' => 'node:field_search_sort_date_value',
    'node:field_sectors_tid' => 'node:field_sectors_tid',
    'node:field_share_sum_value' => 'node:field_share_sum_value',
    'node:field_show_value' => 'node:field_show_value',
    'node:field_sidejob_address_administrative_area' => 'node:field_sidejob_address_administrative_area',
    'node:field_sidejob_address_country' => 'node:field_sidejob_address_country',
    'node:field_sidejob_address_data' => 'node:field_sidejob_address_data',
    'node:field_sidejob_address_dependent_locality' => 'node:field_sidejob_address_dependent_locality',
    'node:field_sidejob_address_first_name' => 'node:field_sidejob_address_first_name',
    'node:field_sidejob_address_last_name' => 'node:field_sidejob_address_last_name',
    'node:field_sidejob_address_locality' => 'node:field_sidejob_address_locality',
    'node:field_sidejob_address_name_line' => 'node:field_sidejob_address_name_line',
    'node:field_sidejob_address_organisation_name' => 'node:field_sidejob_address_organisation_name',
    'node:field_sidejob_address_postal_code' => 'node:field_sidejob_address_postal_code',
    'node:field_sidejob_address_premise' => 'node:field_sidejob_address_premise',
    'node:field_sidejob_address_sub_administrative_area' => 'node:field_sidejob_address_sub_administrative_area',
    'node:field_sidejob_address_sub_premise' => 'node:field_sidejob_address_sub_premise',
    'node:field_sidejob_address_thoroughfare' => 'node:field_sidejob_address_thoroughfare',
    'node:field_sidejob_classification_format' => 'node:field_sidejob_classification_format',
    'node:field_sidejob_classification_value' => 'node:field_sidejob_classification_value',
    'node:field_sidejob_date_end_value' => 'node:field_sidejob_date_end_value',
    'node:field_sidejob_date_start_value' => 'node:field_sidejob_date_start_value',
    'node:field_sidejob_income_interval_value' => 'node:field_sidejob_income_interval_value',
    'node:field_sidejob_income_max_total_value' => 'node:field_sidejob_income_max_total_value',
    'node:field_sidejob_income_max_value' => 'node:field_sidejob_income_max_value',
    'node:field_sidejob_income_min_total_value' => 'node:field_sidejob_income_min_total_value',
    'node:field_sidejob_income_min_value' => 'node:field_sidejob_income_min_value',
    'node:field_sidejob_organization_tid' => 'node:field_sidejob_organization_tid',
    'node:field_slider_teaserbody_format' => 'node:field_slider_teaserbody_format',
    'node:field_slider_teaserbody_value' => 'node:field_slider_teaserbody_value',
    'node:field_slider_url_attributes' => 'node:field_slider_url_attributes',
    'node:field_slider_url_title' => 'node:field_slider_url_title',
    'node:field_slider_url_url' => 'node:field_slider_url_url',
    'node:field_taxonomy_party_tid' => 'node:field_taxonomy_party_tid',
    'node:field_teaser_image_alt' => 'node:field_teaser_image_alt',
    'node:field_teaser_image_fid' => 'node:field_teaser_image_fid',
    'node:field_teaser_image_height' => 'node:field_teaser_image_height',
    'node:field_teaser_image_title' => 'node:field_teaser_image_title',
    'node:field_teaser_image_width' => 'node:field_teaser_image_width',
    'node:field_testimonial_fullname_format' => 'node:field_testimonial_fullname_format',
    'node:field_testimonial_fullname_value' => 'node:field_testimonial_fullname_value',
    'node:field_testimonial_month_value' => 'node:field_testimonial_month_value',
    'node:field_testimonial_portrait_alt' => 'node:field_testimonial_portrait_alt',
    'node:field_testimonial_portrait_fid' => 'node:field_testimonial_portrait_fid',
    'node:field_testimonial_portrait_height' => 'node:field_testimonial_portrait_height',
    'node:field_testimonial_portrait_title' => 'node:field_testimonial_portrait_title',
    'node:field_testimonial_portrait_width' => 'node:field_testimonial_portrait_width',
    'node:field_testimonial_quote_format' => 'node:field_testimonial_quote_format',
    'node:field_testimonial_quote_value' => 'node:field_testimonial_quote_value',
    'node:field_trustee_image_alt' => 'node:field_trustee_image_alt',
    'node:field_trustee_image_fid' => 'node:field_trustee_image_fid',
    'node:field_trustee_image_height' => 'node:field_trustee_image_height',
    'node:field_trustee_image_title' => 'node:field_trustee_image_title',
    'node:field_trustee_image_width' => 'node:field_trustee_image_width',
    'node:field_valid_value' => 'node:field_valid_value',
    'node:field_valid_value2' => 'node:field_valid_value2',
    'node:field_vote_node_target_id' => 'node:field_vote_node_target_id',
    'node:field_vote_tid' => 'node:field_vote_tid',
    'node:field_vote_user_target_id' => 'node:field_vote_user_target_id',
    'node:field_voted_value' => 'node:field_voted_value',
    'node:field_webform_footer_format' => 'node:field_webform_footer_format',
    'node:field_webform_footer_value' => 'node:field_webform_footer_value',
    'node:language' => 'node:language',
    'node:nid' => 'node:nid',
    'node:promote' => 'node:promote',
    'node:sticky' => 'node:sticky',
    'node:title' => 'node:title',
    'node:type' => 'node:type',
    'node:uid' => 'node:uid',
    'node:vid' => 'node:vid',
    'overlay:mode' => 'overlay:mode',
    'path:node_alias' => 'path:node_alias',
    'system:cookie' => 'system:cookie',
    'system:date' => 'system:date',
    'system:date_time' => 'system:date_time',
    'system:day_of_month' => 'system:day_of_month',
    'system:day_of_week' => 'system:day_of_week',
    'system:dummy' => 'system:dummy',
    'system:host' => 'system:host',
    'system:http_header' => 'system:http_header',
    'system:https' => 'system:https',
    'system:month' => 'system:month',
    'system:post' => 'system:post',
    'system:query_param' => 'system:query_param',
    'system:query_string' => 'system:query_string',
    'system:random' => 'system:random',
    'system:referer' => 'system:referer',
    'system:remote_ip' => 'system:remote_ip',
    'system:server_ip' => 'system:server_ip',
    'system:server_name' => 'system:server_name',
    'system:server_port' => 'system:server_port',
    'system:session' => 'system:session',
    'system:time' => 'system:time',
    'system:user_agent' => 'system:user_agent',
    'system:user_browser' => 'system:user_browser',
    'system:user_browser_simplified' => 'system:user_browser_simplified',
    'system:user_os' => 'system:user_os',
    'system:user_os_simplified' => 'system:user_os_simplified',
    'taxonomy:name' => 'taxonomy:name',
    'taxonomy:tid' => 'taxonomy:tid',
    'taxonomy:tid_and_childs' => 'taxonomy:tid_and_childs',
    'taxonomy:vid' => 'taxonomy:vid',
    'user:hostname' => 'user:hostname',
    'user:language' => 'user:language',
    'user:name' => 'user:name',
    'user:role' => 'user:role',
    'user:uid' => 'user:uid',
    'views:human_name' => 'views:human_name',
    'views:machine_name' => 'views:machine_name',
    'views:vid' => 'views:vid',
  );
  $export['themekey_properties'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_theme_maintain';
  $strongarm->value = 0;
  $export['themekey_theme_maintain'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_theme_maintain_anonymous';
  $strongarm->value = 0;
  $export['themekey_theme_maintain_anonymous'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'parliamentwatch';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_menu_link_menu-about-us-de';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_menu_link_menu-about-us-de'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_menu_link_menu-support-us-de';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_menu_link_menu-support-us-de'] = $strongarm;

  return $export;
}
