<?php

/**
 * @file
 * Default theme implementation to display a filter bar.
 *
 * Available variables:
 * - $form: The form.
 *
 * Helper variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * @see template_preprocess()
 * @see template_preprocess_filterbar()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<div class="filterbar">
  <div class="filterbar__inner">
    <div class="filterbar__pre_swiper">
      <div class="filterbar__item filterbar__item--label">
        <i class="icon icon-investigation"></i> Filter
      </div>
      <div class="filterbar__item filterbar__item--input">
        <?php
          $children = element_children($form);
          print render($form[$children[0]]);
          print render($form['submit']);
        ?>
      </div>
    </div>
    <div class="filterbar__swiper">
      <div class="filterbar__swiper__inner">
        <?php for ($i = 1; $i < count($children); $i++): ?>
        <?php if (!in_array($children[$i], ['submit', 'form_id', 'form_build_id', 'form_token'])): ?>
        <?php
          if (!isset($form[$children[$i]]['#options']) || count($form[$children[$i]]['#options']) > 2) {
            $modifier = 'dropdown';
          }
          else {
            $modifier = 'checkboxes';
          }
        ?>
        <div class="filterbar__item <?php print ($modifier == 'dropdown') ? 'filterbar__item--dropdown dropdown' : 'filterbar__item--checkbox'; ?>">
          <?php if ($modifier == 'dropdown'): ?>
          <a class="dropdown__trigger" href="#">
            <?php print $form[$children[$i]]['#title'] ?> <i class="icon icon-arrow-down"></i>
          </a>
          <div class="dropdown__list">
            <?php print render($form[$children[$i]]); ?>
          </div>
          <?php else: ?>
          <?php print render($form[$children[$i]]); ?>
          <?php endif; ?>
        </div>
        <?php endif; ?>
        <?php endfor; ?>
      </div>
      <div class="swiper-button-prev"></div>
      <div class="swiper-button-next"></div>
    </div>

    <div class="filterbar__view_options">
      <li class="filterbar__view_options__item filterbar__view_options__item--active">
        <a href="#" class="filterbar__view_options__item__link"><i class="icon icon-th-list"></i></a>
      </li>
    </div>
  </div>
</div>