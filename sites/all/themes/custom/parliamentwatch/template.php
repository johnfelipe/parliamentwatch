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
  if (isset($form['actions'])) {
    $form['actions']['#type'] = 'container';
    $form['actions']['#attributes'] = ['class' => ['form__item']];
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
  unset($css[drupal_get_path('module','filter') . '/filter.css']);
  unset($css[drupal_get_path('module','comment') . '/comment.css']);
  unset($css[drupal_get_path('module','search') . '/search.css']);
  unset($css[drupal_get_path('module','node') . '/node.css']);
  unset($css[drupal_get_path('module','field') . '/theme/field.css']);
  unset($css[drupal_get_path('module','user') . '/user.css']);
}

/**
 * Implements hook_media_wysiwyg_token_to_markup().
 */
function parliamentwatch_media_wysiwyg_token_to_markup_alter(&$element, $tag_info, $settings) {
  unset($element['content']['#type']);
}

/**
 * Implements hook_preprocess_page().
 */
function parliamentwatch_preprocess_page(&$variables) {
  $variables['render_content_container'] = _parliamentwatch_should_render_content_container($variables);
}

/**
 * Implements hook_preprocess_region().
 */
function parliamentwatch_preprocess_region(&$variables) {
  if ($variables['region'] == 'content_tabs') {
    foreach (element_children($variables['elements']) as $key) {
      $text = $variables['elements'][$key]['#block']->subject;
      $options = [
        'attributes' => ['class' => ['nav__item__link']],
        'external' => TRUE,
        'fragment' => drupal_html_class("block-$key"),
      ];
      $class = ['nav__item'];
      if ($key == reset(element_children($variables['elements']))) {
        $class[] = 'nav__item--active';
      }
      $variables['tabs'][] = [
        'data' => l($text, '', $options),
        'class' => $class,
      ];

    }
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

  if ($variables['block']->region == 'content_tabs') {
    $variables['classes_array'][] = 'tabs__content';
    if ($variables['block_id'] == 1) {
      $variables['classes_array'][] = 'tabs__content--active';
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
    'node-sticky',
    'node-promoted',
    drupal_html_class('node-' . $variables['type']),
  ];
  $variables['classes_array'] = array_diff($variables['classes_array'], $exclude_classes);
  $variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'];

  $day = sprintf('<span class="date__day">%s</span>', format_date($node->created, 'custom', 'j'));
  $month = sprintf('<span class="date__month">%s</span>', format_date($node->created, 'custom', 'M'));
  $year = sprintf('<span class="date__year">%s</span>', format_date($node->created, 'custom', 'Y'));
  $variables['date'] = sprintf('<span class="date">%s%s%s</span>', $day, $month, $year);

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

  if (isset($account->number_of_questions)) {
    $variables['questions'] = $account->number_of_questions;
    $variables['answers'] = $account->number_of_answers;
    $variables['answer_ratio'] = round(100 * $account->number_of_answers / $account->number_of_questions, 0);
  }

  if (isset($variables['user_profile']['votes_total'])) {
    $variables['voting_ratio'] = round(100 * $variables['user_profile']['votes_attended'] / $variables['user_profile']['votes_total'], 0);
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

  $li_next = theme('pager_next', [
    'text' => (isset($tags[3]) ? $tags[3] : t('next ›')),
    'element' => $element,
    'interval' => 1,
    'parameters' => $parameters,
  ]);

  if ($pager_total[$element] > 1) {
    if ($li_next) {
      $items[] = ['class' => ['pager__next'], 'data' => $li_next];
    }

    return theme('item_list', [
      'items' => $items,
      'attributes' => ['class' => ['pager']],
    ]);
  }
}

/**
 * Overrides theme_item_list().
 */
function parliamentwatch_item_list(&$variables) {
  $items = $variables['items'];
  $type = $variables['type'];
  $attributes = $variables['attributes'];

  if (!empty($items)) {
    $output = "<$type" . drupal_attributes($attributes) . '>';
    $num_items = count($items);
    $i = 0;
    foreach ($items as $item) {
      $attributes = array();
      $children = array();
      $data = '';
      $i++;
      if (is_array($item)) {
        foreach ($item as $key => $value) {
          if ($key == 'data') {
            $data = $value;
          }
          elseif ($key == 'children') {
            $children = $value;
          }
          else {
            $attributes[$key] = $value;
          }
        }
      }
      else {
        $data = $item;
      }
      if (count($children) > 0) {
        // Render nested list.
        $data .= theme_item_list(array('items' => $children, 'title' => NULL, 'type' => $type, 'attributes' => $attributes));
      }
      $output .= '<li' . drupal_attributes($attributes) . '>' . $data . "</li>\n";
    }
    $output .= "</$type>";
  }
  return $output;
}

/**
 * Overrides theme_form().
 */
function parliamentwatch_form($variables) {
  $element = $variables['element'];
  if (isset($element['#action'])) {
    $element['#attributes']['action'] = drupal_strip_dangerous_protocols($element['#action']);
  }
  element_set_attributes($element, ['method']);
  if (empty($element['#attributes']['accept-charset'])) {
    $element['#attributes']['accept-charset'] = "UTF-8";
  }
  $element['#attributes']['class'] = ['form', 'form--' . $element['#id']];
  return '<form' . drupal_attributes($element['#attributes']) . '>' . $element['#children'] . '</form>';
}

/**
 * Overrides theme_webform_element().
 */
function parliamentwatch_webform_element($variables) {
  $element = &$variables['element'];

  // This function is invoked as theme wrapper, but the rendered form element
  // may not necessarily have been processed by form_builder().
  $element += ['#title_display' => 'before'];

  // Add element #id for #type 'item'.
  if (isset($element['#markup']) && !empty($element['#id'])) {
    $attributes['id'] = $element['#id'];
  }
  // Add element's #type and #name as class to aid with JS/CSS selectors.
  $attributes['class'] = ['form__item'];
  if (!empty($element['#type'])) {
    $attributes['class'][] = 'form__item--' . strtr($element['#type'], '_', '-');
  }
  if (!empty($element['#name'])) {
    $attributes['class'][] = 'form__item--' . strtr($element['#name'], [' ' => '-', '_' => '-', '[' => '-', ']' => '']);
  }
  // Add a class for disabled elements to facilitate cross-browser styling.
  if (!empty($element['#attributes']['disabled'])) {
    $attributes['class'][] = 'form__item--disabled';
  }
  $output = '<div' . drupal_attributes($attributes) . '>' . "\n";

  // If #title is not set, we don't display any label or required marker.
  if (!isset($element['#title'])) {
    $element['#title_display'] = 'none';
  }
  $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . $element['#field_prefix'] . '</span> ' : '';
  $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . $element['#field_suffix'] . '</span>' : '';

  switch ($element['#title_display']) {
    case 'before':
    case 'invisible':
      $output .= ' ' . theme('form_element_label', $variables);
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;

    case 'after':
      $output .= ' ' . $prefix . $element['#children'] . $suffix;
      $output .= ' ' . theme('form_element_label', $variables) . "\n";
      break;

    case 'none':
    case 'attribute':
      // Output no label and no required marker, only the children.
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;
  }

  if (!empty($element['#description'])) {
    $output .= '<div class="description">' . $element['#description'] . "</div>\n";
  }

  $output .= "</div>\n";

  return $output;
}

/**
 * Overrides theme_form_element().
 */
function parliamentwatch_form_element($variables) {
  return parliamentwatch_webform_element($variables);
}

/**
 * Overrides theme_form_element_label().
 */
function parliamentwatch_form_element_label($variables) {
  $element = $variables['element'];
  // This is also used in the installer, pre-database setup.
  $t = get_t();

  // If title and required marker are both empty, output no label.
  if ((!isset($element['#title']) || $element['#title'] === '') && empty($element['#required'])) {
    return '';
  }

  // If the element is required, a required marker is appended to the label.
  $required = !empty($element['#required']) ? theme('form_required_marker', array('element' => $element)) : '';

  $title = filter_xss_admin($element['#title']);

  $attributes = ['class' => ['form__item__label']];
  // Style the label as class option to display inline with the element.
  if ($element['#title_display'] == 'after') {
    $attributes['class'][] = 'option';
  }
  // Show label only to screen readers to avoid disruption in visual flows.
  elseif ($element['#title_display'] == 'invisible') {
    $attributes['class'][] = 'sr-only';
  }

  if (!empty($element['#id'])) {
    $attributes['for'] = $element['#id'];
  }

  // The leading whitespace helps visually separate fields from inline labels.
  return ' <label' . drupal_attributes($attributes) . '>' . $t('!title !required', ['!title' => $title, '!required' => $required]) . "</label>\n";
}

/**
 * Overrides theme_textfield().
 */
function parliamentwatch_textfield($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'text';
  element_set_attributes($element, ['id', 'name', 'value', 'size', 'maxlength']);
  _parliamentwatch_form_set_class($element, ['form__item__control']);

  $extra = '';
  if ($element['#autocomplete_path'] && !empty($element['#autocomplete_input'])) {
    drupal_add_library('system', 'drupal.autocomplete');
    $element['#attributes']['class'][] = 'form-autocomplete';

    $attributes = [];
    $attributes['type'] = 'hidden';
    $attributes['id'] = $element['#autocomplete_input']['#id'];
    $attributes['value'] = $element['#autocomplete_input']['#url_value'];
    $attributes['disabled'] = 'disabled';
    $attributes['class'][] = 'autocomplete';
    $extra = '<input' . drupal_attributes($attributes) . ' />';
  }

  $output = '<input' . drupal_attributes($element['#attributes']) . ' />';

  return $output . $extra;
}

/**
 * Overrides theme_password().
 */
function parliamentwatch_password($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'password';
  element_set_attributes($element, ['id', 'name', 'size', 'maxlength']);
  _form_set_class($element, ['form__item__control']);

  return '<input' . drupal_attributes($element['#attributes']) . ' />';
}

/**
 * Overrides theme_textarea().
 */
function parliamentwatch_textarea($variables) {
  $element = $variables['element'];
  element_set_attributes($element, ['id', 'name', 'cols', 'rows']);
  _parliamentwatch_form_set_class($element, ['form__item__control']);

  return '<textarea' . drupal_attributes($element['#attributes']) . '>' . check_plain($element['#value']) . '</textarea>';
}

/**
 * Overrides theme_select().
 */
function parliamentwatch_select($variables) {
  $element = $variables['element'];
  $element['#attributes']['data-placeholder'] = $element['#title'];
  element_set_attributes($element, ['id', 'name', 'size']);
  _parliamentwatch_form_set_class($element, ['form__item__control']);

  return '<select data-width="100%" ' . drupal_attributes($element['#attributes']) . '>' . form_select_options($element) . '</select>';
}

/**
 * Overrides theme_checkbox().
 */
function parliamentwatch_checkbox($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'checkbox';
  element_set_attributes($element, ['id', 'name', '#return_value' => 'value']);

  // Unchecked checkbox has #value of integer 0.
  if (!empty($element['#checked'])) {
    $element['#attributes']['checked'] = 'checked';
  }
  _parliamentwatch_form_set_class($element, ['form__item__control']);

  return '<input' . drupal_attributes($element['#attributes']) . ' />';
}

/**
 * Overrides theme_button().
 */
function parliamentwatch_button($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'submit';
  element_set_attributes($element, ['id', 'name']);

  $element['#attributes']['class'] = ['btn'];
  if (!empty($element['#attributes']['disabled'])) {
    $element['#attributes']['class'][] = 'btn--disabled';
  }

  return '<button' . drupal_attributes($element['#attributes']) . '>' . check_plain($element['#value']) . '</button>';
}

/**
 * Sets a form element's class attribute.
 *
 * Adds 'error' class as needed.
 *
 * @param array $element
 *   The form element.
 * @param array $name
 *   The class names to be added.
 */
function _parliamentwatch_form_set_class(array &$element, array $name) {
  $element['#attributes']['class'] = $name;
  // This function is invoked from form element theme functions, but the
  // rendered form element may not necessarily have been processed by
  // form_builder().
  if (isset($element['#parents']) && form_get_error($element) !== NULL && !empty($element['#validated'])) {
    $element['#attributes']['class'][] = 'form__item__control--invalid';
  }
}

/**
 * Determines whether the content regions should be wrapped in a container.
 *
 * @param array $variables
 *   The template variables.
 *
 * @return bool
 *   TRUE if the content container should be rendered, FALSE otherwise.
 */
function _parliamentwatch_should_render_content_container($variables) {
  if (isset($variables['node']) && $variables['node']->type != 'page') {
    return FALSE;
  }

  $pages_without_container = [
    'pw_blog_page',
    'pw_petitions_page',
    'pw_poll_page',
    'pw_profiles_page',
    'user_view_page',
  ];

  if (in_array(menu_get_item()['page_callback'], $pages_without_container)) {
    return FALSE;
  }

  return TRUE;
}
