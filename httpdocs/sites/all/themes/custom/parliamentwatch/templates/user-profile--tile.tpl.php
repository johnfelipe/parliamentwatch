<?php

/**
 * @file
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * Use render($user_profile) to print all profile items, or print a subset
 * such as render($user_profile['field_user_picture']). Always call
 * render($user_profile) at the end in order to print all remaining items. If
 * the item is a category, it will contain all its profile items. By default,
 * $user_profile['summary'] is provided, which contains data on the user's
 * history. Other data can be included by modules. $user_profile['user_picture']
 * is available for showing the account picture.
 *
 * Available variables:
 *   - $user_profile: An array of profile items. Use render() to print them.
 *   - $user_url: The URL to the detail page of the profile.
 *   - $display_name: The display name.
 *   - $field_user_picture: The profile picture.
 *   - $field_user_picture_copyright: The profile picture's copyright.
 *   - $field_user_constituency: The constituency.
 *   - $field_user_party: The party.
 *   - $questions: The number of questions the user has received.
 *   - $answers: The number of questions the user has answered.
 *   - $answer_ratio: The percentage of answered questions.
 *
 * @see user-profile-category.tpl.php
 *   Where the html is handled for the group.
 * @see user-profile-item.tpl.php
 *   Where the html is handled for each item in the group.
 * @see template_preprocess_user_profile()
 *
 * @ingroup themeable
 */
?>

<div class="deputy tile"<?php print $attributes; ?>>
  <figure class="deputy__image">
    <a href="<?php print $user_url ?>" class="deputy__image__inner">
      <?php print render($user_profile['field_user_picture']); ?>
    </a>
    <?php if (!empty(trim(render($user_profile['field_user_picture_copyright'])))): ?>
      <figcaption class="figcaption-ext" data-popover-small data-popover-content="©&nbsp;<?php print htmlspecialchars(render($user_profile['field_user_picture_copyright']['#items'][0]['value']));?>" data-popover-placement="top"><span class="sr-only">©&nbsp;<?php print render($user_profile['field_user_picture_copyright']['#items'][0]['value']);?></span></figcaption>
    <?php endif; ?>
  </figure>
  <h2 class="deputy__title mh-item"><a href="<?php print $user_url ?>"><?php print $display_name; ?></a></h2>
  <div class="deputy__party-indicator"><?php print render($user_profile['field_user_party']); ?></div>
  <div class="deputy__stats hstats hstats--2">
    <div class="hstats__item hstats__item--digit">
      <span class="hstats__item__display" data-mh="hstats"><?php print $questions; ?></span>
      <span class="hstats__item__label" data-mh="hstats">
        <?php print format_plural($questions, 'Question', 'Questions') ?>
      </span>
    </div>
    <div class="hstats__item hstats__item--donut">
      <span class="hstats__item__display" data-mh="hstats">
        <span class="d3 d3--gauge"
              data-d3-gauge
              data-percentage="<?php print $answer_ratio; ?>"
              data-track-width="10"
              data-track-colour="ccc"
              data-fill-colour="f26a3b"
              data-text-colour="444"
              data-stroke-colour="FFFFFF"
              data-stroke-spacing="2">
          <span><?php print $answer_ratio; ?>%</span>
        </span>
      </span>
      <span class="hstats__item__label" data-mh="hstats"><?php print t('answered') ?></span>
    </div>
  </div>
  <ul class="deputy__links tile__links tile__links--2">
    <?php if ($is_consultable): ?>
    <li class="tile__links__item">
      <a class="tile__links__item__link" href="<?php print $user_url ?>#question-form-anchor"><?php print t('Ask now') ?></a>
    </li>
    <?php endif; ?>
    <li class="tile__links__item">
      <a class="tile__links__item__link" href="<?php print $user_url ?>"><?php print t('Open profile') ?></a>
    </li>
  </ul>
</div>
