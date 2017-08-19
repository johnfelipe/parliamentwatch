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

<div class="lp-teaser <?php if (empty($block->archive)): ?>lp-teaser--two<?php endif; ?>">
  <div class="lp-teaser__item lp-teaser__item--kc">

    <?php if (!empty($block->kc_url)): ?>
    <a href="<?php print $block->kc_url; ?>" class="lp-teaser__item__logo">
    <?php else: ?>
    <a href="https://kandidatencheck.abgeordnetenwatch.de" class="lp-teaser__item__logo">
    <?php endif; ?>
      <img src="/<?php print drupal_get_path('theme', 'parliamentwatch'); ?>/images/logo-kc.svg" alt="<?php print t('Logo of Kandidaten-Check') ?>">
    </a>
    <p class="mh-item"><?php print t('Which politician of your constituency is the right choice for you? Make the Kandidaten-Check!') ?></p>
    <?php if (!empty($block->kc_url)): ?>
      <a href="<?php print $block->kc_url; ?>" class="btn"><?php print t('Start the Kandidaten-Check') ?></a>
      <?php else: ?>
      <a href="https://kandidatencheck.abgeordnetenwatch.de" class="btn"><?php print t('Start the Kandidaten-Check') ?></a>
    <?php endif; ?>
  </div>
  <div class="lp-teaser__item lp-teaser__item--wahrplakat">
    <a href="https://wahrplakat.abgeordnetenwatch.de/" class="lp-teaser__item__logo"><img src="/<?php print drupal_get_path('theme', 'parliamentwatch'); ?>/images/logo-wahrplakat.png" alt="<?php print t('Logo of #wahrplakat') ?>"></a>
    <p class="mh-item"><?php print t('How did the deouties voted over the last 4 years? Make a #wahrplakat with just a few clicks.') ?></p>
    <a href="https://wahrplakat.abgeordnetenwatch.de/" class="btn"><?php print t('Make #wahrplakat') ?></a>
  </div>
  <?php if (!empty($block->archive)): ?>
  <div class="lp-teaser__item lp-teaser__item--archive">
    <div class="lp-teaser__item__centered">
      <h3><?php print $block->parliament; ?>: <span><?php print t('Archive') ?></span></h3>
      <ul>
        <li><strong>Bundestag 2013-2017:</strong> <a href="#">Abgeordnete</a>, <a href="#">Kandidierende</a>, <a href="#">Abstimmungen</a>, <a href="#">Petitionen</a></li>
        <li><strong>Bundestag 2009-2013:</strong> <a href="#">Abgeordnete</a>, <a href="#">Kandidierende</a>, <a href="#">Abstimmungen</a></li>
        <li><strong>Bundestag 2005-2009:</strong> <a href="#">Abgeordnete</a>, <a href="#">Kandidierende</a>, <a href="#">Abstimmungen</a></li>
      </ul>
      <?php if (!empty($block->electoral_law_reference)): ?>
        <a href="<?php print drupal_get_path_alias('node/'. $block->electoral_law_reference ); ?>" class="lp-teaser__item--archive__link"><i class="icon icon-signing"></i> <?php print t('More about suffrage') ?></a>
      <?php endif; ?>
    </div>
  </div>
  <?php endif; ?>
</div>

