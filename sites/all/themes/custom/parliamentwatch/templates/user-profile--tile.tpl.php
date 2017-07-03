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
  <div class="deputy__image">
    <?php print render($user_profile['field_user_picture']); ?>
    <?php print render($user_profile['field_user_picture_copyright']); ?>
  </div>

  <h2 class="deputy__title mh-item"><?php print $display_name; ?></h2>
  <div class="deputy__party-indicator"><?php print render($user_profile['field_user_party']); ?></div>
  <div class="deputy__stats hstats hstats--2">
    <div class="hstats__item hstats__item--digit">
      <span class="hstats__item__display mh-item-nr" data-mh="hstats"><?php print $questions; ?></span>
      <span class="hstats__item__label mh-item-nr" data-mh="hstats">
        <?php print format_plural($questions, t('Question'), t('Questions')) ?>
      </span>
    </div>
    <div class="hstats__item hstats__item--donut">
      <span class="hstats__item__display mh-item-nr" data-mh="hstats">
        <span class="d3 d3--gauge"
              data-d3-gauge
              data-percentage="<?php print $answer_ratio; ?>"
              data-track-width="10"
              data-track-colour="ccc"
              data-fill-colour="f46b3b"
              data-text-colour="444"
              data-stroke-colour="FFFFFF"
              data-stroke-spacing="2">
          <span><?php print $answer_ratio; ?>%</span>
        </span>
      </span>
      <span class="hstats__item__label mh-item-nr" data-mh="hstats"><?php print t('beantwortet') ?></span>
    </div>
  </div>
  <ul class="deputy__links tile__links tile__links--2">
    <li class="tile__links__item"><a class="tile__links__item__link" href="<?php print $user_url ?>#fragen"><?php print t('Jetzt befragen') ?></a></li>
    <li class="tile__links__item"><a class="tile__links__item__link" href="<?php print $user_url ?>"><?php print t('Details') ?></a></li>
  </ul>
</div>
