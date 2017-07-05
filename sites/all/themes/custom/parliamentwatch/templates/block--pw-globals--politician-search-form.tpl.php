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
<div class="lp-header <?php print $classes; ?>">
  <?php print render($title_suffix); ?>
  <div class="lp-header__left">
    <i class="icon <?php print $icon_class; ?>"></i>
  </div>
  <div class="lp-header__right">
    <h2><?php print $block->subject; ?></h2>
    <?php print $content; ?>
  </div>
  <div class="lp-header__bg">
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/26.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/16.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/36.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/1.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/2.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/3.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/4.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/5.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/6.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/7.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/8.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/9.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/20.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/21.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/22.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/23.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/24.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/25.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/26.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/27.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/28.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/29.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/30.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/31.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/32.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/33.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/34.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/35.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/36.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/89.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/18.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/19.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/30.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/31.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/32.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/13.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/14.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/15.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/16.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/17.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/18.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/39.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/30.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/31.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/32.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/33.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/34.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/85.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/86.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/88.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/38.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/39.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/70.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/71.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/72.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/73.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/74.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/75.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/76.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/77.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/71.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/72.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/73.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/34.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/35.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/36.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/37.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/38.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/39.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/30.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/31.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/32.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/33.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/34.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/35.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/36.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/37.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/38.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/39.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/40.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/41.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/42.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/43.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/44.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/45.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/46.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/47.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/48.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/49.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/50.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/51.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/52.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/53.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/54.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/55.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/56.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/57.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/58.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/59.jpg"></div>
    <div class="lp-header__bg__item"><img src="https://randomuser.me/api/portraits/men/30.jpg"></div>
  </div>
</div>