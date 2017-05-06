<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>

  <div class="page-container" data-sidebar-container>
    <div id="header">
      <div class="container">
        <?php if ($logo): ?>
        <a class="header__logo" href="<?php print $front_page; ?>" title="<?php print t('Back to home'); ?>" rel="home">
          <div class="svg-container">
            <svg x="0px" y="0px" viewBox="0 0 983.5 86.7" xml:space="preserve">
                  <title><?php print $site_name; ?> <?php print $site_slogan; ?></title>
                  <path transform="scale(0.1,0.1)" fill="#F25639" d="M419.5,445.6c0-24.6-4.7-47.8-14-69.8c-9.3-21.9-22.1-41-38.4-57.3
                      c-16.3-16.3-35.4-29.1-57.3-38.4c-21.9-9.3-45.2-14-69.7-14c-24.6,0-47.7,4.7-69.3,14c-21.6,9.3-40.5,22.1-56.8,38.4
                      c-16.3,16.3-29.1,35.4-38.4,57.3c-9.3,21.9-13.9,45.2-13.9,69.8c0,24.6,4.6,47.7,13.9,69.2c9.3,21.6,22.1,40.6,38.4,56.8
                      c16.3,16.3,35.2,29.1,56.8,38.4c21.6,9.3,44.7,14,69.3,14c23.9,0,46.5-4.5,67.8-13.4c21.2-9,40-21.5,56.3-37.4
                      c16.3-15.9,29.2-34.7,38.9-56.3C412.7,495.2,418.2,471.5,419.5,445.6z M419.5,595c-21.9,24.6-48.3,45.7-79.2,63.3
                      c-30.9,17.6-64.3,26.4-100.1,26.4c-33.2,0-64.3-6-93.2-17.9c-28.9-11.9-54.3-28.6-76.2-49.8c-21.9-21.2-39.2-46.5-51.8-75.7
                      C6.3,512,0,480.1,0,445.6c0-33.2,6.1-64.6,18.4-94.2c12.3-29.5,29.2-55.3,50.8-77.2c21.6-21.9,47.2-39.2,76.7-51.8
                      c29.6-12.6,61.6-18.9,96.2-18.9c31.9,0,62.3,6.5,91.2,19.4c28.9,12.9,54.3,30.4,76.2,52.3c21.9,21.9,39.4,47.5,52.3,76.7
                      c13,29.3,19.4,60.5,19.4,93.7v210.3c0,8.6-3,15.9-9,21.9c-6,6-13.3,9-21.9,9c-8.6,0-15.9-3-21.9-9c-6-6-9-13.3-9-21.9L419.5,595
                       M598.9,454.5c0.7,23.9,6,46.2,15.9,66.8c10,20.6,22.9,38.5,38.9,53.8c16,15.3,34.5,27.4,55.8,36.4c21.2,9,43.8,13.5,67.8,13.5
                      c24.6,0,47.8-4.6,69.7-13.9c21.9-9.3,41-22.1,57.3-38.3c16.3-16.3,29.1-35.2,38.4-56.8c9.3-21.6,14-44.7,14-69.3
                      c0-24.6-4.7-47.8-14-69.7c-9.3-21.9-22.1-41-38.4-57.3c-16.3-16.3-35.4-29-57.3-38.4c-21.9-9.3-45.2-13.9-69.7-13.9
                      c-23.9,0-46.5,4.5-67.8,13.5c-21.3,9-39.9,21.4-55.8,37.4c-15.9,15.9-28.9,34.9-38.9,56.8c-9.9,21.9-15.3,45.8-15.9,71.7
                      C598.9,446.5,598.9,454.5,598.9,454.5z M537.1,79.8c0-8.6,3-16,9-21.9c6-6,13.3-9,21.9-9c8.6,0,15.9,3,21.9,9c6,6,9,13.3,9,21.9
                      v215.2c21.9-23.9,48.1-44.7,78.7-62.3c30.5-17.6,64.4-27.1,101.6-28.4c31.9,0,62.3,6.5,91.2,19.5c28.9,12.9,54.3,30.4,76.2,52.3
                      c21.9,21.9,39.4,47.5,52.3,76.7c13,29.2,19.4,60.4,19.4,93.6c0,32.6-6.3,63.3-18.9,92.2c-12.6,28.9-29.7,54.3-51.3,76.2
                      c-21.6,21.9-47,39.2-76.2,51.8c-29.2,12.6-60.8,18.9-94.7,18.9c-35.9,0-69.1-6.8-99.6-20.4c-30.6-13.6-56.8-32.4-78.7-56.3v45.9
                      c0,8.6-3,15.9-9,21.9c-6,6-13.3,8.9-21.9,8.9c-8.6,0-15.9-3-21.9-8.9c-6-6-9-13.3-9-21.9L537.1,79.8 M1470.8,439.6
                      c-1.3-23.9-6.8-46.3-16.4-67.2c-9.7-20.9-22.6-39.2-38.9-54.8c-16.3-15.6-35-27.9-56.3-36.9c-21.2-9-43.8-13.5-67.7-13.5
                      c-24.6,0-47.7,4.6-69.2,13.9c-21.6,9.3-40.5,22.1-56.8,38.4c-16.3,16.3-29.1,35.4-38.4,57.3c-9.3,21.9-13.9,45.2-13.9,69.7
                      c0,24.6,4.6,47.7,13.9,69.3c9.3,21.6,22.1,40.5,38.4,56.8c16.3,16.3,35.2,29,56.8,38.3c21.6,9.3,44.7,13.9,69.2,13.9
                      c23.9,0,46.5-4.5,67.7-13.5c21.3-9,40.1-21.1,56.3-36.4c16.3-15.3,29.2-33.2,38.9-53.8c9.6-20.6,15.1-42.9,16.4-66.8
                      C1470.8,454.5,1470.8,439.6,1470.8,439.6z M1470.8,243.3c0-8.7,3-16,9-21.9c6-6,13.3-9,21.9-9c8.6,0,16,3,21.9,9c6,6,9,13.3,9,21.9
                      v384.6c0,32.6-6.3,63.3-18.9,92.2c-12.6,28.9-29.7,54.3-51.3,76.2c-21.6,21.9-47,39.2-76.2,51.9c-29.2,12.6-60.8,18.9-94.7,18.9
                      c-33.9,0-65.1-6-93.7-17.9c-28.6-12-53.8-28.6-75.7-49.8l-1-1c-6-6-9-13-9-20.9c0-8.6,3.2-16.1,9.5-22.4c6.3-6.3,13.8-9.4,22.4-9.4
                      c8.6,0,15.6,2.6,20.9,8c16.6,16.6,35.5,29.6,56.8,38.9c21.2,9.3,44.5,14,69.7,14c24.6,0,47.8-4.6,69.8-14
                      c21.9-9.3,41-22.1,57.3-38.3c16.3-16.3,29.1-35.2,38.4-56.8c9.3-21.6,13.9-44.7,13.9-69.3V606c-21.9,24.6-48.3,44-79.2,58.3
                      c-30.9,14.3-64.3,21.4-100.2,21.4c-33.2,0-64.3-6-93.2-18c-28.9-11.9-54.3-28.5-76.2-49.8c-21.9-21.3-39.2-46.5-51.8-75.7
                      c-12.6-29.2-18.9-61.1-18.9-95.7c0-33.2,6.1-64.2,18.4-93.1c12.3-28.9,29.2-54.2,50.8-75.7c21.6-21.6,47.2-38.9,76.7-51.8
                      c29.5-13,61.6-20.1,96.2-21.4c34.5,0.7,67.1,8.3,97.6,22.9c30.6,14.6,57.1,34.6,79.7,59.8L1470.8,243.3 M1990.9,412.7
                      c-4-20.6-11.3-39.9-21.9-57.8c-10.6-17.9-23.7-33.4-39.3-46.3c-15.6-13-33.2-23.2-52.8-30.9c-19.6-7.6-40.4-11.5-62.3-11.5
                      c-21.9,0-42.7,3.8-62.3,11.5c-19.6,7.6-37.2,17.9-52.8,30.9c-15.6,13-28.6,28.4-38.9,46.3c-10.3,17.9-17.4,37.2-21.4,57.8
                      C1639.2,412.7,1990.9,412.7,1990.9,412.7z M1638.2,474.4c3.3,21.3,10.3,41,21,59.3c10.6,18.3,23.7,34.1,39.3,47.4
                      c15.6,13.3,33.4,23.8,53.3,31.4c19.9,7.6,40.9,11.5,62.8,11.5c24.6,0,47.5-4.5,68.8-13.4c21.3-9,40.2-21.5,56.8-37.4
                      c6-6,13.3-8.9,22-8.9c8.6,0,15.9,3,21.9,8.9c6,6,8.9,13.3,8.9,21.9c0,8.6-3,15.9-8.9,21.9c-21.9,24.6-46.7,42-74.2,52.3
                      c-27.6,10.3-59.3,15.4-95.2,15.4c-33.2,0-64.3-6-93.2-17.9c-28.9-11.9-54.3-28.6-76.2-49.8c-21.9-21.2-39.2-46.5-51.8-75.7
                      c-12.6-29.2-18.9-61.1-18.9-95.6c0-33.2,6.1-64.3,18.4-93.2c12.3-28.9,29.2-54.1,50.8-75.7c21.6-21.6,47.2-38.9,76.7-51.8
                      c29.5-12.9,61.6-20.1,96.2-21.4c31.2,0,61.3,6.3,90.2,18.9c28.9,12.6,54.3,29.9,76.2,51.8c21.9,21.9,39.5,47.4,52.8,76.3
                      c13.3,28.9,19.9,60,19.9,93.2c0,10-3.4,17.6-10,22.9c-6.6,5.3-13.6,8-20.9,8L1638.2,474.4 M2327.8,266.2c-24.6,0-47.7,4.7-69.2,14
                      c-21.6,9.3-40.6,22.1-56.8,38.4c-16.3,16.3-29.1,35.4-38.4,57.3c-9.3,21.9-13.9,45.2-13.9,69.8c0,24.6,4.6,47.7,13.9,69.2
                      c9.3,21.6,22.1,40.6,38.4,56.8c16.2,16.3,35.2,29.1,56.8,38.4c21.5,9.3,44.7,14,69.2,14c24.6,0,47.8-4.6,69.7-14
                      c21.9-9.3,41-22.1,57.3-38.4c16.2-16.3,29.1-35.2,38.4-56.8c9.3-21.6,13.9-44.7,13.9-69.2c0-24.6-4.7-47.8-13.9-69.8
                      c-9.3-21.9-22.1-41-38.4-57.3c-16.3-16.3-35.4-29.1-57.3-38.4C2375.6,270.8,2352.3,266.2,2327.8,266.2z M2329.8,203.4
                      c31.9,0,62.3,6.5,91.2,19.4c28.9,12.9,54.3,30.4,76.2,52.3c21.9,21.9,39.3,47.5,52.3,76.7c12.9,29.3,19.4,60.5,19.4,93.7
                      c0,32.6-6.3,63.3-18.9,92.2c-12.6,28.9-29.7,54.3-51.3,76.2c-21.6,21.9-47,39.2-76.2,51.8c-29.2,12.6-60.8,18.9-94.7,18.9
                      c-33.2,0-64.3-6-93.1-17.9c-28.9-11.9-54.3-28.6-76.2-49.8c-22-21.2-39.2-46.5-51.9-75.7c-12.6-29.2-18.9-61.1-18.9-95.6
                      c0-33.2,6.1-64.3,18.5-93.2c12.3-28.9,29.2-54.1,50.8-75.7c21.6-21.6,47.2-38.9,76.7-51.8C2263.1,211.9,2295.2,204.8,2329.8,203.4
                       M2603.8,232.3c0-8.6,3-15.9,9-21.9c6-6,13.3-9,21.9-9c8.6,0,15.9,3,21.9,9c6,6,9,13.3,9,21.9v48.8c21.3-23.2,46.8-42.3,76.7-57.3
                      c29.9-15,62.4-22.4,97.6-22.4c10.6,0,19.1,3,25.4,9c6.3,6,9.4,13.3,9.4,21.9c0,8.6-3.1,16-9.4,21.9c-6.4,6-14.8,9-25.4,9
                      c-23.9,0-46.2,4.7-66.8,13.9c-20.6,9.3-38.7,21.9-54.3,37.9c-15.6,15.9-28.2,34.2-37.8,54.8c-9.7,20.6-14.8,42.2-15.5,64.8v220.3
                      c0,8.6-3,15.9-9,21.9c-6,6-13.3,8.9-21.9,8.9c-8.6,0-16-3-21.9-8.9c-6-6-9-13.3-9-21.9V232.3 M3293.3,445.6
                      c-1.3-25.9-6.9-49.8-16.4-71.8c-9.6-21.9-22.4-40.8-38.4-56.8c-16-15.9-34.5-28.4-55.8-37.4c-21.3-8.9-43.8-13.4-67.8-13.4
                      c-24.6,0-47.9,4.7-69.7,14c-21.9,9.3-41,22.1-57.3,38.4c-16.3,16.3-29.1,35.4-38.4,57.3c-9.3,21.9-13.9,45.2-13.9,69.8
                      c0,24.6,4.6,47.7,13.9,69.2c9.3,21.6,22.1,40.6,38.4,56.8c16.3,16.3,35.4,29.1,57.3,38.4c21.9,9.3,45.1,14,69.7,14
                      c24.6,0,47.7-4.6,69.3-14c21.6-9.3,40.5-22.1,56.8-38.4c16.3-16.3,29.1-35.2,38.4-56.8C3288.7,493.2,3293.3,470.1,3293.3,445.6
                      L3293.3,445.6z M3293.3,79.8c0-8.6,3-16,9-21.9c5.9-6,13.2-9,21.9-9c8.6,0,16,3,21.9,9c6,6,9,13.3,9,21.9v575c0,8.6-3,15.9-9,21.9
                      c-6,6-13.3,8.9-21.9,8.9c-8.6,0-16-3-21.9-8.9c-6-6-9-13.3-9-21.9V608l-9,8.9c-21.9,21.3-47.5,37.9-76.7,49.8
                      c-29.2,11.9-60.1,17.9-92.7,17.9c-33.9,0-65.4-6.3-94.6-18.9c-29.3-12.6-54.7-29.9-76.3-51.8c-21.6-21.9-38.7-47.3-51.3-76.2
                      c-12.6-28.9-18.9-59.6-18.9-92.2c0-33.2,6.5-64.4,19.4-93.7c12.9-29.2,30.4-54.8,52.3-76.7c21.9-21.9,47.3-39.4,76.2-52.3
                      c28.9-13,59.3-19.4,91.2-19.4c37.2,1.3,71,10.8,101.6,28.4c30.6,17.6,56.8,38.4,78.7,62.3L3293.3,79.8 M3415.9,232.3
                      c0-8.6,3-15.9,9-21.9c6-6,13.3-9,21.9-9c8.6,0,15.9,3,21.9,9c6,6,9,13.3,9,21.9v12.9c15.3-13.3,32.9-23.9,52.8-31.9
                      c19.9-8,41.2-12,63.8-12c24.6,0,47.8,4.7,69.8,14c21.9,9.3,41,22.1,57.3,38.4c16.3,16.3,29.1,35.4,38.4,57.3
                      c9.3,21.9,14,45.2,14,69.8v274c0,8.6-3,15.9-9,21.9c-6,6-13.3,8.9-21.9,8.9c-8.6,0-16-3-21.9-8.9c-6-6-9-13.3-9-21.9v-274
                      c0-16-3.1-31.1-9.5-45.4c-6.3-14.3-14.8-26.7-25.4-37.4c-10.6-10.6-23.1-18.9-37.4-24.9c-14.3-6-29.4-9-45.3-9c-16,0-30.9,3-44.8,9
                      c-14,6-26.2,13.9-36.9,23.9c-10.6,10-18.9,21.8-24.9,35.4c-6,13.6-9.3,28.1-9.9,43.3v279.1c0,8.6-3,15.9-9,21.9
                      c-6,6-13.3,8.9-21.9,8.9c-8.6,0-16-3-21.9-8.9c-6-6-9-13.3-9-21.9L3415.9,232.3 M4237,412.7c-4-20.6-11.3-39.9-22-57.8
                      c-10.6-17.9-23.7-33.4-39.3-46.3c-15.6-13-33.3-23.2-52.8-30.9c-19.6-7.6-40.4-11.5-62.3-11.5c-21.9,0-42.7,3.8-62.3,11.5
                      c-19.6,7.6-37.2,17.9-52.8,30.9c-15.6,13-28.6,28.4-38.9,46.3c-10.3,17.9-17.4,37.2-21.4,57.8C3885.3,412.7,4237,412.7,4237,412.7z
                       M3884.3,474.4c3.3,21.3,10.3,41,20.9,59.3c10.6,18.3,23.8,34.1,39.4,47.4c15.6,13.3,33.4,23.8,53.3,31.4
                      c20,7.6,40.9,11.5,62.8,11.5c24.6,0,47.5-4.5,68.8-13.4c21.3-9,40.2-21.5,56.8-37.4c6-6,13.3-8.9,22-8.9c8.6,0,16,3,21.9,8.9
                      c6,6,9,13.3,9,21.9c0,8.6-3,15.9-9,21.9c-21.9,24.6-46.7,42-74.2,52.3c-27.6,10.3-59.3,15.4-95.2,15.4c-33.2,0-64.3-6-93.2-17.9
                      c-28.9-11.9-54.3-28.6-76.2-49.8c-21.9-21.2-39.2-46.5-51.8-75.7c-12.6-29.2-19-61.1-19-95.6c0-33.2,6.2-64.3,18.5-93.2
                      c12.3-28.9,29.2-54.1,50.8-75.7c21.6-21.6,47.2-38.9,76.7-51.8c29.6-12.9,61.6-20.1,96.2-21.4c31.2,0,61.3,6.3,90.2,18.9
                      c28.9,12.6,54.3,29.9,76.2,51.8c21.9,21.9,39.5,47.4,52.8,76.3c13.3,28.9,19.9,60,19.9,93.2c0,10-3.3,17.6-10,22.9
                      c-6.6,5.3-13.6,8-20.9,8L3884.3,474.4 M4384.5,79.8c0-8.6,3-16,9-21.9c6-6,13.3-9,21.9-9c8.6,0,16,3,21.9,9c6,6,9,13.3,9,21.9v121.6
                      h66.4c8.7,0,16.1,3,22.1,9c6,6,9.1,13.3,9.1,21.9c0,8.6-3,16-9.1,21.9c-6,6-13.4,9-22.1,9h-66.4v391.7c0,8.6-3,15.9-8.9,21.9
                      c-5.9,6-13,8.9-21.5,8.9c-8.5,0-15.7-3-21.6-8.9c-5.9-6-8.8-13.3-8.8-21.9V263.2H4319c-8.7,0-16.1-3-22.1-9c-6-6-9.1-13.3-9.1-21.9
                      c0-8.6,3-15.9,9-21.9c6-6,13.3-9,21.9-9h65.7L4384.5,79.8 M4945.5,412.7c-4-20.6-11.3-39.9-22-57.8c-10.6-17.9-23.7-33.4-39.4-46.3
                      c-15.6-13-33.2-23.2-52.8-30.9c-19.6-7.6-40.3-11.5-62.3-11.5c-22,0-42.7,3.8-62.3,11.5c-19.6,7.6-37.2,17.9-52.8,30.9
                      c-15.6,13-28.6,28.4-38.9,46.3c-10.3,17.9-17.4,37.2-21.4,57.8C4593.8,412.7,4945.5,412.7,4945.5,412.7z M4592.8,474.4
                      c3.3,21.3,10.3,41,20.9,59.3c10.6,18.3,23.8,34.1,39.4,47.4c15.6,13.3,33.4,23.8,53.3,31.4c19.9,7.6,40.8,11.5,62.8,11.5
                      c24.6,0,47.5-4.5,68.8-13.4c21.2-9,40.2-21.5,56.8-37.4c6-6,13.2-8.9,21.9-8.9c8.6,0,16,3,21.9,8.9c6,6,9,13.3,9,21.9
                      c0,8.6-3,15.9-9,21.9c-21.9,24.6-46.7,42-74.2,52.3c-27.6,10.3-59.3,15.4-95.1,15.4c-33.2,0-64.3-6-93.2-17.9
                      c-28.8-11.9-54.3-28.6-76.2-49.8c-21.9-21.2-39.2-46.5-51.8-75.7c-12.6-29.2-18.9-61.1-18.9-95.6c0-33.2,6.1-64.3,18.4-93.2
                      c12.3-28.9,29.2-54.1,50.8-75.7c21.6-21.6,47.2-38.9,76.7-51.8c29.5-12.9,61.6-20.1,96.2-21.4c31.3,0,61.3,6.3,90.2,18.9
                      c28.9,12.6,54.3,29.9,76.2,51.8c21.9,21.9,39.5,47.4,52.8,76.3c13.3,28.9,20,60,20,93.2c0,10-3.3,17.6-9.9,22.9
                      c-6.7,5.3-13.7,8-20.9,8L4592.8,474.4 M5056.1,232.3c0-8.6,2.9-15.9,8.9-21.9c6-6,13.3-9,21.9-9c8.7,0,16,3,21.9,9
                      c6.1,6,9,13.3,9,21.9v12.9c15.4-13.3,33-23.9,52.9-31.9c19.9-8,41.1-12,63.7-12c24.6,0,47.9,4.7,69.7,14c22,9.3,41,22.1,57.4,38.4
                      c16.2,16.3,29,35.4,38.3,57.3c9.3,21.9,14,45.2,14,69.8v274c0,8.6-3,15.9-9,21.9c-6,6-13.3,8.9-21.9,8.9c-8.6,0-16-3-21.9-8.9
                      c-6-6-9-13.3-9-21.9v-274c0-16-3.2-31.1-9.4-45.4c-6.3-14.3-14.8-26.7-25.4-37.4c-10.7-10.6-23-18.9-37.3-24.9
                      c-14.3-6-29.4-9-45.4-9c-16,0-30.9,3-44.8,9c-13.9,6-26.2,13.9-36.9,23.9c-10.6,10-18.9,21.8-24.9,35.4c-6,13.6-9.3,28.1-10,43.3
                      v279.1c0,8.6-2.9,15.9-9,21.9c-5.9,6-13.2,8.9-21.9,8.9c-8.6,0-15.9-3-21.9-8.9c-6-6-8.9-13.3-8.9-21.9L5056.1,232.3"/>
                  <path fill="#2F2D2E" d="M584.4,44.9l4.6,12.5L602.4,22c0.2-0.5,0.6-1,1.1-1.3c0.5-0.3,1.1-0.5,1.7-0.5c0.9,0,1.7,0.3,2.2,0.9
                      c0.6,0.6,0.8,1.3,0.8,2c0,0.4-0.1,0.8-0.3,1.2c-0.1,0.1-0.3,0.8-0.7,2c-0.4,1.2-1.2,3.4-2.4,6.5c-1.2,3.1-2.8,7.4-4.8,12.7
                      c-2,5.3-4.6,12.1-7.8,20.4c-0.3,0.7-0.6,1.3-1.1,1.8c-0.5,0.5-1.2,0.7-2.1,0.7s-1.7-0.3-2.2-0.8c-0.6-0.6-0.9-1.1-1.2-1.6
                      c-0.9-2.3-1.7-4.6-2.4-6.7c-0.7-2.2-1.4-4.2-2.1-6c-0.7,1.9-1.5,3.9-2.2,6c-0.8,2.2-1.6,4.4-2.5,6.7c-0.3,0.7-0.6,1.3-1.1,1.8
                      c-0.5,0.5-1.2,0.7-2.1,0.7c-0.9,0-1.7-0.3-2.2-0.8c-0.6-0.6-0.9-1.1-1.1-1.6c-2.8-7.6-5.2-14.1-7.1-19.4c-1.9-5.3-3.5-9.5-4.7-12.8
                      c-1.2-3.2-2.1-5.6-2.6-7c-0.5-1.5-0.8-2.2-0.8-2.3c-0.2-0.4-0.3-0.9-0.3-1.4c0-0.9,0.2-1.6,0.7-2.1c0.5-0.6,1.2-0.8,2.1-0.8
                      c0.7,0,1.4,0.2,1.9,0.5c0.5,0.3,0.9,0.8,1.1,1.3l13,35.4l4.7-12.5c0,0,1.1-2.8,3.4-2.8C583.4,42.1,584.4,44.9,584.4,44.9
                       M650.8,44.5c0-2.5-0.5-4.8-1.4-7c-0.9-2.2-2.2-4.1-3.8-5.7c-1.6-1.6-3.5-2.9-5.7-3.8c-2.2-0.9-4.5-1.4-7-1.4
                      c-2.5,0-4.8,0.5-6.9,1.4c-2.2,0.9-4.1,2.2-5.7,3.8c-1.6,1.6-2.9,3.5-3.8,5.7c-0.9,2.2-1.4,4.5-1.4,7c0,2.5,0.5,4.8,1.4,6.9
                      c0.9,2.2,2.2,4.1,3.8,5.7c1.6,1.6,3.5,2.9,5.7,3.8c2.2,0.9,4.5,1.4,6.9,1.4c2.4,0,4.7-0.4,6.8-1.3c2.1-0.9,4-2.1,5.6-3.7
                      c1.6-1.6,2.9-3.5,3.9-5.6C650.1,49.5,650.6,47.1,650.8,44.5z M650.8,59.5c-2.2,2.5-4.8,4.6-7.9,6.3c-3.1,1.8-6.4,2.6-10,2.6
                      c-3.3,0-6.4-0.6-9.3-1.8c-2.9-1.2-5.4-2.9-7.6-5c-2.2-2.1-3.9-4.6-5.2-7.6c-1.3-2.9-1.9-6.1-1.9-9.6c0-3.3,0.6-6.5,1.8-9.4
                      c1.2-3,2.9-5.5,5.1-7.7c2.2-2.2,4.7-3.9,7.7-5.2c2.9-1.3,6.2-1.9,9.6-1.9c3.2,0,6.2,0.6,9.1,1.9c2.9,1.3,5.4,3,7.6,5.2
                      c2.2,2.2,3.9,4.8,5.2,7.7c1.3,2.9,1.9,6,1.9,9.4v21c0,0.9-0.3,1.6-0.9,2.2c-0.6,0.6-1.3,0.9-2.2,0.9c-0.9,0-1.6-0.3-2.2-0.9
                      c-0.6-0.6-0.9-1.3-0.9-2.2L650.8,59.5 M667.9,7.9c0-0.9,0.3-1.6,0.9-2.2c0.6-0.6,1.3-0.9,2.2-0.9c0.9,0,1.6,0.3,2.2,0.9
                      c0.6,0.6,0.9,1.3,0.9,2.2v12.2h6.6c0.9,0,1.6,0.3,2.2,0.9c0.6,0.6,0.9,1.3,0.9,2.2c0,0.9-0.3,1.6-0.9,2.2c-0.6,0.6-1.3,0.9-2.2,0.9
                      h-6.6v39.2c0,0.9-0.3,1.6-0.9,2.2c-0.6,0.6-1.3,0.9-2.2,0.9c-0.8,0-1.6-0.3-2.2-0.9c-0.6-0.6-0.9-1.3-0.9-2.2V26.3h-6.6
                      c-0.9,0-1.6-0.3-2.2-0.9c-0.6-0.6-0.9-1.3-0.9-2.2c0-0.9,0.3-1.6,0.9-2.2c0.6-0.6,1.3-0.9,2.2-0.9h6.6V7.9 M706.8,20.4
                      c2.7,0,5.1,0.4,7.2,1.2c2.1,0.8,4,1.7,5.5,2.7c1.5,1,2.7,2.1,3.5,3.1c0.8,1,1.2,1.8,1.2,2.3c0,0.7-0.3,1.4-0.9,1.9
                      c-0.6,0.5-1.3,0.8-2,0.8c-0.9,0-1.6-0.3-2.2-0.9c-1.7-1.5-3.6-2.6-5.7-3.5c-2.1-0.9-4.4-1.3-6.9-1.3c-2.5,0-4.8,0.5-6.9,1.4
                      c-2.2,0.9-4.1,2.2-5.7,3.8c-1.6,1.6-2.9,3.5-3.8,5.7c-0.9,2.2-1.4,4.5-1.4,7c0,2.5,0.5,4.8,1.4,6.9c0.9,2.2,2.2,4.1,3.8,5.7
                      c1.6,1.6,3.5,2.9,5.7,3.8c2.2,0.9,4.5,1.4,6.9,1.4c2.5,0,4.8-0.4,6.9-1.3c2.1-0.9,4-2.1,5.7-3.7c0.6-0.6,1.3-0.9,2.2-0.9
                      c0.8,0,1.5,0.3,2.1,0.8c0.6,0.6,0.9,1.3,0.9,2.1c0,0.5-0.4,1.3-1.1,2.3c-0.8,1-1.9,2-3.4,3c-1.5,1-3.4,1.9-5.6,2.6
                      c-2.2,0.7-4.8,1.1-7.6,1.1c-3.3,0-6.4-0.6-9.3-1.8c-2.9-1.2-5.4-2.9-7.6-5c-2.2-2.1-3.9-4.6-5.2-7.6c-1.3-2.9-1.9-6.1-1.9-9.6
                      c0-3.3,0.6-6.4,1.8-9.3c1.2-2.9,2.9-5.4,5.1-7.6c2.2-2.2,4.7-3.9,7.7-5.2C700.1,21.2,703.3,20.5,706.8,20.4 M728.5,7.9
                      c0-0.9,0.3-1.6,0.9-2.2c0.6-0.6,1.3-0.9,2.2-0.9c0.9,0,1.6,0.3,2.2,0.9c0.6,0.6,0.9,1.3,0.9,2.2v16.7c1.5-1.3,3.3-2.4,5.3-3.2
                      c2-0.8,4.1-1.2,6.4-1.2c2.5,0,4.8,0.5,7,1.4c2.2,0.9,4.1,2.2,5.7,3.8c1.6,1.6,2.9,3.5,3.8,5.7c0.9,2.2,1.4,4.5,1.4,7v27.2
                      c0,0.9-0.3,1.6-0.9,2.2c-0.6,0.6-1.3,0.9-2.2,0.9c-0.9,0-1.6-0.3-2.2-0.9c-0.6-0.6-0.9-1.3-0.9-2.2V38.2c0-1.6-0.3-3.1-0.9-4.5
                      c-0.6-1.4-1.5-2.7-2.5-3.7c-1.1-1.1-2.3-1.9-3.7-2.5c-1.4-0.6-2.9-0.9-4.5-0.9c-1.6,0-3.1,0.3-4.5,0.9c-1.4,0.6-2.6,1.4-3.7,2.4
                      c-1.1,1-1.9,2.2-2.5,3.5c-0.6,1.4-0.9,2.8-1,4.3v27.7c0,0.9-0.3,1.7-0.8,2.2c-0.6,0.6-1.3,0.8-2.2,0.8c-0.9,0-1.6-0.3-2.1-0.9
                      c-0.6-0.6-0.9-1.3-0.9-2.2L728.5,7.9 M767.5,64.4c0-1.1,0.4-2.1,1.2-2.9c0.8-0.8,1.8-1.2,2.9-1.2c1.1,0,2.1,0.4,2.9,1.2
                      c0.8,0.8,1.2,1.8,1.2,2.9c0,1.1-0.4,2.1-1.2,2.9c-0.8,0.8-1.8,1.2-2.9,1.2c-1.1,0-2.1-0.4-2.9-1.2C767.9,66.5,767.5,65.6,767.5,64.4
                       M819.1,44.5c-0.1-2.6-0.7-5-1.6-7.2c-1-2.2-2.2-4.1-3.8-5.7c-1.6-1.6-3.5-2.8-5.6-3.7c-2.1-0.9-4.4-1.3-6.8-1.3
                      c-2.5,0-4.8,0.5-7,1.4c-2.2,0.9-4.1,2.2-5.7,3.8c-1.6,1.6-2.9,3.5-3.8,5.7c-0.9,2.2-1.4,4.5-1.4,7c0,2.5,0.5,4.8,1.4,6.9
                      c0.9,2.2,2.2,4.1,3.8,5.7c1.6,1.6,3.5,2.9,5.7,3.8c2.2,0.9,4.5,1.4,7,1.4c2.5,0,4.8-0.5,6.9-1.4c2.2-0.9,4.1-2.2,5.7-3.8
                      c1.6-1.6,2.9-3.5,3.8-5.7C818.6,49.3,819.1,47,819.1,44.5z M819.1,7.9c0-0.9,0.3-1.6,0.9-2.2c0.6-0.6,1.3-0.9,2.2-0.9
                      c0.9,0,1.6,0.3,2.2,0.9c0.6,0.6,0.9,1.3,0.9,2.2v57.5c0,0.9-0.3,1.6-0.9,2.2c-0.6,0.6-1.3,0.9-2.2,0.9c-0.9,0-1.6-0.3-2.2-0.9
                      c-0.6-0.6-0.9-1.3-0.9-2.2v-4.7l-0.9,0.9c-2.2,2.1-4.8,3.8-7.7,5c-2.9,1.2-6,1.8-9.3,1.8c-3.4,0-6.5-0.6-9.5-1.9
                      c-2.9-1.3-5.5-3-7.6-5.2c-2.2-2.2-3.9-4.7-5.1-7.6c-1.3-2.9-1.9-6-1.9-9.2c0-3.3,0.6-6.4,1.9-9.4c1.3-2.9,3-5.5,5.2-7.7
                      c2.2-2.2,4.7-3.9,7.6-5.2c2.9-1.3,5.9-1.9,9.1-1.9c3.7,0.1,7.1,1.1,10.2,2.8c3.1,1.8,5.7,3.8,7.9,6.2L819.1,7.9 M870.7,41.2
                      c-0.4-2.1-1.1-4-2.2-5.8c-1.1-1.8-2.4-3.3-3.9-4.6c-1.6-1.3-3.3-2.3-5.3-3.1c-2-0.8-4-1.1-6.2-1.1c-2.2,0-4.3,0.4-6.2,1.1
                      c-2,0.8-3.7,1.8-5.3,3.1c-1.6,1.3-2.9,2.8-3.9,4.6c-1,1.8-1.7,3.7-2.1,5.8H870.7L870.7,41.2z M835.4,47.4c0.3,2.1,1,4.1,2.1,5.9
                      c1.1,1.8,2.4,3.4,3.9,4.7c1.6,1.3,3.3,2.4,5.3,3.1c2,0.8,4.1,1.1,6.3,1.1c2.5,0,4.8-0.4,6.9-1.3c2.1-0.9,4-2.1,5.7-3.7
                      c0.6-0.6,1.3-0.9,2.2-0.9c0.9,0,1.6,0.3,2.2,0.9c0.6,0.6,0.9,1.3,0.9,2.2c0,0.9-0.3,1.6-0.9,2.2c-2.2,2.5-4.7,4.2-7.4,5.2
                      c-2.8,1-5.9,1.5-9.5,1.5c-3.3,0-6.4-0.6-9.3-1.8c-2.9-1.2-5.4-2.9-7.6-5c-2.2-2.1-3.9-4.6-5.2-7.6c-1.3-2.9-1.9-6.1-1.9-9.6
                      c0-3.3,0.6-6.4,1.8-9.3c1.2-2.9,2.9-5.4,5.1-7.6c2.2-2.2,4.7-3.9,7.7-5.2c3-1.3,6.2-2,9.6-2.1c3.1,0,6.1,0.6,9,1.9
                      c2.9,1.3,5.4,3,7.6,5.2c2.2,2.2,4,4.7,5.3,7.6c1.3,2.9,2,6,2,9.3c0,1-0.3,1.8-1,2.3c-0.7,0.5-1.4,0.8-2.1,0.8H835.4"/>
                  <path fill="#F25639" d="M971.1,85h-60.4c-6.8,0-12.3-5.5-12.3-12.3V12.3C898.4,5.5,904,0,910.8,0h60.4c6.8,0,12.3,5.5,12.3,12.3
                      v60.4C983.5,79.5,977.9,85,971.1,85z M910.8,4c-4.6,0-8.3,3.7-8.3,8.3v60.4c0,4.6,3.7,8.3,8.3,8.3h60.4c4.6,0,8.3-3.7,8.3-8.3V12.3
                      c0-4.6-3.7-8.3-8.3-8.3H910.8z M959,25.3c4.2,4.4,6.6,9.9,7.1,15.9l8-0.1c-0.4-8-3.7-15.5-9.3-21.4c-5.6-5.8-12.8-9.4-20.8-10.2
                      l-0.4,8C949.5,18.3,954.9,20.9,959,25.3 M940.4,9.3c-8.7,0-17,3.3-23.3,9.4l5.5,5.8c4.7-4.5,10.9-7,17.4-7.1l0.4-8
                      C940.5,9.3,940.5,9.3,940.4,9.3 M958.2,61.6l5.5,5.8c3-2.8,5.3-6.1,7-9.7l-7.7-2.5C961.8,57.6,960.2,59.7,958.2,61.6 M974.1,44.6
                      l-8,0.1c-0.2,2.5-0.7,5-1.6,7.4l7.7,2.5C973.3,51.3,974,48,974.1,44.6 M952.1,36c1,1.6,1.6,3.4,1.9,5.3l8.1-0.1
                      c-0.3-4-1.8-7.7-4.1-10.9L952.1,36 M949.8,53.1l5.5,5.8c3.9-3.8,6.2-8.8,6.6-14.1l-8,0.1C953.6,47.9,952.2,50.8,949.8,53.1
                       M925.3,27.4l5.5,5.8c2.4-2.3,5.4-3.6,8.7-3.8l0.4-8C934.4,21.5,929.3,23.6,925.3,27.4 M955.6,27.6c-3.3-3.3-7.6-5.4-12.1-6l-0.4,8
                      c2.6,0.5,5,1.7,6.9,3.6L955.6,27.6"/>
              </svg>
          </div>
        </a>
        <?php endif; ?>

        <?php if ($main_menu): ?>
        <button class="header__navtrigger lines-button x" type="button" role="button" aria-label="Toggle Navigation" data-sidebar-trigger>
          <span class="lines"></span>
        </button>
        <ul class="header__nav">
          <li class="header__nav__item header__nav__item--active">
            <a class="header__nav__item__link" href="index.php">Bundestag</a>
            <div class="header__subnav">
              <div class="container">
                <ul class="header__subnav__list">
                  <li class="header__subnav__list__item header__subnav__list__item--active"><a href="#" class="header__subnav__list__item__link">Abgeordnete</a></li>
                  <li class="header__subnav__list__item"><a href="#" class="header__subnav__list__item__link">Abstimmungen</a></li>
                  <li class="header__subnav__list__item"><a href="#" class="header__subnav__list__item__link">Ausschüsse</a></li>
                  <li class="header__subnav__list__item"><a href="#" class="header__subnav__list__item__link">Petitionen</a></li>
                  <li class="header__subnav__list__item"><a href="#" class="header__subnav__list__item__link">Statistiken</a></li>
                  <li class="header__subnav__list__item"><a href="#" class="header__subnav__list__item__link">Wahlrecht</a></li>
                </ul>
              </div>
            </div>
          </li>
          <li class="header__nav__item"><a class="header__nav__item__link" href="#">Landtag</a></li>
          <li class="header__nav__item"><a class="header__nav__item__link" href="#">EU-Parlament</a></li>
          <li class="header__nav__item"><a class="header__nav__item__link" href="#">Blog</a></li>
          <li class="header__nav__item"><a class="header__nav__item__link" href="#">Info</a></li>
          <li class="header__nav__item"><a class="header__nav__item__link" href="#"><span class="sr-only">Suche</span></a></li>
        </ul>
        <div class="header__subnav__indicator">
          <a href="#" class="header__subnav__indicator__first">Bundestag</a><span class="sr-only">/</span>
          <a href="#" class="header__subnav__indicator__second">Abgeordnete</a>
        </div>
        <?php endif; ?>

        <?php print render($page['header']); ?>
      </div>
    </div>

    <?php print $messages; ?>



    <div id="content">
      <a id="main-content"></a>
      <div class="container">
        <?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
        <?php print render($title_prefix); ?>
        <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
      </div>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div> <!-- /.section, /#content -->

    <div id="footer">
      <div class="container">
        <div class="footer__maincol">
          <div class="footer__maincol__col">
              <strong><i class="icon icon-bundestag"></i> Bundestag</strong>
              <ul class="footer__maincol__col__nav">
                <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Abstimmungen</a></li>
                <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Abgeordnete</a></li>
                <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Petitionen</a></li>
                <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Ausschüsse</a></li>
                <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Wahlrecht</a></li>
              </ul>
            </div>
          <div class="footer__maincol__col">
              <strong><i class="icon icon-de"></i> Landtag</strong>
              <ul class="footer__maincol__col__nav">
                <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Abstimmungen</a></li>
                <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Abgeordnete</a></li>
                <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Petitionen</a></li>
                <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Ausschüsse</a></li>
                <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Wahlrecht</a></li>
              </ul>
            </div>
          <div class="footer__maincol__col">
            <strong><i class="icon icon-de"></i> EU-Parlament</strong>
            <ul class="footer__maincol__col__nav">
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Abstimmungen</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Abgeordnete</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Petitionen</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Ausschüsse</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Wahlrecht</a></li>
            </ul>
          </div>
        </div>
        <div class="footer__maincol">
          <strong><i class="icon icon-logo-aw"></i> Über das Projekt</strong>
          <div class="footer__maincol__col">
            <ul class="footer__maincol__col__nav">
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Wir über uns</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Kuratorium</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Moderationscodex</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Finanzierung</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Impressum</a></li>
            </ul>
          </div>
          <div class="footer__maincol__col">
              <ul class="footer__maincol__col__nav">
                <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Projekt unterstützen</a></li>
                <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Infopaket bestellen</a></li>
                <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Datenschutzerklärung</a></li>
              </ul>
            </div>
        </div>
      </div>
      <div class="footer__mediapartner">
        <div class="container">
          <h3 class="footer__mediapartner__title">Medienpartner</h3>
          <a href="#" class="footer__mediapartner__link" title="Go to website of Spiegel Online"><img src="<?php print base_path() . path_to_theme(); ?>/images/medienpartner/logo_spon.png" alt="<?php print t('Logo of Spiegel Online'); ?>"></a>
          <a href="#" class="footer__mediapartner__link" title="Go to website of Süddeutsche"><img src="<?php print base_path() . path_to_theme(); ?>/images/medienpartner/logo_sueddeutsche.png" alt="<?php print t('Logo of Süddeutsche'); ?>"></a>
          <a href="#" class="footer__mediapartner__link" title="Go to website of WELT-Online"><img src="<?php print base_path() . path_to_theme(); ?>/images/medienpartner/logo_welt.png" alt="<?php print t('Logo of Welt-Online'); ?>"></a>
          <a href="#" class="footer__mediapartner__link" title="Go to website of Süddeutsche"><img src="<?php print base_path() . path_to_theme(); ?>/images/medienpartner/logo_t_online.png" alt="<?php print t('Logo of T-Online'); ?>"></a>
        </div>
      </div>
      <div class="container">
        <?php print render($page['footer']); ?>
      </div>
    </div>
  </div>