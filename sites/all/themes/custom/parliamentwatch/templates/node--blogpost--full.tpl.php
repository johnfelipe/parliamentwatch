<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<article id="node-<?php print $node->nid; ?>" class="blog detail <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="blog__header">
    <?php print render($content['field_teaser_image'][und][0][uri]); ?>
    <div class="blog__header__content">
      <?php print render($title_prefix); ?>
        <h1<?php print $title_attributes; ?>><?php print $title; ?></h1>
        <?php print render($content['field_blogpost_intro']);  ?>
      <?php print render($title_suffix); ?>
    </div>
    <div class="blog__header__bg" style="background-image: url('<?php print file_create_url($node->field_teaser_image[und][0]['uri']); ?>')"></div>
  </div>
  <div class="blog__submitted">
    <div class="container">
      <div class="blog__submitted__date">
        <?php if ($display_submitted): ?>
          <?php print $submitted; ?>
        <?php endif; ?>
      </div>
      <div class="blog__submitted__tags">
        <?php print render($content['field_blogpost_blogtags']); ?>
        <?php print render($content['field_blogpost_categories']); ?>
      </div>
    </div>
  </div>

  <div class="blog__content" <?php print $content_attributes; ?>>
    <div class="container">
      <?php print render($content['body']); ?>
    </div>
  </div>

  <div class="share">
    <div class="container">
      <h3><?php print t('Share this blog article with your friends') ?></h3>
      <ul class="share__links">
        <li class="share__links__item share__links__item--facebook"><a class="share__links__item__link" href="#"><i class="icon icon-facebook"></i> <span>teilen</span></a></li>
        <li class="share__links__item share__links__item--twitter"><a class="share__links__item__link" href="#"><i class="icon icon-twitter"></i> <span>tweet</span></a></li>
        <li class="share__links__item share__links__item--google"><a class="share__links__item__link" href="#"><i class="icon icon-google-plus"></i> <span>+1</span></a></li>
        <li class="share__links__item share__links__item--whatsapp"><a class="share__links__item__link" href="#"><i class="icon icon-whatsapp"></i> <span>WhatsApp</span></a></li>
        <li class="share__links__item share__links__item--mail"><a class="share__links__item__link" href="#"><i class="icon icon-mail"></i> <span>e-mail</span></a></li>
      </ul>
    </div>
  </div>
  <div class="comment-teaser">
    <div class="container">
      <h3><a href="#comments" data-localScroll>(<?php print $comment_count ?>) <?php print t('Comments') ?></a></h3>
      <a href="#comments" data-localScroll class="btn btn--mobile-block"><?php print t('Jump to comments') ?></a>
    </div>
  </div>

  <div class="blog__related">
    <div class="tabs">
      <div class="tabs__navigation">
        <div class="container">
          <ul class="nav nav--tab">
            <li class="nav__item nav__item--active"><a class="nav__item__link" href="#aehnliche-artikel" data-tab-content="aehnliche-artikel"><?php print t('Related articles') ?></a></li>
            <li class="nav__item"><a class="nav__item__link" href="#erwaehnte-abgeordnete" data-tab-content="erwaehnte-abgeordnete"><?php print t('Related deputies') ?></a></li>
            <li class="nav__item"><a class="nav__item__link" href="#erwaehnte-abstimmungen" data-tab-content="erwaehnte-abstimmungen"><?php print t('Related votes') ?></a></li>
          </ul>
        </div>
      </div>
      <section id="aehnliche-artikel" class="tabs__content tabs__content--active" data-tab-content="aehnliche-artikel">
        <div class="container">
          <div class="tabs__content__title option-title">
            <h2><a href="#" data-tab-content="aehnliche-artikel"><?php print t('Related articles') ?></a></h2>
          </div>
          <div class="tabs__content__content">
            <div class="blog-list">
              <article id="node-" class="blog tile">
                <div class="tile__image">
                  <img typeof="foaf:Image" src="http://localhost:8080/sites/default/files/styles/pw_landscape_l/public/blog/hausausweisantrag_280.png?itok=hI93nIp8" width="280" height="187" alt="Ausschnitt Hausausweisantrag des Deutschen Bundestages" title="Ausschnitt Hausausweisantrag des Deutschen Bundestages">
                </div>
                <header class="tile__title tile__title--date mh-item">
              <span class="date">
                22 Jun 2017
              </span>
                  <h3><a href="#">lorem ipsum dolor sit amet</a></h3>
                </header>
                <ul class="tile__links tile__links--2">
                  <li class="tile__links__item"><a class="tile__links__item__link" href="#kommentare">12 Kommentare</a></li>
                  <li class="tile__links__item"><a class="tile__links__item__link" href="#">Weiterlesen</a></li>
                </ul>
              </article>
              <article id="node-" class="blog tile">
                <div class="tile__image">
                  <img typeof="foaf:Image" src="http://localhost:8080/sites/default/files/styles/pw_landscape_l/public/blog/hausausweisantrag_280.png?itok=hI93nIp8" width="280" height="187" alt="Ausschnitt Hausausweisantrag des Deutschen Bundestages" title="Ausschnitt Hausausweisantrag des Deutschen Bundestages">
                </div>
                <header class="tile__title tile__title--date mh-item">
              <span class="date">
                22 Jun 2017
              </span>
                  <h3><a href="#">lorem ipsum dolor sit amet</a></h3>
                </header>
                <ul class="tile__links tile__links--2">
                  <li class="tile__links__item"><a class="tile__links__item__link" href="#kommentare">12 Kommentare</a></li>
                  <li class="tile__links__item"><a class="tile__links__item__link" href="#">Weiterlesen</a></li>
                </ul>
              </article>
              <article id="node-" class="blog tile">
                <div class="tile__image">
                  <img typeof="foaf:Image" src="http://localhost:8080/sites/default/files/styles/pw_landscape_l/public/blog/hausausweisantrag_280.png?itok=hI93nIp8" width="280" height="187" alt="Ausschnitt Hausausweisantrag des Deutschen Bundestages" title="Ausschnitt Hausausweisantrag des Deutschen Bundestages">
                </div>
                <header class="tile__title tile__title--date mh-item">
              <span class="date">
                22 Jun 2017
              </span>
                  <h3><a href="#">lorem ipsum dolor sit amet</a></h3>
                </header>
                <ul class="tile__links tile__links--2">
                  <li class="tile__links__item"><a class="tile__links__item__link" href="#kommentare">12 Kommentare</a></li>
                  <li class="tile__links__item"><a class="tile__links__item__link" href="#">Weiterlesen</a></li>
                </ul>
              </article>
            </div>
          </div>
        </div>
      </section>
      <section id="erwaehnte-abgeordnete" class="tabs__content" data-tab-content="erwaehnte-abgeordnete">
        <div class="container">
          <div class="tabs__content__title option-title">
            <h2><a href="#" data-tab-content="erwaehnte-abgeordnete"><?php print t('Related deputies') ?></a></h2>
          </div>
          <div class="tabs__content__content">
          </div>
        </div>
      </section>
      <section id="erwaehnte-abstimmungen" class="tabs__content" data-tab-content="erwaehnte-abstimmungen">
        <div class="container">
          <div class="tabs__content__title option-title">
            <h2><a href="#" data-tab-content="erwaehnte-abstimmungen"><?php print t('Related votes') ?></a></h2>
          </div>
          <div class="tabs__content__content">
          </div>
        </div>
      </section>
    </div>
  </div>

  <?php print render($content['comments']); ?>
</article>
