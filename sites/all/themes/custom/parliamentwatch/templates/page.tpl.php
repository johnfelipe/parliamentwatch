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
 * - $page['header_top']: Items for the header-top region.
 * - $page['header_bottom']: Items for the header-bottom region.
 * - $page['content']: The main content of the current page.
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
    <header id="header">
      <div class="container">
        <?php if ($logo): ?>
        <a class="header__logo" href="<?php print $front_page; ?>" title="<?php print t('Back to home'); ?>" rel="home">
          <div class="svg-container">
            <svg viewBox="0 0 379.1 53.2"><path fill="#EC663B" d="M359.8 16.8c2.8 3 4.5 6.7 4.8 10.8h5.4c-.3-5.4-2.5-10.5-6.3-14.5-3.8-3.9-8.7-6.3-14-6.9l-.3 5.4c3.9.4 7.6 2.3 10.4 5.2zM347.2 6c-5.9 0-11.5 2.2-15.7 6.3l3.7 3.9c3.2-3.1 7.4-4.8 11.8-4.8l.2-5.4c.1 0 .1 0 0 0zm12.1 35.4l3.7 3.9c2-1.9 3.6-4.1 4.8-6.5l-5.2-1.7c-.9 1.5-2 3-3.3 4.3zM370 29.9h-5.4c-.1 1.7-.5 3.4-1.1 5l5.2 1.7c.7-2.2 1.2-4.4 1.3-6.7z"/><path fill="#EC663B" d="M355.1 24c.7 1.1 1.1 2.3 1.3 3.6h5.4c-.2-2.7-1.2-5.2-2.8-7.4l-3.9 3.8zm-1.5 11.6l3.7 3.9c2.7-2.5 4.2-5.9 4.5-9.6h-5.4c-.3 2.2-1.2 4.2-2.8 5.7zM337 18.2l3.7 3.9c1.6-1.5 3.7-2.4 5.9-2.6l.3-5.4c-3.7.1-7.2 1.6-9.9 4.1zm20.5.2c-2.3-2.2-5.1-3.6-8.2-4.1l-.3 5.4c1.8.3 3.4 1.2 4.7 2.4l3.8-3.7z"/><path fill="#FFF" d="M347.2 28.6l-.2.1h.2"/><path fill="#EC663B" d="M0 18.1V18c0-2.2.8-3.9 2.3-5.2s3.2-2 5-2.1h.8c1 0 2 .3 3 .7s1.7 1.1 2.3 2v-2.5H15v14.3h-1.6v-2.4c-.5.9-1.3 1.5-2.2 2-1 .4-1.9.7-3 .8H6.8c-1.7-.2-3.2-.9-4.7-2.1C.7 22.1 0 20.4 0 18.4V18.1c.1.1.1.1 0 0 .1 0 .1 0 0 0zm2.1-.4v.4c0 1.6.5 2.9 1.5 4s2.5 1.6 4.5 1.6c1.4 0 2.5-.5 3.5-1.5.9-1 1.5-2.2 1.6-3.4v-1.3c-.2-1.4-.7-2.5-1.7-3.4-.9-.9-2.1-1.3-3.7-1.4h-.3c-1.2 0-2.3.4-3.2 1.1-.9.7-1.5 1.6-1.9 2.5-.1.3-.2.5-.2.7s-.1.5-.1.7c0-.1 0-.1 0 0zM18.8 6h1.8v7.1c.6-.8 1.4-1.4 2.5-1.9 1-.5 2.1-.8 3.2-.8.3 0 .7 0 1 .1.3 0 .7.1 1 .2.6.2 1.2.4 1.7.7.6.3 1.1.7 1.6 1.3.6.6 1.1 1.3 1.4 2.2s.5 1.8.6 2.8v.8c0 1.2-.3 2.3-.9 3.4-.6 1.1-1.4 1.9-2.5 2.5-.4.2-.8.4-1.2.5-.4.1-.9.2-1.3.3-.2 0-.4.1-.6.1h-1.2c-1-.1-2-.3-3-.7-1-.4-1.8-1-2.4-1.7v2.4h-1.8V6h.1zm3 15.6c.8 1.2 2.2 1.9 4.3 1.9h.4c1.5-.1 2.8-.7 3.8-1.7s1.5-2.4 1.5-4.2c0-1.4-.6-2.7-1.8-3.8-1.2-1.1-2.5-1.7-3.9-1.7-.3 0-.7.1-1 .2-.4.1-.8.3-1.2.5-.8.4-1.6 1.1-2.2 1.9-.7.8-1 1.8-1 2.9-.1 1.4.3 2.8 1.1 4zm16.6-9c1.3-1.2 2.7-1.8 4.2-2h1c1.1 0 2.2.3 3.2.9 1 .5 1.7 1.2 2.2 2.1V11h2v12.3c0 2.4-.7 4.3-2.2 5.5s-3.1 1.8-4.9 1.8h-.4c-1.4-.1-2.8-.6-4.1-1.5s-2.2-2.2-2.7-3.9h1.8c.4 1.1 1.1 1.9 2 2.4s1.8.9 2.8.9h.6c1.3-.1 2.5-.5 3.6-1.5 1.1-.9 1.6-2.2 1.6-3.9v-.8c-.3.8-1 1.5-2.1 2-1.2.5-2.4.8-3.7.8h-1c-1.5-.2-2.9-.8-4.2-1.9s-1.9-2.8-1.9-5.1v-.4c.2-2.1.9-3.9 2.2-5.1zm0 4.9v.4c0 1.6.4 2.9 1.3 4s2.2 1.6 3.8 1.6c1.4 0 2.7-.4 3.8-1.3s1.7-2.4 1.7-4.6c0-1.3-.5-2.4-1.5-3.3-1-1-2.1-1.5-3.3-1.7h-.7c-1.1.1-2 .4-2.7.9s-1.2 1-1.6 1.6c-.3.5-.6.9-.7 1.4-.1.4-.2.8-.2 1 .1-.1.1-.1.1 0zm17.5-4.9c1.5-1.2 3-1.8 4.8-1.9h.4c1.8 0 3.4.7 4.9 1.9s2.2 3 2.2 5.4v.6H55.6c.2 1.7.8 2.9 1.8 3.6 1 .8 2 1.2 3.1 1.3h.8c1.1-.1 2.1-.4 3-.9.9-.6 1.6-1.3 1.8-2.1h2c-.6 1.6-1.5 2.9-2.7 3.6-1.2.8-2.5 1.2-3.8 1.2h-.5c-1.8 0-3.5-.7-5.1-2-1.5-1.3-2.3-3.1-2.4-5.3.1-2.4.9-4.2 2.3-5.4zm8.6 1.2c-.9-.9-2-1.4-3.4-1.5-1.2.1-2.2.4-2.9.9s-1.3 1-1.7 1.5c-.3.5-.6.9-.7 1.3-.1.4-.2.7-.3.9h10.8c-.3-1.2-1-2.2-1.8-3.1zm8-1.1c1.4-1.4 3.3-2.1 5.6-2.1 2 0 3.7.6 5.1 1.9s2 2.9 2 4.8c0 2.5-.7 4.4-2.1 5.8s-3.1 2.1-5.3 2.1c-2 0-3.8-.6-5.2-1.9-1.4-1.3-2.2-3.1-2.3-5.6.1-1.9.8-3.5 2.2-5zm1.4 9c.9 1 1.9 1.6 3 1.7H78c1.3-.1 2.5-.7 3.6-1.6 1.1-1 1.6-2.5 1.6-4.5 0-1.4-.5-2.5-1.6-3.4s-2.3-1.3-3.7-1.4h-.4c-1.4 0-2.6.5-3.6 1.5-.9 1-1.5 2.2-1.5 3.8.1 1.6.6 3 1.5 3.9zm14-10.9h1.8v1.9c.4-.7 1-1.3 1.6-1.6.7-.3 1.5-.5 2.5-.5v2.1c-.2 0-.4 0-.6.1-.2 0-.4.1-.6.2-.7.2-1.4.6-2 1.2-.6.6-.9 1.3-.9 2.2v8.8h-1.8V10.8zM98 12.4c1.4-1.1 2.9-1.7 4.6-1.8h1.3c.9.1 1.8.4 2.6.8.9.4 1.6 1 2.1 1.8V6h1.6v19.1h-1.6v-2.6c-.6.8-1.3 1.5-2.1 1.9-.8.4-1.7.7-2.6.8h-1c-1.8 0-3.5-.7-5-2s-2.3-3.1-2.3-5.4v-.5c.2-2.1 1-3.8 2.4-4.9zm-.6 4.9v.5c0 1.5.4 2.8 1.3 4s2.3 1.9 4.3 1.9h.5c.2 0 .3 0 .5-.1 1.1-.3 2.1-.9 3.1-1.9.9-1 1.4-2.3 1.4-3.8v-.3c0-.3 0-.6-.1-1s-.3-.8-.5-1.2c-.4-.7-.9-1.4-1.7-1.9-.8-.6-1.8-.9-3.2-.9-.3 0-.7 0-1 .1-.4.1-.8.2-1.2.4-.8.3-1.5.8-2.2 1.5s-1 1.6-1.1 2.6c-.1 0-.1 0-.1.1zm16.5-6.5h1.8v1.9c.4-.6 1-1 1.8-1.4.7-.3 1.5-.6 2.3-.7h.8c1.4 0 2.7.5 3.9 1.4 1.2.9 1.8 2.4 1.8 4.3v8.8h-1.9v-8.8c0-1.3-.4-2.3-1.3-3-.8-.7-1.8-1-2.8-1.1H119.7c-1.1 0-2 .4-2.9 1.1-.9.7-1.3 1.6-1.3 2.9v8.9h-1.8V10.8h.2zm17.5 1.8c1.5-1.2 3-1.8 4.8-1.9h.4c1.8 0 3.4.7 4.9 1.9s2.2 3 2.2 5.4v.6H131c.2 1.7.8 2.9 1.8 3.6 1 .8 2 1.2 3.1 1.3h.8c1.1-.1 2.1-.4 3-.9.9-.6 1.6-1.3 1.8-2.1h2c-.6 1.6-1.5 2.9-2.7 3.6-1.2.8-2.5 1.2-3.8 1.2h-.5c-1.8 0-3.5-.7-5.1-2-1.5-1.3-2.3-3.1-2.4-5.3.1-2.4.9-4.2 2.4-5.4zm8.5 1.2c-.9-.9-2-1.4-3.4-1.5-1.2.1-2.2.4-2.9.9s-1.3 1-1.7 1.5c-.3.5-.6.9-.7 1.3-.1.4-.2.7-.3.9h10.8c-.3-1.2-.9-2.2-1.8-3.1zm5.5-.9V11h2.8V6.2h1.8V11h3.3v1.9H150v12.2h-1.8V12.9h-2.8zm11.9-.3c1.5-1.2 3-1.8 4.8-1.9h.4c1.8 0 3.4.7 4.9 1.9s2.2 3 2.2 5.4v.6H157c.2 1.7.8 2.9 1.8 3.6 1 .8 2 1.2 3.1 1.3h.8c1.1-.1 2.1-.4 3-.9.9-.6 1.6-1.3 1.8-2.1h2c-.6 1.6-1.5 2.9-2.7 3.6-1.2.8-2.5 1.2-3.8 1.2h-.5c-1.8 0-3.5-.7-5.1-2-1.5-1.3-2.3-3.1-2.4-5.3.1-2.4.9-4.2 2.3-5.4zm8.6 1.2c-.9-.9-2-1.4-3.4-1.5-1.2.1-2.2.4-2.9.9s-1.3 1-1.7 1.5c-.3.5-.6.9-.7 1.3-.1.4-.2.7-.3.9h10.8c-.3-1.2-.9-2.2-1.8-3.1zm6.5-3h1.8v1.9c.4-.6 1-1 1.8-1.4.7-.3 1.5-.6 2.3-.7h.8c1.4 0 2.7.5 3.9 1.4s1.8 2.4 1.8 4.3v8.8H183v-8.8c0-1.3-.4-2.3-1.3-3-.8-.7-1.8-1-2.8-1.1h-.6c-1.1 0-2 .4-2.9 1.1-.9.7-1.3 1.6-1.3 2.9v8.9h-1.8V10.8h.1zM374.2 0l-22.4.1-19.3.9s-9.2-1-9.2 4.5-.4 17.7-.4 17.7v16.9c0 1.7-1.2 9.8 2.8 11.4 4 1.6 6.5 1.7 9.3 1.7s19.2-1.1 19.2-1.1h12.5s11.2 1.2 11.2-6.5.7-20.8.7-20.8l.2-14.1c.2 0 1.2-10.3-4.6-10.7zm.3 26.5c-.1 1.6-.5 15.2-.5 18.8s-3.2 3.3-3.2 3.3-7.8-.1-9.2 0c-1.3.1-9.7 0-19.2.2-9.6.2-12.4.1-14.7-1-2.3-1.1-1.3-6.5-1.5-9.4-.1-2.9-.6-10.2-.6-10.2l-.2-8.9v-4.2s.6-3.4.9-7 6-4.2 7.5-4.2 17.4-.6 17.4-.6 16.8-1 20-.9 2.9 3.9 2.9 3.9-.2 3.4-.2 7.8c-.2 4.5.7 10.8.6 12.4z"/><path fill="#575756" d="M194.5 25.1h-2.3L186.8 11h2l4.5 11.6 3.2-9.9h1.6l3.3 9.9 4.4-11.6h2.1l-5.3 14.1h-2.2l-3.1-8.8-2.8 8.8zm15.4-7V18c0-2.2.8-3.9 2.3-5.2s3.2-2 5-2.1h.8c1 0 2 .3 3 .7s1.7 1.1 2.3 2v-2.5h1.6v14.3h-1.6v-2.4c-.5.9-1.3 1.5-2.2 2-1 .4-1.9.7-3 .8h-1.4c-1.7-.2-3.2-.9-4.7-2.1-1.4-1.2-2.1-2.8-2.1-4.8V18.4c.1-.2.1-.2 0-.3.1 0 .1 0 0 0zm2.1-.4v.4c0 1.6.5 2.9 1.5 4s2.5 1.6 4.5 1.6c1.4 0 2.5-.5 3.5-1.5.9-1 1.5-2.2 1.6-3.4v-1.3c-.2-1.4-.7-2.5-1.7-3.4-.9-.9-2.1-1.3-3.7-1.4h-.3c-1.2 0-2.3.4-3.2 1.1-.9.7-1.5 1.6-1.9 2.5-.1.3-.2.5-.2.7s-.1.5-.1.7c0-.1 0-.1 0 0zm15.4-4.8V11h2.8V6.2h1.8V11h3.3v1.9H232v12.2h-1.8V12.9h-2.8zm12.2-.5c1.5-1.3 3.2-2 5.1-2h1c1.2.2 2.3.6 3.4 1.3 1.1.7 2 1.8 2.7 3.2h-2.2c-.4-.9-1.1-1.5-1.9-2-.9-.4-1.8-.6-2.8-.6h-.4c-.9.1-1.9.3-2.7.8-.9.4-1.5 1-1.8 1.8l-.3.6c-.1.2-.1.4-.2.6-.1.3-.2.6-.2.9-.1.3-.1.6-.1.9 0 .7.1 1.4.4 2 .3.6.6 1.2 1 1.6.2.2.5.4.7.6s.5.4.7.5c.5.3 1 .5 1.5.6s1 .2 1.4.2c1 0 2-.3 2.8-.8.9-.5 1.5-1.1 1.9-1.8 0 0 0-.1.1-.1l.1-.1h2.2c-.8 1.3-1.6 2.2-2.6 2.9-1 .7-2 1.2-3 1.4-.3.1-.5.1-.8.1h-.8c-1.9 0-3.7-.7-5.2-2.1s-2.3-3.1-2.3-5.3c0-2 .8-3.8 2.3-5.2zm15-6.4h1.8v6.7c.6-.7 1.2-1.2 1.9-1.5.7-.3 1.4-.5 2.1-.6h.4c1.6 0 3 .6 4.3 1.8s1.9 2.5 1.9 4v8.8h-2v-8.8c-.2-1.2-.7-2.2-1.5-2.8s-1.6-1-2.5-1.1h-.4c-1 0-2 .4-2.9 1.1-.9.7-1.3 1.7-1.3 3.1v8.6h-1.8V6zm16.6 15.7h2v3.4h-2v-3.4zm8.5-9.3c1.4-1.1 2.9-1.7 4.6-1.8h1.3c.9.1 1.8.4 2.6.8.9.4 1.6 1 2.1 1.8V6h1.6v19.1h-1.6v-2.6c-.6.8-1.3 1.5-2.1 1.9-.8.4-1.7.7-2.6.8h-1c-1.8 0-3.5-.7-5-2s-2.3-3.1-2.3-5.4v-.5c.1-2.1 1-3.8 2.4-4.9zm-.7 4.9v.5c0 1.5.4 2.8 1.3 4s2.3 1.9 4.3 1.9h.5c.2 0 .3 0 .5-.1 1.1-.3 2.1-.9 3.1-1.9.9-1 1.4-2.3 1.4-3.8v-.3c0-.3 0-.6-.1-1s-.3-.8-.5-1.2c-.4-.7-.9-1.4-1.7-1.9-.8-.6-1.8-.9-3.2-.9-.3 0-.7 0-1 .1-.4.1-.8.2-1.2.4-.8.3-1.5.8-2.2 1.5s-1 1.6-1.2 2.7c0-.1 0-.1 0 0zm18.3-4.7c1.5-1.2 3.1-1.8 4.8-1.9h.4c1.8 0 3.4.7 4.9 1.9s2.2 3 2.2 5.4v.6H297c.2 1.7.8 2.9 1.8 3.6 1 .8 2 1.2 3.1 1.3h.8c1.1-.1 2.1-.4 3-.9.9-.6 1.6-1.3 1.8-2.1h2c-.6 1.6-1.5 2.9-2.7 3.6-1.2.8-2.5 1.2-3.8 1.2h-.5c-1.8 0-3.5-.7-5.1-2-1.5-1.3-2.3-3.1-2.4-5.3 0-2.4.8-4.2 2.3-5.4zm8.6 1.2c-.9-.9-2-1.4-3.4-1.5-1.2.1-2.2.4-2.9.9-.7.5-1.3 1-1.7 1.5-.3.5-.6.9-.7 1.3-.1.4-.2.7-.3.9h10.8c-.4-1.2-1-2.2-1.8-3.1zM105.1 44l-1.3-4.2c-.1-.3-.2-.8-.5-1.7h-.1c-.2.8-.3 1.3-.5 1.7l-1.3 4.1h-1.2l-1.9-7.1h1.1c.5 1.8.8 3.1 1 4.1.2.9.4 1.6.4 1.9h.1c0-.2.1-.6.2-1s.2-.7.3-.9l1.3-4.1h1.2l1.3 4.1c.2.7.4 1.4.5 1.9h.1c0-.2.1-.4.1-.7.1-.3.5-2.1 1.3-5.2h1.1l-2 7.1h-1.2zm7.5.1c-1 0-1.9-.3-2.5-1-.6-.6-.9-1.5-.9-2.7 0-1.1.3-2 .8-2.7.6-.7 1.3-1 2.3-1 .9 0 1.6.3 2.1.9s.8 1.4.8 2.3v.7h-4.9c0 .8.2 1.5.6 1.9s1 .6 1.7.6c.8 0 1.5-.2 2.3-.5v1c-.4.2-.7.3-1.1.4-.3.1-.7.1-1.2.1zm-.3-6.4c-.6 0-1 .2-1.4.6-.3.4-.5.9-.6 1.5h3.7c0-.7-.2-1.2-.5-1.6s-.6-.5-1.2-.5zM117 35c0-.2.1-.4.2-.5.1-.1.3-.2.5-.2s.3.1.4.2c.1.1.2.3.2.5s-.1.4-.2.5-.3.2-.4.2c-.2 0-.3-.1-.5-.2s-.2-.2-.2-.5zm1.1 9H117v-7.1h1.1V44zm3.4 0h-1.1V34h1.1v10zm8-.7h.5s.3-.1.4-.1v.8c-.1.1-.3.1-.5.1s-.4.1-.6.1c-1.4 0-2.1-.7-2.1-2.2v-4.2h-1v-.5l1-.4.5-1.5h.6V37h2.1v.8h-2.1V42c0 .4.1.8.3 1s.5.3.9.3zm5.6-6.5c.3 0 .6 0 .8.1l-.1 1c-.3-.1-.6-.1-.8-.1-.6 0-1.1.2-1.5.7-.4.5-.6 1-.6 1.7V44h-1.1v-7.1h.9l.1 1.3h.1c.3-.5.6-.8.9-1.1s.9-.3 1.3-.3zm6.5 7.2l-.2-1h-.1c-.4.4-.7.7-1.1.9-.4.2-.8.2-1.3.2-.7 0-1.3-.2-1.7-.5-.4-.4-.6-.9-.6-1.5 0-1.4 1.1-2.2 3.4-2.2h1.2v-.4c0-.6-.1-1-.4-1.2s-.6-.4-1.1-.4c-.6 0-1.3.2-2 .5l-.3-.8c.3-.2.7-.3 1.1-.4.4-.1.8-.2 1.3-.2.8 0 1.5.2 1.9.6.4.4.6 1 .6 1.8V44h-.7zm-2.4-.7c.7 0 1.2-.2 1.6-.5.4-.4.6-.9.6-1.5v-.6h-1.1c-.9 0-1.5.2-1.8.4s-.6.6-.6 1.1c0 .4.1.7.4.9s.5.2.9.2zm10.3.7v-4.6c0-.6-.1-1-.4-1.3-.3-.3-.7-.4-1.2-.4-.7 0-1.3.2-1.6.6-.3.4-.5 1.1-.5 2V44h-1.1v-7.1h.9l.2 1h.1c.2-.3.5-.6.9-.8s.8-.3 1.3-.3c.9 0 1.5.2 1.9.6.4.4.6 1.1.6 2V44h-1.1zm7.8-1.9c0 .7-.2 1.2-.7 1.5-.5.4-1.2.5-2.1.5-.9 0-1.7-.1-2.2-.4v-1c.3.2.7.3 1.1.4.4.1.8.1 1.1.1.6 0 1-.1 1.3-.3.3-.2.5-.5.5-.8 0-.3-.1-.5-.4-.7-.2-.2-.7-.4-1.4-.7-.7-.2-1.1-.5-1.4-.6s-.5-.4-.6-.6c-.1-.2-.2-.5-.2-.8 0-.6.2-1 .7-1.4.5-.3 1.1-.5 1.9-.5.8 0 1.5.2 2.2.5l-.4.9c-.7-.3-1.4-.4-1.9-.4s-.9.1-1.2.2c-.3.2-.4.4-.4.7 0 .2 0 .4.1.5.1.1.3.3.5.4.2.1.6.3 1.2.5.8.3 1.4.6 1.7.9.5.2.6.6.6 1.1zm5.1 2c-.5 0-.9-.1-1.3-.3s-.7-.4-1-.8h-.1c.1.4.1.8.1 1.2v2.9H159V36.9h.9l.1 1h.1c.3-.4.6-.7 1-.8s.8-.3 1.3-.3c.9 0 1.7.3 2.2 1 .5.6.8 1.5.8 2.7 0 1.2-.3 2.1-.8 2.7-.6.6-1.3.9-2.2.9zm-.2-6.4c-.7 0-1.2.2-1.6.6s-.5 1-.5 1.9v.2c0 1 .2 1.7.5 2.1.3.4.9.6 1.6.6.6 0 1.1-.2 1.4-.7s.5-1.2.5-2c0-.9-.2-1.6-.5-2-.3-.5-.8-.7-1.4-.7zm9.3 6.3l-.2-1h-.1c-.4.4-.7.7-1.1.9-.4.2-.8.2-1.3.2-.7 0-1.3-.2-1.7-.5-.4-.4-.6-.9-.6-1.5 0-1.4 1.1-2.2 3.4-2.2h1.2v-.4c0-.6-.1-1-.4-1.2s-.6-.4-1.1-.4c-.6 0-1.3.2-2 .5l-.3-.8c.3-.2.7-.3 1.1-.4.4-.1.8-.2 1.3-.2.8 0 1.5.2 1.9.6.4.4.6 1 .6 1.8V44h-.7zm-2.4-.7c.7 0 1.2-.2 1.6-.5.4-.4.6-.9.6-1.5v-.6h-1.1c-.9 0-1.5.2-1.8.4s-.6.6-.6 1.1c0 .4.1.7.4.9s.5.2.9.2zm8.7-6.5c.3 0 .6 0 .8.1l-.1 1c-.3-.1-.6-.1-.8-.1-.6 0-1.1.2-1.5.7-.4.5-.6 1-.6 1.7V44h-1.1v-7.1h.9l.1 1.3h.1c.3-.5.6-.8.9-1.1s.8-.3 1.3-.3zm5.1 7.3c-1 0-1.9-.3-2.5-1s-.9-1.5-.9-2.7c0-1.1.3-2 .8-2.7.6-.7 1.3-1 2.3-1 .9 0 1.6.3 2.1.9s.8 1.4.8 2.3v.7h-4.9c0 .8.2 1.5.6 1.9.4.4 1 .6 1.7.6.8 0 1.5-.2 2.3-.5v1c-.4.2-.7.3-1.1.4-.3.1-.7.1-1.2.1zm-.3-6.4c-.6 0-1 .2-1.4.6-.3.4-.5.9-.6 1.5h3.7c0-.7-.2-1.2-.5-1.6-.2-.3-.6-.5-1.2-.5zm9.6 6.3v-4.6c0-.6-.1-1-.4-1.3-.3-.3-.7-.4-1.2-.4-.7 0-1.3.2-1.6.6-.3.4-.5 1.1-.5 2V44h-1.1v-7.1h.9l.2 1h.1c.2-.3.5-.6.9-.8s.8-.3 1.3-.3c.9 0 1.5.2 1.9.6s.6 1.1.6 2V44h-1.1zm7.8 0h-5.1v-.7l3.9-5.5h-3.6V37h4.8v.8l-3.8 5.4h3.9v.8zm6.7 0l-2.7-7.1h1.2l1.5 4.2c.3 1 .5 1.6.6 1.9h.1c0-.2.2-.7.4-1.4.3-.7.8-2.3 1.7-4.7h1.2L208 44h-1.3zm8 .1c-1 0-1.9-.3-2.5-1s-.9-1.5-.9-2.7c0-1.1.3-2 .8-2.7s1.3-1 2.3-1c.9 0 1.6.3 2.1.9.5.6.8 1.4.8 2.3v.7h-4.9c0 .8.2 1.5.6 1.9s1 .6 1.7.6c.8 0 1.5-.2 2.3-.5v1c-.4.2-.7.3-1.1.4-.3.1-.7.1-1.2.1zm-.3-6.4c-.6 0-1 .2-1.4.6-.3.4-.5.9-.6 1.5h3.7c0-.7-.2-1.2-.5-1.6-.2-.3-.6-.5-1.2-.5zm8-.9c.3 0 .6 0 .8.1l-.1 1c-.3-.1-.6-.1-.8-.1-.6 0-1.1.2-1.5.7-.4.5-.6 1-.6 1.7V44h-1.1v-7.1h.9l.1 1.3h.1c.3-.5.6-.8.9-1.1s.8-.3 1.3-.3zm4.4 6.5h.5s.3-.1.4-.1v.8c-.1.1-.3.1-.5.1s-.4.1-.6.1c-1.4 0-2.1-.7-2.1-2.2v-4.2h-1v-.5l1-.4.5-1.5h.6V37h2.1v.8h-2.1V42c0 .4.1.8.3 1 .3.1.6.3.9.3zm5.7-6.5c.3 0 .6 0 .8.1l-.1 1c-.3-.1-.6-.1-.8-.1-.6 0-1.1.2-1.5.7-.4.5-.6 1-.6 1.7V44h-1.1v-7.1h.9l.1 1.3h.1c.3-.5.6-.8.9-1.1s.8-.3 1.3-.3zM239 44l-.2-1h-.1c-.4.4-.7.7-1.1.9-.4.2-.8.2-1.3.2-.7 0-1.3-.2-1.7-.5-.4-.4-.6-.9-.6-1.5 0-1.4 1.1-2.2 3.4-2.2h1.2v-.4c0-.6-.1-1-.4-1.2-.2-.3-.6-.4-1.1-.4-.6 0-1.3.2-2 .5l-.3-.8c.3-.2.7-.3 1.1-.4.4-.1.8-.2 1.3-.2.8 0 1.5.2 1.9.6.4.4.6 1 .6 1.8V44h-.7zm-2.4-.7c.7 0 1.2-.2 1.6-.5.4-.4.6-.9.6-1.5v-.6h-1.1c-.9 0-1.5.2-1.8.4s-.6.6-.6 1.1c0 .4.1.7.4.9.1.1.4.2.9.2zm6.4-6.4v4.6c0 .6.1 1 .4 1.3s.7.4 1.2.4c.7 0 1.3-.2 1.6-.6s.5-1.1.5-2v-3.7h1.1V44h-.8l-.2-.9h-.1c-.2.3-.5.6-.9.8-.4.2-.8.3-1.3.3-.9 0-1.5-.2-1.9-.6-.4-.4-.6-1.1-.6-2V37h1zm10.1 7.2c-1 0-1.9-.3-2.5-1-.6-.6-.9-1.5-.9-2.7 0-1.1.3-2 .8-2.7s1.3-1 2.3-1c.9 0 1.6.3 2.1.9s.8 1.4.8 2.3v.7h-4.9c0 .8.2 1.5.6 1.9s1 .6 1.7.6c.8 0 1.5-.2 2.3-.5v1c-.4.2-.7.3-1.1.4-.3.1-.7.1-1.2.1zm-.3-6.4c-.6 0-1 .2-1.4.6-.3.4-.5.9-.6 1.5h3.7c0-.7-.2-1.2-.5-1.6-.2-.3-.6-.5-1.2-.5zm9.6 6.3v-4.6c0-.6-.1-1-.4-1.3-.3-.3-.7-.4-1.2-.4-.7 0-1.3.2-1.6.6s-.5 1.1-.5 2V44h-1.1v-7.1h.9l.2 1h.1c.2-.3.5-.6.9-.8.4-.2.8-.3 1.3-.3.9 0 1.5.2 1.9.6.4.4.6 1.1.6 2V44h-1.1zm11.3-1.9c0 .7-.2 1.2-.7 1.5-.5.4-1.2.5-2.1.5-.9 0-1.7-.1-2.2-.4v-1c.3.2.7.3 1.1.4.4.1.8.1 1.1.1.6 0 1-.1 1.3-.3.3-.2.5-.5.5-.8 0-.3-.1-.5-.4-.7-.2-.2-.7-.4-1.4-.7-.7-.2-1.1-.5-1.4-.6s-.5-.4-.6-.6c-.1-.2-.2-.5-.2-.8 0-.6.2-1 .7-1.4s1.1-.5 1.9-.5c.8 0 1.5.2 2.2.5l-.4.9c-.7-.3-1.4-.4-1.9-.4s-.9.1-1.2.2c-.3.2-.4.4-.4.7 0 .2 0 .4.1.5.1.1.3.3.5.4s.6.3 1.2.5c.8.3 1.4.6 1.7.9.4.2.6.6.6 1.1zm4.5 2c-1 0-1.8-.3-2.4-.9-.6-.6-.8-1.5-.8-2.7 0-1.2.3-2.1.9-2.7.6-.6 1.4-1 2.4-1 .3 0 .7 0 1 .1.3.1.6.2.8.3l-.3.9c-.2-.1-.5-.2-.8-.2-.3-.1-.5-.1-.7-.1-1.4 0-2.2.9-2.2 2.8 0 .9.2 1.5.5 2 .4.5.9.7 1.6.7.6 0 1.2-.1 1.8-.4v.9c-.4.2-1 .3-1.8.3zm8.4-.1v-4.6c0-.6-.1-1-.4-1.3-.3-.3-.7-.4-1.2-.4-.7 0-1.3.2-1.6.6s-.5 1.1-.5 2V44h-1.1V34h1.1v3c0 .4 0 .7-.1.9h.1c.2-.3.5-.6.9-.8.4-.2.8-.3 1.3-.3.9 0 1.5.2 1.9.6.4.4.6 1.1.6 2V44h-1zm7.6 0l-.2-1h-.1c-.4.4-.7.7-1.1.9-.4.2-.8.2-1.3.2-.7 0-1.3-.2-1.7-.5-.4-.4-.6-.9-.6-1.5 0-1.4 1.1-2.2 3.4-2.2h1.2v-.4c0-.6-.1-1-.4-1.2-.2-.3-.6-.4-1.1-.4-.6 0-1.3.2-2 .5l-.3-.8c.3-.2.7-.3 1.1-.4.4-.1.8-.2 1.3-.2.8 0 1.5.2 1.9.6.4.4.6 1 .6 1.8V44h-.7zm-2.4-.7c.7 0 1.2-.2 1.6-.5.4-.4.6-.9.6-1.5v-.6h-1.1c-.9 0-1.5.2-1.8.4-.4.2-.6.6-.6 1.1 0 .4.1.7.4.9.1.1.4.2.9.2zm8.6-5.5h-1.8V44h-1.1v-6.2h-1.3v-.5l1.3-.4v-.4c0-1.7.8-2.6 2.3-2.6.4 0 .8.1 1.3.2l-.3.9c-.4-.1-.8-.2-1.1-.2-.4 0-.7.1-.9.4-.2.3-.3.7-.3 1.3v.5h1.8v.8zm4.5 0h-1.8V44H302v-6.2h-1.3v-.5l1.3-.4v-.4c0-1.7.8-2.6 2.3-2.6.4 0 .8.1 1.3.2l-.3.9c-.4-.1-.8-.2-1.1-.2-.4 0-.7.1-.9.4s-.3.7-.3 1.3v.5h1.8v.8zm3.6 5.5h.5s.3-.1.4-.1v.8c-.1.1-.3.1-.5.1s-.4.1-.6.1c-1.4 0-2.1-.7-2.1-2.2v-4.2h-1v-.5l1-.4.5-1.5h.6V37h2.1v.8h-2.1V42c0 .4.1.8.3 1s.5.3.9.3z"/></svg>
          </div>
        </a>
        <?php endif; ?>

        <?php print render($page['header_top']); ?>

      </div>
      <?php if ($page['header_bottom']): ?>
      <div class="header__bottom">
        <?php print render($page['header_bottom']); ?>
      </div>
      <?php endif; ?>
    </header>

    <?php print $messages; ?>

    <main id="content">
      <a id="main-content"></a>
      <div class="container">
        <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
        <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
      </div>
      <?php if ($render_content_container): ?><div class="container"><h1><?php print $title ?></h1><?php endif; ?>
        <?php print render($page['content']); ?>
        <?php print $feed_icons; ?>
      <?php if ($render_content_container): ?></div><?php endif; ?>
      <?php print render($page['content_tabs']); ?>
      <?php print render($page['content_extra']); ?>
    </main>

    <footer id="footer">
      <div class="container">
        <div class="footer__maincol">
          <div class="footer__maincol__col">
            <strong><i class="icon icon-bundestag"></i> Bundestag</strong>
            <ul class="footer__maincol__col__nav">
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Abstimmungen</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Abgeordnete</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Petitionen</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Ausschüsse</a></li>
              <li class="footer__maincol__col__nav__item">
                <?php print l( t('Suffrage'), 'node/7752', array('attributes' => array('class' => array('footer__maincol__col__nav__item__link'))) ); ?>
              </li>
            </ul>
          </div>
          <div class="footer__maincol__col">
            <strong><i class="icon icon-de"></i> Landtag</strong>
            <ul class="footer__maincol__col__nav">
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Baden-Württemberg</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Bayern</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Berlin</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Brandenburg</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Bremen</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Hamburg</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Hessen</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Mecklenburg-Vorpommern</a></li>
            </ul>
          </div>
          <div class="footer__maincol__col">
            <strong>&nbsp;</strong>
            <ul class="footer__maincol__col__nav">
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Niedersachsen</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Nordrhein-Westfalen</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Rheinland-Pfalz</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Saarland</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Sachsen</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Sachsen-Anhalt</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Schleswig-Holstein</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Thüringen</a></li>
            </ul>
          </div>
          <div class="footer__maincol__col">
            <strong><i class="icon icon-de"></i> EU-Parlament</strong>
            <ul class="footer__maincol__col__nav">
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Abstimmungen</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Abgeordnete</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Petitionen</a></li>
              <li class="footer__maincol__col__nav__item"><a href="#" class="footer__maincol__col__nav__item__link">Ausschüsse</a></li>
              <li class="footer__maincol__col__nav__item">
                <?php print l( t('Suffrage'), 'node/7754', array('attributes' => array('class' => array('footer__maincol__col__nav__item__link'))) ); ?>
              </li>
            </ul>
          </div>
          <div class="footer__maincol__col">
            <strong><i class="icon icon-logo-aw"></i> Über das Projekt</strong>
            <ul class="footer__maincol__col__nav">
              <li class="footer__maincol__col__nav__item">
                <?php print l( t('About us'), 'node/7760', array('attributes' => array('class' => array('footer__maincol__col__nav__item__link'))) ); ?>
              </li>
              <li class="footer__maincol__col__nav__item">
                <?php print l( t('Board of Trustees'), 'node/7735', array('attributes' => array('class' => array('footer__maincol__col__nav__item__link'))) ); ?>
              </li>
              <li class="footer__maincol__col__nav__item">
                <?php print l( t('Moderation Codex'), 'node/7734', array('attributes' => array('class' => array('footer__maincol__col__nav__item__link'))) ); ?>
              </li>
              <li class="footer__maincol__col__nav__item">
                <?php print l( t('Financing'), 'node/7757', array('attributes' => array('class' => array('footer__maincol__col__nav__item__link'))) ); ?>
              </li>
              <li class="footer__maincol__col__nav__item">
                <?php print l( t('Imprint'), 'node/7732', array('attributes' => array('class' => array('footer__maincol__col__nav__item__link'))) ); ?>
              </li>
            </ul>
          </div>
          <div class="footer__maincol__col">
            <strong>&nbsp;</strong>
            <ul class="footer__maincol__col__nav">
              <li class="footer__maincol__col__nav__item">
                <?php print l( t('Support the project'), 'node/10508', array('attributes' => array('class' => array('footer__maincol__col__nav__item__link'))) ); ?>
              </li>
              <li class="footer__maincol__col__nav__item">
                <?php print l( t('Get info material'), 'node/7747', array('attributes' => array('class' => array('footer__maincol__col__nav__item__link'))) ); ?>
              </li>
              <li class="footer__maincol__col__nav__item">
                <?php print l( t('Privacy'), 'node/10006', array('attributes' => array('class' => array('footer__maincol__col__nav__item__link'))) ); ?>
              </li>
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
    </footer>
  </div>