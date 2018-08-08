<h1><?php print t('Login'); ?></h1>
<?php print drupal_render($form['form_build_id']); ?>
<?php print drupal_render($form['form_id']); ?>

<?php print drupal_render($form['help']); ?>
<?php print drupal_render($form['name']); ?>
<?php print drupal_render($form['pass']); ?>
<?php print drupal_render($form['actions']); ?>

<div class="form__item form__item--request-password">
  <a href="/user/password" class="link-icon"><i class="icon icon-arrow-right"></i> <?php print t('Reset password'); ?></a>
</div>
