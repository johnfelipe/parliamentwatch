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
  <?php if (!empty($answer_ratio_by_party)): ?>
  <div class="qa-stats__left">
  <?php endif; ?>
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
    <div class="qa-stats__col qa-stats__col--large">
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
  <?php if (!empty($answer_ratio_by_party)): ?>
  </div>
  <div class="qa-stats__right">
    <div class="qa-stats__col qa-stats__col--large">
      <div class="qa-stats-behavior" data-expander data-expander-count="3">
        <?php foreach ($answer_ratio_by_party['in_previous_parliament'] as $party => $data): ?>
        <div class="qa-stats-behavior__item" data-expander-item>
          <div class="qa-stats-behavior__item__party">
            <?php if ($before_election): ?>
              <?php print format_plural($data->count_politicians, '<span>@party</span> (1 candidate)', '<span>@party</span> (@count candidates)', ['@party' => $party]); ?>
            <?php else: ?>
              <?php print format_plural($data->count_politicians, '<span>@party</span> (1 deputy)', '<span>@party</span> (@count deputies)', ['@party' => $party]); ?>
            <?php endif; ?>
          </div>
          <div class="vertical-bar" data-value="<?php print $data->percentage; ?>"><span></span></div>
          <div class="qa-stats-behavior__item__info"><?php print t('@count_answers answers / @count_questions questions', ['@count_questions' => $data->count_questions, '@count_answers' => $data->count_answers]); ?></div>
          <div class="qa-stats-behavior__item__info-sub"><?php print t('@percentage % answered', ['@percentage' => round($data->percentage, 2)]) ?></div>
        </div>
        <?php endforeach; ?>
        <?php foreach ($answer_ratio_by_party['not_in_previous_parliament'] as $party => $data): ?>
        <div class="qa-stats-behavior__item" data-expander-item>
          <div class="qa-stats-behavior__item__party">
            <?php if ($before_election): ?>
              <?php print format_plural($data->count_politicians, '<span>@party</span> (1 candidate)', '<span>@party</span> (@count candidates)', ['@party' => $party]); ?>
            <?php else: ?>
              <?php print format_plural($data->count_politicians, '<span>@party</span> (1 deputy)', '<span>@party</span> (@count deputies)', ['@party' => $party]); ?>
            <?php endif; ?>
          </div>
          <div class="vertical-bar" data-value="<?php print $data->percentage; ?>"><span></span></div>
          <div class="qa-stats-behavior__item__info"><?php print t('@count_answers answers / @count_questions questions', ['@count_questions' => $data->count_questions, '@count_answers' => $data->count_answers]); ?></div>
          <div class="qa-stats-behavior__item__info-sub"><?php print t('@percentage % answered', ['@percentage' => round($data->percentage, 2)]) ?></div>
        </div>
        <?php endforeach; ?>
      </div>
    </div>
  </div>
  <?php endif; ?>
</div>
