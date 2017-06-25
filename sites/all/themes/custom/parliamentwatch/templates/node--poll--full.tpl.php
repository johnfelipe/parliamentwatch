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
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?> data-poll-id="<?php print $node->nid; ?>">
  <div class="intro">
    <div class="container">
      <div class="row">
        <div class="intro__left">
          <h1><?php print $title; ?></h1>
          <div class="intro__date"><?php print render($content['field_poll_date']); ?></div>
          <?php print render($content['body']['#items'][0]['safe_summary']); ?>
          <a href="#poll-content" class="link-icon" data-localScroll><i class="icon icon-arrow-right"></i> Weiterlesen</a>
        </div>
        <div class="intro__right">
          <div class="poll_overview">
            <div class="poll_overview__primary">
              <div class="poll_overview__primary__item">
                <div class="poll_overview__primary__label"><?php print t('Accepeted') ?></div>
                <div class="poll_overview__primary__value">467</div>
              </div>
              <div class="poll_overview__primary__item">
                <div class="poll_overview__primary__label"><?php print t('Denied') ?></div>
                <div class="poll_overview__primary__value">168</div>
              </div>
              <i class="icon icon-ok"></i>
            </div>
            <div class="poll_overview__secondary">
              <div class="row">
                <div class="poll_overview__secondary__item">
                  <div class="poll_overview__secondary__label"><?php print t('Abstentions') ?></div>
                  <div class="poll_overview__secondary__value">9</div>
                </div>
                <div class="poll_overview__secondary__item">
                  <div class="poll_overview__secondary__label"><?php print t('Not matched') ?></div>
                  <div class="poll_overview__secondary__value">53</div>
                </div>
                <div class="poll_overview__secondary__item">
                  <div class="poll_overview__secondary__label"><?php print t('Invalid') ?></div>
                  <div class="poll_overview__secondary__value">-</div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
  <div class="filterbar">
    <div class="container">
      <div class="filterbar__pre_swiper">
        <div class="filterbar__item filterbar__item--label">
          <i class="icon icon-investigation"></i> <?php print t('Filter') ?>
        </div>
        <div class="filterbar__item filterbar__item--input">
          <label for="filter_textsearch" class="sr-only"></label>
          <input type="text" id="filter_textsearch" class="form__item__control" placeholder="<?php print t('Zip code or name of politician') ?>">
          <button class="btn"><i class="icon icon-search"></i></button>
        </div>
      </div>
      <div class="filterbar__swiper">
        <div class="filterbar__swiper__inner">
          <div class="filterbar__item filterbar__item--checkbox">
            <div class="form__item--checkbox">
              <label for="filter_vote_behavior_accepeted"><input type="checkbox" class="form__item__control" id="filter_vote_behavior_accepeted"> <?php print t('Accepeted') ?></label>
              <label for="filter_vote_behavior_denied"><input type="checkbox" class="form__item__control" id="filter_vote_behavior_denied"> <?php print t('Denied') ?></label>
              <label for="filter_vote_behavior_abstentions"><input type="checkbox" class="form__item__control" id="filter_vote_behavior_abstentions"> <?php print t('Abstentions') ?></label>
            </div>
          </div>
          <div class="filterbar__item filterbar__item--dropdown dropdown">
            <a href="#" class="dropdown__trigger"><?php print t('Political field') ?> <i class="icon icon-arrow-down"></i></a>
            <div class="dropdown__list">
              test
            </div>
          </div>
          <div class="filterbar__item filterbar__item--dropdown dropdown">
            <a href="#" class="dropdown__trigger"><?php print t('Politician age') ?> <i class="icon icon-arrow-down"></i></a>
            <div class="dropdown__list">
              test
            </div>
          </div>
        </div>
        <div class="swiper-button-prev"></div>
        <div class="swiper-button-next"></div>
      </div>
      <ul class="filterbar__view_options">
        <li class="filterbar__view_options__item filterbar__view_options__item--active"><a href="#" class="filterbar__view_options__item__link"><i class="icon icon-th-list"></i></a></li>
        <!-- <li class="filterbar__view_options__item"><a href="#" class="filterbar__view_options__item__link"><i class="icon icon-plenum"></i></a></li> -->
        <li class="filterbar__view_options__item"><a href="#" class="filterbar__view_options__item__link"><i class="icon icon-bar-chart"></i></a></li>
        <!-- <li class="filterbar__view_options__item"><a href="#" class="filterbar__view_options__item__link"><i class="icon icon-de"></i></a></li> -->
      </ul>
    </div>
  </div>
  <div class="poll_detail">
    <div class="container">
      <div class="poll_detail__table">
        <table cellpadding="0" cellspacing="0" class="table table--sortable table--poll-votes">
          <thead>
          <tr>
            <th class="poll_detail__table__item__picture"></th>
            <th class="poll_detail__table__item__name" data-sort="string"><?php print t('Customer') ?></th>
            <th class="poll_detail__table__item__fraction" data-sort="string"><?php print t('Fraction') ?></th>
            <th class="poll_detail__table__item__constituency" data-sort="string"><?php print t('Constituency') ?></th>
            <th class="poll_detail__table__item__voting_behavior" data-sort="int"><?php print t('Voting behavior') ?></th>
          </tr>
          </thead>
          <tbody>
          <tr>
            <td class="poll_detail__table__item__picture"><span><img src="http://via.placeholder.com/150x150" alt=""></span></td>
            <td class="poll_detail__table__item__name">Dr. Gregor Gysi (63)</td>
            <td class="poll_detail__table__item__fraction"><span class="party-indicator">DIE LINKE</span></td>
            <td class="poll_detail__table__item__constituency">Berlin <i class="icon icon-arrow-right"></i> Berlin-Treptow-Köpenick</td>
            <td class="poll_detail__table__item__voting_behavior">Mit ‚Ja‘ abgestimmt <i class="icon icon-ok"></i></td>
          </tr>
          <tr>
            <td class="poll_detail__table__item__picture"><span><img src="http://via.placeholder.com/150x150" alt=""></span></td>
            <td class="poll_detail__table__item__name">Dr. Gregor Gysi (63)</td>
            <td class="poll_detail__table__item__fraction"><span class="party-indicator">DIE LINKE</span></td>
            <td class="poll_detail__table__item__constituency">Berlin <i class="icon icon-arrow-right"></i> Berlin-Treptow-Köpenick</td>
            <td class="poll_detail__table__item__voting_behavior">Mit ‚Ja‘ abgestimmt <i class="icon icon-ok"></i></td>
          </tr>
          <tr>
            <td class="poll_detail__table__item__picture"><span><img src="http://via.placeholder.com/150x150" alt=""></span></td>
            <td class="poll_detail__table__item__name">Dr. Gregor Gysi (63)</td>
            <td class="poll_detail__table__item__fraction"><span class="party-indicator">DIE LINKE</span></td>
            <td class="poll_detail__table__item__constituency">Berlin <i class="icon icon-arrow-right"></i> Berlin-Treptow-Köpenick</td>
            <td class="poll_detail__table__item__voting_behavior">Mit ‚Ja‘ abgestimmt <i class="icon icon-ok"></i></td>
          </tr>
          <tr>
            <td class="poll_detail__table__item__picture"><span><img src="http://via.placeholder.com/150x150" alt=""></span></td>
            <td class="poll_detail__table__item__name">Dr. Gregor Gysi (63)</td>
            <td class="poll_detail__table__item__fraction"><span class="party-indicator">DIE LINKE</span></td>
            <td class="poll_detail__table__item__constituency">Berlin <i class="icon icon-arrow-right"></i> Berlin-Treptow-Köpenick</td>
            <td class="poll_detail__table__item__voting_behavior">Mit ‚Ja‘ abgestimmt <i class="icon icon-ok"></i></td>
          </tr>
          </tbody>
        </table>
      </div>
    </div>
  </div>

  <div class="poll__timeline__container">
    <div class="poll__timeline">
      <h2>Die Abstimmung auf dem Zeitstrahl</h2>
      <div class="poll__timeline__inner">
        <div class="poll__timeline__item">
          <div class="poll__timeline__item__date">15.12.2016</div>
          <div class="poll__timeline__item__poll" data-poll-id="#node->id">
              <span class="poll__timeline__item__poll__title">
                <i class="icon icon-ok"></i> Bekämpfung der Schwarzarbeit
              </span>
            <span class="poll__timeline__item__poll__result">
                <span class="poll__timeline__item__poll__result__accepted">Ja <strong>467</strong></span>
                <span class="poll__timeline__item__poll__result__denied">Nein <strong>467</strong></span>
                <i class="icon icon-ok"></i>
              </span>
          </div>
          <div class="poll__timeline__item__poll" data-poll-id="#node->id">
              <span class="poll__timeline__item__poll__title">
                <i class="icon icon-ok"></i> Bekämpfung der Schwarzarbeit
              </span>
            <span class="poll__timeline__item__poll__result">
                <span class="poll__timeline__item__poll__result__accepted">Ja <strong>467</strong></span>
                <span class="poll__timeline__item__poll__result__denied">Nein <strong>467</strong></span>
                <i class="icon icon-ok"></i>
              </span>
          </div>
          <div class="poll__timeline__item__poll" data-poll-id="#node->id">
              <span class="poll__timeline__item__poll__title">
                <i class="icon icon-ok"></i> Bekämpfung der Schwarzarbeit
              </span>
            <span class="poll__timeline__item__poll__result">
                <span class="poll__timeline__item__poll__result__accepted">Ja <strong>467</strong></span>
                <span class="poll__timeline__item__poll__result__denied">Nein <strong>467</strong></span>
                <i class="icon icon-ok"></i>
              </span>
          </div>
          <div class="poll__timeline__item__poll" data-poll-id="#node->id">
              <span class="poll__timeline__item__poll__title">
                <i class="icon icon-ok"></i> Bekämpfung der Schwarzarbeit
              </span>
            <span class="poll__timeline__item__poll__result">
                <span class="poll__timeline__item__poll__result__accepted">Ja <strong>467</strong></span>
                <span class="poll__timeline__item__poll__result__denied">Nein <strong>467</strong></span>
                <i class="icon icon-ok"></i>
              </span>
          </div>
          <div class="poll__timeline__item__poll" data-poll-id="#node->id">
              <span class="poll__timeline__item__poll__title">
                <i class="icon icon-ok"></i> Bekämpfung der Schwarzarbeit
              </span>
            <span class="poll__timeline__item__poll__result">
                <span class="poll__timeline__item__poll__result__accepted">Ja <strong>467</strong></span>
                <span class="poll__timeline__item__poll__result__denied">Nein <strong>467</strong></span>
                <i class="icon icon-ok"></i>
              </span>
          </div>
        </div>
        <div class="poll__timeline__item">
          <div class="poll__timeline__item__date">15.12.2016</div>
          <div class="poll__timeline__item__poll" data-poll-id="#node->id">
              <span class="poll__timeline__item__poll__title">
                <i class="icon icon-ok"></i> Bekämpfung der Schwarzarbeit
              </span>
            <span class="poll__timeline__item__poll__result">
                <span class="poll__timeline__item__poll__result__accepted">Ja <strong>467</strong></span>
                <span class="poll__timeline__item__poll__result__denied">Nein <strong>467</strong></span>
                <i class="icon icon-ok"></i>
              </span>
          </div>
          <div class="poll__timeline__item__poll" data-poll-id="#node->id">
              <span class="poll__timeline__item__poll__title">
                <i class="icon icon-ok"></i> Bekämpfung der Schwarzarbeit
              </span>
            <span class="poll__timeline__item__poll__result">
                <span class="poll__timeline__item__poll__result__accepted">Ja <strong>467</strong></span>
                <span class="poll__timeline__item__poll__result__denied">Nein <strong>467</strong></span>
                <i class="icon icon-ok"></i>
              </span>
          </div>
          <div class="poll__timeline__item__poll" data-poll-id="#node->id">
              <span class="poll__timeline__item__poll__title">
                <i class="icon icon-ok"></i> Bekämpfung der Schwarzarbeit
              </span>
            <span class="poll__timeline__item__poll__result">
                <span class="poll__timeline__item__poll__result__accepted">Ja <strong>467</strong></span>
                <span class="poll__timeline__item__poll__result__denied">Nein <strong>467</strong></span>
                <i class="icon icon-ok"></i>
              </span>
          </div>
          <div class="poll__timeline__item__poll" data-poll-id="#node->id">
              <span class="poll__timeline__item__poll__title">
                <i class="icon icon-ok"></i> Bekämpfung der Schwarzarbeit
              </span>
            <span class="poll__timeline__item__poll__result">
                <span class="poll__timeline__item__poll__result__accepted">Ja <strong>467</strong></span>
                <span class="poll__timeline__item__poll__result__denied">Nein <strong>467</strong></span>
                <i class="icon icon-ok"></i>
              </span>
          </div>
          <div class="poll__timeline__item__poll" data-poll-id="#node->id">
              <span class="poll__timeline__item__poll__title">
                <i class="icon icon-ok"></i> Bekämpfung der Schwarzarbeit
              </span>
            <span class="poll__timeline__item__poll__result">
                <span class="poll__timeline__item__poll__result__accepted">Ja <strong>467</strong></span>
                <span class="poll__timeline__item__poll__result__denied">Nein <strong>467</strong></span>
                <i class="icon icon-ok"></i>
              </span>
          </div>
        </div>
        <div class="poll__timeline__item">
          <div class="poll__timeline__item__date">15.12.2016</div>
          <div class="poll__timeline__item__poll" data-poll-id="#node->id">
              <span class="poll__timeline__item__poll__title">
                <i class="icon icon-ok"></i> Bekämpfung der Schwarzarbeit
              </span>
            <span class="poll__timeline__item__poll__result">
                <span class="poll__timeline__item__poll__result__accepted">Ja <strong>467</strong></span>
                <span class="poll__timeline__item__poll__result__denied">Nein <strong>467</strong></span>
                <i class="icon icon-ok"></i>
              </span>
          </div>
          <div class="poll__timeline__item__poll" data-poll-id="123456">
              <span class="poll__timeline__item__poll__title">
                <i class="icon icon-ok"></i> Bekämpfung der Schwarzarbeit
              </span>
            <span class="poll__timeline__item__poll__result">
                <span class="poll__timeline__item__poll__result__accepted">Ja <strong>467</strong></span>
                <span class="poll__timeline__item__poll__result__denied">Nein <strong>467</strong></span>
                <i class="icon icon-ok"></i>
              </span>
          </div>
          <div class="poll__timeline__item__poll" data-poll-id="#node->id">
              <span class="poll__timeline__item__poll__title">
                <i class="icon icon-ok"></i> Bekämpfung der Schwarzarbeit
              </span>
            <span class="poll__timeline__item__poll__result">
                <span class="poll__timeline__item__poll__result__accepted">Ja <strong>467</strong></span>
                <span class="poll__timeline__item__poll__result__denied">Nein <strong>467</strong></span>
                <i class="icon icon-ok"></i>
              </span>
          </div>
          <div class="poll__timeline__item__poll" data-poll-id="#node->id">
              <span class="poll__timeline__item__poll__title">
                <i class="icon icon-ok"></i> Bekämpfung der Schwarzarbeit
              </span>
            <span class="poll__timeline__item__poll__result">
                <span class="poll__timeline__item__poll__result__accepted">Ja <strong>467</strong></span>
                <span class="poll__timeline__item__poll__result__denied">Nein <strong>467</strong></span>
                <i class="icon icon-ok"></i>
              </span>
          </div>
          <div class="poll__timeline__item__poll" data-poll-id="#node->id">
              <span class="poll__timeline__item__poll__title">
                <i class="icon icon-ok"></i> Bekämpfung der Schwarzarbeit
              </span>
            <span class="poll__timeline__item__poll__result">
                <span class="poll__timeline__item__poll__result__accepted">Ja <strong>467</strong></span>
                <span class="poll__timeline__item__poll__result__denied">Nein <strong>467</strong></span>
                <i class="icon icon-ok"></i>
              </span>
          </div>
        </div>
        <div class="poll__timeline__item">
          <div class="poll__timeline__item__date">15.12.2016</div>
          <div class="poll__timeline__item__poll" data-poll-id="#node->id">
              <span class="poll__timeline__item__poll__title">
                <i class="icon icon-ok"></i> Bekämpfung der Schwarzarbeit
              </span>
            <span class="poll__timeline__item__poll__result">
                <span class="poll__timeline__item__poll__result__accepted">Ja <strong>467</strong></span>
                <span class="poll__timeline__item__poll__result__denied">Nein <strong>467</strong></span>
                <i class="icon icon-ok"></i>
              </span>
          </div>
          <div class="poll__timeline__item__poll" data-poll-id="#node->id">
              <span class="poll__timeline__item__poll__title">
                <i class="icon icon-ok"></i> Bekämpfung der Schwarzarbeit
              </span>
            <span class="poll__timeline__item__poll__result">
                <span class="poll__timeline__item__poll__result__accepted">Ja <strong>467</strong></span>
                <span class="poll__timeline__item__poll__result__denied">Nein <strong>467</strong></span>
                <i class="icon icon-ok"></i>
              </span>
          </div>
          <div class="poll__timeline__item__poll" data-poll-id="#node->id">
              <span class="poll__timeline__item__poll__title">
                <i class="icon icon-ok"></i> Bekämpfung der Schwarzarbeit
              </span>
            <span class="poll__timeline__item__poll__result">
                <span class="poll__timeline__item__poll__result__accepted">Ja <strong>467</strong></span>
                <span class="poll__timeline__item__poll__result__denied">Nein <strong>467</strong></span>
                <i class="icon icon-ok"></i>
              </span>
          </div>
          <div class="poll__timeline__item__poll" data-poll-id="#node->id">
              <span class="poll__timeline__item__poll__title">
                <i class="icon icon-ok"></i> Bekämpfung der Schwarzarbeit
              </span>
            <span class="poll__timeline__item__poll__result">
                <span class="poll__timeline__item__poll__result__accepted">Ja <strong>467</strong></span>
                <span class="poll__timeline__item__poll__result__denied">Nein <strong>467</strong></span>
                <i class="icon icon-ok"></i>
              </span>
          </div>
          <div class="poll__timeline__item__poll" data-poll-id="#node->id">
              <span class="poll__timeline__item__poll__title">
                <i class="icon icon-ok"></i> Bekämpfung der Schwarzarbeit
              </span>
            <span class="poll__timeline__item__poll__result">
                <span class="poll__timeline__item__poll__result__accepted">Ja <strong>467</strong></span>
                <span class="poll__timeline__item__poll__result__denied">Nein <strong>467</strong></span>
                <i class="icon icon-ok"></i>
              </span>
          </div>
        </div>
      </div>
    </div>
  </div>
  <div id="poll-content" class="poll__content container">
    <div class="row">
      <div class="poll__content__left">
        <?php print render($content['body']); ?>
      </div>
      <div class="poll__content__right">
        <div class="sidebar-box">
          <h3 class="sidebar-box__headline"><?php print t('Tags'); ?> <i class="icon icon-info" data-tooltip-content="<?php print t('tooltip-poll-tags') ?>"></i></h3>
          <div class="sidebar-box__tag_list">
            <?php print render($content['field_blogpost_categories']); ?>
          </div>
        </div>
      </div>
    </div>
  </div>


  <div class="share">
    <div class="container">
      <h3><?php print t('Share this poll with your friends') ?></h3>
      <ul class="share__links">
        <li class="share__links__item share__links__item--facebook"><a class="share__links__item__link" target="_blank" href="https://www.facebook.com/sharer/sharer.php?u=<?php print drupal_encode_path(url($node_url,array('absolute'=>TRUE))); ?>"><i class="icon icon-facebook"></i> <span>teilen</span></a></li>
        <li class="share__links__item share__links__item--twitter"><a class="share__links__item__link" target="_blank" href="https://twitter.com/home?status=<?php print drupal_encode_path(url($node_url,array('absolute'=>TRUE))); ?>"><i class="icon icon-twitter"></i> <span>tweet</span></a></li>
        <li class="share__links__item share__links__item--google"><a class="share__links__item__link" target="_blank" href="https://plus.google.com/share?url=<?php print drupal_encode_path(url($node_url,array('absolute'=>TRUE))); ?>"><i class="icon icon-google-plus"></i> <span>+1</span></a></li>
        <li class="share__links__item share__links__item--whatsapp"><a class="share__links__item__link" href="whatsapp://send?text=<?php print drupal_encode_path(url($node_url,array('absolute'=>TRUE))); ?>"><i class="icon icon-whatsapp"></i> <span>WhatsApp</span></a></li>
        <li class="share__links__item share__links__item--mail"><a class="share__links__item__link" href="mailto:?&body=<?php print drupal_encode_path(url($node_url,array('absolute'=>TRUE))); ?>"><i class="icon icon-mail"></i> <span>e-mail</span></a></li>
      </ul>
    </div>
  </div>
  <div class="poll__related tile-wrapper">
    <div class="container">
      <h2><?php print t('Related polls') ?></h2>
      <div class="row">
        <div class="tile poll">
          <div class="tile__image">
            <img typeof="foaf:Image" src="/sites/default/files/styles/large/public/bankenviertel_frankfurt.jpg" width="280" height="187" alt="#" title="#">
          </div>
          <div class="tile__date">10.11.2016</div>
          <div class="tile__pollchart">
            <div class="tile__pollchart__value_left won">351</div>
            <div class="tile__pollchart__statistic">
              <div class='d3 d3--donut'
                   data-d3-donut-icon
                   data-data='[{"name":"Ja","count":63,"color":"#9fd773"},{"name":"Nein","count":24,"color":"#cc6c5b"},{"name":"Enthalten","count":8,"color":"#e2e2e2"},{"name":"Nicht abgestimmt","count":2,"color":"#a6a6a6" }]'>
              </div>
            </div>
            <div class="tile__pollchart__value_right">231</div>
          </div>
          <h2 class="tile__title"><a href="#">Bundeswehreinsatzin Afghanistan</a></h2>
          <p class="tile__summary">Mit den Stimmen der Regierungskoalition hat der Bundestag ein Fortsetzung des Bundeswehreinsatzes gegen die Terrormiliz IS beschlossen.</p>
          <ul class="tile__links tile__links--2">
            <li class="tile__links__item"><a class="tile__links__item__link" href="#kommentare">12 Kommentare</a></li>
            <li class="tile__links__item"><a class="tile__links__item__link" href="#">Mehr anzeigen</a></li>
          </ul>
        </div>
        <div class="tile poll">
          <div class="tile__image">
            <img typeof="foaf:Image" src="/sites/default/files/styles/large/public/bankenviertel_frankfurt.jpg" width="280" height="187" alt="#" title="#">
          </div>
          <div class="tile__date">10.11.2016</div>
          <div class="tile__pollchart">
            <div class="tile__pollchart__value_left won">351</div>
            <div class="tile__pollchart__statistic">
              <div class='d3 d3--donut'
                   data-d3-donut-icon
                   data-data='[{"name":"Ja","count":24,"color":"#9fd773"},{"name":"Nein","count":63,"color":"#cc6c5b"},{"name":"Enthalten","count":8,"color":"#e2e2e2"},{"name":"Nicht abgestimmt","count":2,"color":"#a6a6a6" }]'>
              </div>
            </div>
            <div class="tile__pollchart__value_right">231</div>
          </div>
          <h2 class="tile__title"><a href="#">Bundeswehreinsatzin Afghanistan</a></h2>
          <p class="tile__summary">Mit den Stimmen der Regierungskoalition hat der Bundestag ein Fortsetzung des Bundeswehreinsatzes gegen die Terrormiliz IS beschlossen.</p>
          <ul class="tile__links tile__links--2">
            <li class="tile__links__item"><a class="tile__links__item__link" href="#kommentare">12 Kommentare</a></li>
            <li class="tile__links__item"><a class="tile__links__item__link" href="#">Mehr anzeigen</a></li>
          </ul>
        </div>
        <div class="tile poll">
          <div class="tile__image">
            <img typeof="foaf:Image" src="/sites/default/files/styles/large/public/bankenviertel_frankfurt.jpg" width="280" height="187" alt="#" title="#">
          </div>
          <div class="tile__date">10.11.2016</div>
          <div class="tile__pollchart">
            <div class="tile__pollchart__value_left won">351</div>
            <div class="tile__pollchart__statistic">
              <div class='d3 d3--donut'
                   data-d3-donut-icon
                   data-data='[{"name":"Ja","count":8,"color":"#9fd773"},{"name":"Nein","count":24,"color":"#cc6c5b"},{"name":"Enthalten","count":63,"color":"#e2e2e2"},{"name":"Nicht abgestimmt","count":2,"color":"#a6a6a6" }]'>
              </div>
            </div>
            <div class="tile__pollchart__value_right">231</div>
          </div>
          <h2 class="tile__title"><a href="#">Bundeswehreinsatzin Afghanistan</a></h2>
          <p class="tile__summary">Mit den Stimmen der Regierungskoalition hat der Bundestag ein Fortsetzung des Bundeswehreinsatzes gegen die Terrormiliz IS beschlossen.</p>
          <ul class="tile__links tile__links--2">
            <li class="tile__links__item"><a class="tile__links__item__link" href="#kommentare">12 Kommentare</a></li>
            <li class="tile__links__item"><a class="tile__links__item__link" href="#">Mehr anzeigen</a></li>
          </ul>
        </div>
      </div>
    </div>
  </div>

  <div class="poll__question_teaser">
    <div class="container">
      <div class="poll__question_teaser__content">
        <h2><?php print t('Your Voice') ?></h2>
        <p><?php print t('Questions & Answers by topic') ?> Verteidigung und Auswärtiges</p>
        <a class="btn btn--mobile-block"><?php print t('Question overview') ?></a>
      </div>
    </div>
  </div>


  <div class="poll__questions tile-wrapper">
    <div class="container">
      <div class="row">
        <div class="question tile">
          <div class="question__meta tile__meta">
            <a href="#" class="quesion__meta__tag tile__meta__tag">#lorem</a>
            <span class="question__meta__date tile__meta__date">01.01.2017</span>
          </div>
          <div class="question__question mh-item-tile" data-mh="questionTitle">
            <h3 class="question__question__title">Sind Sie [...] der Überzeugung, daß die "laufende Kamera" seinerzeit [...] die Wahrheitsfindung irgendwie beeinflußt haben könnte?</h3>
            <p class="question__question__author"><?php print t('By'); ?>: Wilfried Meißner</p>
          </div>
          <div class="question__answer mh-item-tile" data-mh="questionAnswer">
            <p class="question__answer__author">Antwort von <strong><img src="/sites/default/files/styles/large/public/users/joachim_schuster.png" alt="" class="question__answer__author__image"> Max Mustermann</strong></p>
            <p>Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores ... rebum.</p>
          </div>
          <ul class="question__links tile__links tile__links--2">
            <li class="tile__links__item"><a class="tile__links__item__link" href="#fragen">12 <?php print t('questioner'); ?></a></li>
            <li class="tile__links__item"><a class="tile__links__item__link" href="#"><?php print t('details'); ?></a></li>
          </ul>
        </div>
        <div class="question tile">
          <div class="question__meta tile__meta">
            <a href="#" class="quesion__meta__tag tile__meta__tag">#lorem</a>
            <span class="question__meta__date tile__meta__date">01.01.2017</span>
          </div>
          <div class="question__question mh-item-tile" data-mh="questionTitle">
            <h3 class="question__question__title">Sind Sie [...] der Überzeugung, daß die "laufende Kamera" seinerzeit [...] die Wahrheitsfindung irgendwie beeinflußt haben könnte?</h3>
            <p class="question__question__author"><?php print t('By'); ?>: Wilfried Meißner</p>
          </div>
          <div class="question__answer mh-item-tile" data-mh="questionAnswer">
            <p class="question__answer__author">Antwort von <strong><img src="/sites/default/files/styles/large/public/users/joachim_schuster.png" alt="" class="question__answer__author__image"> Max Mustermann</strong></p>
            <p>Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores ... rebum.</p>
          </div>
          <ul class="question__links tile__links tile__links--2">
            <li class="tile__links__item"><a class="tile__links__item__link" href="#fragen">12 <?php print t('questioner'); ?></a></li>
            <li class="tile__links__item"><a class="tile__links__item__link" href="#"><?php print t('details'); ?></a></li>
          </ul>
        </div>
      </div>
    </div>
  </div>

</article>