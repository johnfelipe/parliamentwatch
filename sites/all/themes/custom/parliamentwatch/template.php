<?php

/**
 * Implements hook_theme().
 */
function parliamentwatch_theme(&$existing, $type, $theme, $path) {
  return array(
    'user_login' => array(
      'template' => 'templates/user-login',
      'render element' => 'form',
    ),
  );
}

/**
 * Implements hook_form_alter().
 */
function parliamentwatch_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'webform_client_form_104846') {
    $form['#attributes']['class'][] = 'row';
    $form['actions']['#attributes']['class'][] = 'col-sm-4';
    $form['actions']['submit']['#attributes']['class'][] = 'big';
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function parliamentwatch_form_comment_form_alter(&$form, &$form_state) {
  global $user;
  if ($user->uid) {
    $form['author']['_author']['#title'] = t('You are logged in as');
  }
  $form['actions']['submit']['#value'] = t('Add comment');
  $form['author']['homepage']['#access'] = FALSE;
}

/**
 * Implements hook_css_alter().
 *
 * Removes unnecessary core css files.
 */
function parliamentwatch_css_alter(&$css) {
  unset($css[drupal_get_path('module','system') . '/system.base.css']);
  unset($css[drupal_get_path('module','system') . '/system.menus.css']);
  unset($css[drupal_get_path('module','system') . '/system.theme.css']);
  unset($css[drupal_get_path('module','system') . '/system.messages.css']);
  unset($css[drupal_get_path('module','comment') . '/comment.css']);
  unset($css[drupal_get_path('module','search') . '/search.css']);
  unset($css[drupal_get_path('module','node') . '/node.css']);
  unset($css[drupal_get_path('module','field') . '/theme/field.css']);
  unset($css[drupal_get_path('module','user') . '/user.css']);
}

/**
 * Implements hook_preprocess_page().
 */
function parliamentwatch_preprocess_page(&$variables) {
  if (isset($variables['node']) && $variables['node']->type == 'dialogue') {
    drupal_set_title('');
  }
}

/**
 * Implements hook_preprocess_block().
 */
function parliamentwatch_preprocess_block(&$variables) {
  $exclude_classes = [
    'block',
    drupal_html_class('block-' . $variables['block']->module),
    drupal_html_class('block-menu'),
  ];
  $variables['classes_array'] = array_diff($variables['classes_array'], $exclude_classes);

  if ($variables['block']->module == 'menu_block') {
    $config = $variables['elements']['#config'];
    $variables['theme_hook_suggestions'][] = strtr('block__' . $config['menu_name'] . '__level-' . $config['level'], '-', '_');

    if ($config['menu_name'] == 'main-menu' && $config['level'] == 2) {
      $trail = menu_get_active_trail();
      $variables['title_suffix']['indicator'] = [
        '#markup' => l($trail[1]['link_title'], $trail[1]['link_path'], ['attributes' => ['class' => ['header__subnav__indicator']]])
      ];
    }
  }
}

/**
 * Implements hook_preprocess_block().
 */
function parliamentwatch_preprocess_menu_block_wrapper(&$variables) {
  $variables['classes_array'] = [
    'nav',
    'nav--' . $variables['config']['menu_name'],
    'nav--' . $variables['config']['menu_name'] . '--level-' . $variables['config']['level'],
  ];
}

/**
 * Implements hook_preprocess_node().
 */
function parliamentwatch_preprocess_node(&$variables) {
  $node = $variables['node'];

  $exclude_classes = [
    'node',
    drupal_html_class('node-' . $variables['type']),
  ];
  $variables['classes_array'] = array_diff($variables['classes_array'], $exclude_classes);
  $variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'];
  $variables['date'] = format_date($node->created, 'custom', 'j.&\t\h\i\n\s\p;M.&\t\h\i\n\s\p;Y');

  if ($variables['type'] == 'pw_petition') {
    $petition_status = field_get_items('node', $node, 'field_petition_status');
    if (!empty($petition_status) && $petition_status[0]['value'] != "open_for_signings") {
      $variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'] . '__' . $petition_status[0]['value'];

      if ($petition_status[0]['value'] == "collecting_donations"){
        // Load donation form
        /* This rather complicated way was chosen because the normal module_invoke/
        render method produces only the pure block content (form in this case) and
        not the required div wrappers. Suggestions are welcome: ruh@abgeordnetenwatch.de
        */
        $block = block_load('webform', 'client-block-10508');
        $rendered_block = _block_render_blocks(array($block));
        $rendered_block['webform_client-block-10508']->subject = "";
      }
      // count votes from politicians
      if ($variables['view_mode'] == 'teaser' && in_array($petition_status[0]['value'], array('asking_parliament', 'passed_parliament'))) {
        $query = new EntityFieldQuery();
        $query->entityCondition('entity_type', 'node')
          ->entityCondition('bundle', 'vote')
          ->fieldCondition('field_vote_node', 'target_id', $node->nid)
          ->fieldCondition('field_voted', 'value', 1)
          ->fieldCondition('field_parliament', 'tid', $node->field_parliament[LANGUAGE_NONE][0]['tid'])
          ->propertyCondition('status', NODE_PUBLISHED);
        $variables["count_votes"] = $query->count()->execute();
      }
    }
    else {

      // Load signing form
      /* This rather complicated way was chosen because the normal module_invoke/
      render method produces only the pure block content (form in this case) and
      not the required div wrappers. Suggestions are welcome: ruh@abgeordnetenwatch.de
      */
      $block = block_load('webform', 'client-block-10369');
      $rendered_block = _block_render_blocks(array($block));
      $rendered_block['webform_client-block-10369']->subject = "";
    }

    // Due to our complicated block modification above, we need to re-render the block.
    if (empty($petition_status) || $petition_status[0]['value'] == "collecting_donations" || $petition_status[0]['value'] == "open_for_signings"){
      $variables["main_node_form"] = drupal_render(_block_get_renderable_array($rendered_block));
    }
    elseif ($petition_status[0]['value'] == "asking_parliament"){
      #$block = module_invoke('webform', 'block_view', 'client-block-111889');
      #$variables["main_node_form"] =  render($block['content']);

      $blockObject = block_load('webform', 'client-block-111918');
      $block = _block_get_renderable_array(_block_render_blocks(array($blockObject)));
      $variables["main_node_form"] = drupal_render($block);
    }

    switch ($variables['field_petition_partner'][0]['value']) {
      case "change.org":
        $variables['partner_html'] = theme('image', array(
          'path' => drupal_get_path('theme', 'parliamentwatch') . '/images/logo-change.png',
          'width' => 119,
          'height' => 23,
          'alt' => 'Change.org',
        ));
        $variables['signing_url'] = url("https://secured.abgeordnetenwatch.de/tools/newsletter.php", array(
          'external' => TRUE,
          'query' => array(
            'width' => 800,
            'height' => 450,
            'iframe' => TRUE,
            'continue' => $variables['field_petition_external_url'][0]['url'],
          )
        ));
        if (empty($petition_status) || $petition_status[0]['value'] == "open_for_signings") {
          // If the petition is run by an external service, all links from
          // the node need to point to that URL. To avoid having to access
          // the nitty-gritty of all elements in use, we simply override
          // the node url in
          $variables['node_url'] = $variables['signing_url'];
        }
        #elseif ($petition_status != "passed_parliament") {
        #  $variables['signing_url'] = $variables['node_url'];
        #}
        break;
      default:
        $variables['partner_html'] = "";
        $variables['signing_url'] = $variables['node_url'];
        break;
    }

    $variables['themed_image'] = theme('image_style', array(
      'style_name' => 'pw_landscape_l', //Configure style here!
      'path' => $variables['field_teaser_image'][0]['uri'],
    ));

    if (!empty($variables['field_teaser_image'][0]['field_image_copyright']) || !empty($variables['field_teaser_image'][0]['field_image_copyright']['und'][0]['value'])) {
      $variables['has_image_copyright'] = TRUE;
    }
  }

  // Testimonials in newsletter
  if ($variables['type'] == 'pw_testimonial' && $variables['view_mode'] == 'pw_newsletter') {
    $member_counter = pw_donation_membership_count();
    $member_counter = number_format($member_counter, 0, ',', '.');
    $variables['count_memberships'] = $member_counter;
  }
}

/**
 * Implements hook_preprocess_user_profile().
 */
function parliamentwatch_preprocess_user_profile(&$variables) {
  $account = $variables['elements']['#account'];

  $variables['theme_hook_suggestions'][] = 'user_profile__' . $variables['elements']['#view_mode'];
  $variables['user_url'] = url(entity_uri('user', $account)['path']);
  $variables['display_name'] = _pw_get_fullname($account);
  $variables['average_response_time'] = number_format(pw_dialogues_average_response_time($account) / 86400, 1, ',', '.');

  if (isset($account->number_of_questions)) {
    $variables['questions'] = $account->number_of_questions;
    $variables['answers'] = $account->number_of_answers;
    $variables['answer_ratio'] = round(100 * $account->number_of_answers / $account->number_of_questions, 0);
  }
}

/**
 * Implements hook_preprocess_comment().
 */
function parliamentwatch_preprocess_comment(&$variables) {
  $variables['theme_hook_suggestions'][] = $variables['theme_hook_original'] . '__' . $variables['elements']['#view_mode'];
}

/**
 * Implements hook_preprocess_field().
 */
function parliamentwatch_preprocess_field(&$variables) {
  $element = $variables['element'];
  if($element['#bundle'] == 'pw_petition') {
    $variables['theme_hook_suggestions'][] = 'field__' . $element['#bundle'] . '__' . $element['#field_name'];
  }
  $variables['theme_hook_suggestions'][] = 'field__' . $element['#bundle'] . '__' . $element['#view_mode'];
}

/**
 * Overrides theme_addressfield_formatter__linear().
 */
function parliamentwatch_addressfield_formatter__linear($vars) {
  $loc = $vars['address'];

  // Determine which location components to render
  $out = array();
  if (!empty($loc['name_line']) && $vars['name_line']) {
    $out[] = $loc['name_line'];
  }
  if (!empty($loc['organisation_name']) && $vars['organisation_name']) {
    $out[] = $loc['organisation_name'];
  }
  if (!empty($loc['thoroughfare'])) {
    $out[] = $loc['thoroughfare'];
  }
  if (!empty($loc['premise']) && $vars['premise']) {
    $out[] = $loc['premise'];
  }
  if (!empty($loc['administrative_area'])) {
    $out[] = $loc['administrative_area'];
  }
  if (!empty($loc['locality'])) {
    $locality = $loc['locality'];
  }
  if (!empty($loc['postal_code'])) {
    $out[] = $loc['postal_code'].' '.$locality;
  }
  if ($loc['country'] != addressfield_tokens_default_country() && $country_name = _addressfield_tokens_country($loc['country'])) {
    $out[] = $country_name;
  }

  // Render the location components
  $output = implode(', ', $out);

  return $output;
}

/**
 * Overrides theme_filter_tips_more_info().
 */
function parliamentwatch_filter_tips_more_info() {
  return '';
}

/**
 * Overrides theme_menu_tree() for main menu.
 */
function parliamentwatch_menu_tree__main_menu(&$variables) {
  return $variables['tree'];
}

/**
 * Overrides theme_menu_link() for main menu.
 */
function parliamentwatch_menu_link__main_menu(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';
  $prefix = '';
  $suffix = '';

  $callback = function ($tid) {
    return "taxonomy/term/$tid";
  };
  $state_parliament_paths = array_map($callback, variable_get('parliamentwatch_state_parliament_tids', []));

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }

  if ($element['#href'] == reset($state_parliament_paths)) {
    $trail = menu_get_active_trail();
    if (isset($trail[1]) && in_array($trail[1]['link_path'], $state_parliament_paths)) {
      $prefix .= '<li class="nav__item nav__item--active nav__item--dropdown dropdown">';
    }
    else {
      $prefix .= '<li class="nav__item nav__item--dropdown dropdown">';
    }
    $prefix .= '<a class="nav__item__link dropdown__text" href="#">Landtag</a>';
    $prefix .= '<a class="nav__item__trigger dropdown__trigger" href="#"><i class="icon icon-arrow-down"></i></a>';
    $prefix .= '<ul class="dropdown__list">';
  }
  elseif ($element['#href'] == end($state_parliament_paths)) {
    $suffix .= '</ul></li>';
  }

  if (in_array($element['#href'], $state_parliament_paths)) {
    $element['#attributes']['class'] = ['dropdown__list__item'];
    $element['#localized_options']['attributes']['class'][] = 'dropdown__list__item__link';
  }
  else {
    $element['#attributes']['class'] = ['nav__item'];
    $element['#localized_options']['attributes']['class'][] = 'nav__item__link';

    if (in_array('active-trail', $element['#localized_options']['attributes']['class'])) {
      $element['#attributes']['class'][] = 'nav__item--active';
    }
  }

  $output = l($element['#title'], $element['#href'], $element['#localized_options']);

  return $prefix . '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>$suffix\n";
}

