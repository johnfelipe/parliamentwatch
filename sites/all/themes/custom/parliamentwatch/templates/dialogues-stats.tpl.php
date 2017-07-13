<?php

/**
 * @file
 * Default theme implementation to display dialogues statistics.
 *
 * Available variables:
 * - $questions: The number of questions given.
 * - $answers: The number of answers given.
 * - $answer_ratio: The percentage of answered questions.
 * - $average_response_time: The average response time in days.
 *
 * @ingroup themeable
 */
?>
<div class="qa-stats">
  <div class="qa-stats__col">
    <div class="hstats__item hstats__item--donut-digit">
      <div class="hstats__item__display mh-item-nr" data-mh="qa_hstats">
        <span class="d3 d3--gauge"
            data-d3-gauge
            data-percentage="<?php print $answer_ratio ?>"
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
        <?php print t('@answers of total<br>@questions questions answered', ['@answers' => $answers, '@questions' => $questions]); ?>
      </div>
    </div>
  </div>
  <div class="qa-stats__col">
    <div class="hstats__item hstats__item--digit">
      <span class="hstats__item__display mh-item-nr" data-mh="qa_hstats"><?php print $average_response_time; ?></span>
      <span class="hstats__item__label mh-item-nr" data-mh="qa_hstats"><?php print t('average time to answer') ?></span>
    </div>
  </div>
  <div class="qa-stats__col--large">
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
