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
<section id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>">
  <div class="container">
    <div class="tabs__content__title">
      <h2><a href="#<?php print $block_html_id; ?>"><?php print $block->subject; ?></a></h2>
      <?php print render($title_suffix) ?>
    </div>
    <div class="tabs__content__content">
      <div class="sidejob-overview">
        <span class="d3 d3--bars-secondary-income data-d3-secondary-income"></span>
        <div class="table-wrapper">
          <table cellpadding="0" cellspacing="0" class="table table--sortable table--secondary-income">
            <thead>
              <tr>
                <th class="sidejob-overview__item__customer" data-sort="string"><?php print t('Customer') ?></th>
                <th class="sidejob-overview__item__activity" data-sort="string"><?php print t('Activity') ?></th>
                <th class="sidejob-overview__item__city" data-sort="string"><?php print t('City') ?></th>
                <th class="sidejob-overview__item__date" data-sort="string"><?php print t('Date') ?></th>
                <th class="sidejob-overview__item__level" data-sort="int"><?php print t('Income level') ?></th>
              </tr>
            </thead>
            <tbody>
              <?php print $content; ?>
            </tbody>
          </table>
        </div>
      </div>
    </div>
  </div>
</section>
