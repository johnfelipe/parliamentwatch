<?php

/*
 * @file
 * Provides configurability to the PW API module.
 */

/**
 * Form builder. Configure PW Cache.
 *
 * @ingroup forms
 * @see system_settings_form().
 */
function pw_cache_admin_settings() {

  // form element servers
  $cache_servers = variable_get('pw_cache_servers', '');
  $form['pw_cache_servers'] = array(
    '#type' => 'textarea',
    '#title' => t('Target server which shall be refreshed.'),
    '#default_value' => $cache_servers,
  );

  // form element hosts
  $cache_hosts = variable_get('pw_cache_hosts', '');
  $form['pw_cache_hosts'] = array(
    '#type' => 'textarea',
    '#title' => t('Hosts which shall be refreshed.'),
    '#default_value' => $cache_hosts,
  );

  $form['#submit'][] = 'pw_cache_admin_settings_submit';
  return system_settings_form($form);
}

/**
 * Process PW Cache settings submission.
 */
function pw_cache_admin_settings_submit($form, $form_state) {

  // save servers
  $servers = $form_state["values"]["pw_cache_servers"];
  $servers = trim($servers);
  if (check_plain($servers)) {
    variable_set('pw_cache_servers', $servers);
  }

  // save hosts
  $hosts = $form_state["values"]["pw_cache_hosts"];
  $hosts = trim($hosts);
  if (check_plain($hosts)) {
    variable_set('pw_cache_hosts', $hosts);
  }
}
