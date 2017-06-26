<?php

/**
 * @file
 * Default theme implementation to display a block.
 *
 * Available variables:
 * - $block->subject: Block title.
 * - $content: Block content.
 * - $block->module: Module that generated the block.
 * - $block->delta: An ID for the block, unique within each module.
 * - $block->region: The block region embedding the current block.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - block: The current template type, i.e., "theming hook".
 *   - block-[module]: The module generating the block. For example, the user
 *     module is responsible for handling the default user navigation block. In
 *     that case the class would be 'block-user'.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Helper variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $block_zebra: Outputs 'odd' and 'even' dependent on each block region.
 * - $zebra: Same output as $block_zebra but independent of any block region.
 * - $block_id: Counter dependent on each block region.
 * - $id: Same output as $block_id but independent of any block region.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 * - $block_html_id: A valid HTML ID and guaranteed unique.
 *
 * @see template_preprocess()
 * @see template_preprocess_block()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<section id="<?php print $block_html_id; ?>" class="<?php print $classes; ?> tabs__content--qa">
  <div class="container">
    <div class="tabs__content__title option-title">
      <h2><a href="#<?php print $block_html_id ?>"><?php print $block->subject; ?></a></h2>
      <?php print render($title_suffix) ?>
      <a href="#" class="btn btn--white btn--mobile-block">Alle Fragen in der Übersicht</a>
    </div>
    <div class="tabs__content__content">
      <div class="swiper-container swiper-container--tile">
        <div class="swiper-wrapper">
          <?php print $content; ?>
        </div>
        <div class="swiper-button-prev"></div>
        <a href="#" class="btn btn--large-white">Alle Fragen in der Übersicht</a>
        <div class="swiper-button-next"></div>
      </div>
      <div class="tab-qa-stats">
        <div class="row">
          <div class="tab-qa-stats__col">
            <div class="hstats__item hstats__item--donut-digit">
              <div class="hstats__item__display mh-item-nr" data-mh="qa_hstats">
                <span class="d3 d3--gauge"
                    data-d3-gauge
                    data-percentage="<?php print $block->answer_ratio ?>"
                    data-track-width="16"
                    data-track-colour="f6997a"
                    data-fill-colour="ffffff"
                    data-text-colour="ffffff"
                    data-stroke-colour="f68a66"
                    data-stroke-spacing="2">
                  <span>%</span>
                </span>
              </div>
              <div class="hstats__item__label mh-item-nr" data-mh="qa_hstats">
                <?php print t('@answers of total<br>@questions questions answered', ['@answers' => $block->answers, '@questions' => $block->questions]); ?>
              </div>
            </div>
            <div class="hstats__item hstats__item--digit">
              <span class="hstats__item__display mh-item-nr" data-mh="qa_hstats">5</span>
              <span class="hstats__item__label mh-item-nr" data-mh="qa_hstats"><?php print t('Questioner per question') ?></span>
            </div>
          </div>
          <div class="tab-qa-stats__col">
            <div class="hstats__item hstats__item--digit">
              <span class="hstats__item__display mh-item-nr" data-mh="qa_hstats"><?php print $block->average_response_time; ?></span>
              <span class="hstats__item__label mh-item-nr" data-mh="qa_hstats"><?php print t('average time to answer') ?></span>
            </div>
          </div>
          <div class="tab-qa-stats__col--large">
            <strong><?php print t('Questions by category') ?></strong>
            <span class='d3 d3--bars-vertical'
                data-d3-bars-vert
                data-data='parseDialogues'
                data-height='100'
                data-fill-colour='ffffff'
                data-stroke-colour='f68a66'>
              <span class="tooltip d3__tooltip"></span>
            </span>
          </div>
        </div>
      </div>
    </div>
  </div>
  <div class="tabs__content__content">
    <div class="container">
      <div class="row">
        <div class="question-form">
          <h2><?php print t('Ask question') ?></h2>
          <?php
            print render($block->question_form['body']);
            print render($block->question_form['webform']);
          ?>
        </div>
        <div class="question-side">
          <div class="question-side__item">
            <div class="info-element info-element--icon">
              <h3><?php print t('Moderation') ?></h3>
              <p>
                <?php print t('The unblocking of questions can vary depending on the user\'s volume. Some hours, as all incoming questions are checked by a moderator team. I have read the moderation code and ensured that my question does not violate this. <a href="">Call moderation code</a> If my question can not be released, I will be informed by a moderator. For reasons of legal certainty, your IP address is stored, but not published or passed on to third parties. Further information is available in our Privacy Policy.') ?>
              </p>
            </div>
            <div class="info-element info-element--icon">
              <h3><?php print t('Data protection') ?></h3>
              <p>
                <?php print t('Data protection - Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum.') ?>
              </p>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
</section>