/**
 * Overrides theme_menu_local_tasks() for local task tab-navigation.
 */
function parliamentwatch_menu_local_tasks(&$variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<div class="nav-mobile-trigger"><i class="icon icon-investigation"></i></div>';
    $variables['primary']['#prefix'] .= '<ul class="nav nav--tab primary">';
    $variables['primary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="nav nav--tab secondary">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }
  return $output;
}

/**
 * Overrides theme_disable_messages_status_messages() for local task tab-navigation.
 */
function parliamentwatch_disable_messages_status_messages($vars) {
  $messages = $vars['messages'];
  $output = '';
  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
  );
  foreach ($messages as $type => $arr_messages) {
    $output .= "<div class='container'><div class=\"messages messages--$type\">\n";
    if (!empty($status_heading[$type])) {
      $output .= '<h2 class="element-invisible">' . $status_heading[$type] . "</h2>\n";
    }
    if (count($arr_messages) > 1) {
      $output .= " <ul>\n";
      foreach ($arr_messages as $message) {
        $output .= '  <li>' . $message . "</li>\n";
      }
      $output .= " </ul>\n";
    }
    else {
      $output .= array_shift($arr_messages);
    }
    $output .= "</div></div>\n";
  }
  return $output;
}

/**
 * Overrides theme_container() for tiles.
 */
function parliamentwatch_container__tiles($variables) {
  $element = $variables['element'];
  // Ensure #attributes is set.
  $element += array('#attributes' => ['class' => ['container']]);

  return '<div class="tile-wrapper"><div' . drupal_attributes($element['#attributes']) . '><div class="row">' . $element['#children'] . '</div></div></div>';
}

/**
 * Overrides theme_pager().
 */
function parliamentwatch_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  global $pager_total;

  $li_previous = theme('pager_previous', [
    'text' => (isset($tags[1]) ? $tags[1] : t('‹ previous')),
    'element' => $element,
    'interval' => 1,
    'parameters' => $parameters,
  ]);
  $li_next = theme('pager_next', [
    'text' => (isset($tags[3]) ? $tags[3] : t('next ›')),
    'element' => $element,
    'interval' => 1,
    'parameters' => $parameters,
  ]);

  if ($pager_total[$element] > 1) {
    if ($li_previous) {
      $items[] = ['class' => ['pager__previous'], 'data' => $li_previous];
    }

    if ($li_next) {
      $items[] = ['class' => ['pager__next'], 'data' => $li_next];
    }

    return theme('item_list', [
      'items' => $items,
      'attributes' => ['class' => ['pager']],
    ]);
  }
}
