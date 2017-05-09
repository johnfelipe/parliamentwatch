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
 * Implements hook_preprocess_page().
 *
 * Adds jQuery UI libraries.
 */
function parliamentwatch_preprocess_page(&$variables) {
  drupal_add_library('system', 'ui');
  drupal_add_library('system', 'ui.position');

  if(isset($variables['node']) && $variables['node']->type == 'dialogue') {
    drupal_set_title('');
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
  if ($variables['type'] == 'pw_petition') {
    $node = $variables['node'];

    // default theme suggestion
    $variables['theme_hook_suggestions'][] = 'node__' . $node->type . '__' . $variables['view_mode'];

    $petition_status = field_get_items('node', $node, 'field_petition_status');
    if (!empty($petition_status) && $petition_status[0]['value'] != "open_for_signings") {
      $variables['theme_hook_suggestions'][] = 'node__' . $node->type . '__' . $variables['view_mode'] . '__' . $petition_status[0]['value'];

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
  elseif($variables['view_mode'] == 'teaser') {
    $variables['theme_hook_suggestions'][] = 'node__'.$variables['node']->type.'__teaser';
    $variables['theme_hook_suggestions'][] = 'node__'.$variables['node']->nid.'__teaser';
  }

  // Testimonials in newsletter
  if($variables['type'] == 'pw_testimonial' && $variables['view_mode'] == 'pw_newsletter') {
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
 * Overrides theme_file_icon().
 */
function parliamentwatch_file_icon($variables) {
  $file = $variables['file'];
  $icon_directory = drupal_get_path('theme', 'parliamentwatch').'/images/fileicons';

  $mime = check_plain($file->filemime);
  $icon_url = file_icon_url($file, $icon_directory);
  return '<img alt="" class="file-icon" src="'.$icon_url.'" title="'.$mime.'" />';
}

/**
 * Overrides theme_feed_icon().
 */
function parliamentwatch_feed_icon($variables) {
  $text = t('Subscribe to @feed-title', array('@feed-title' => $variables['title']));
  if ($image = theme('image', array('path' => 'misc/feed.png', 'width' => 16, 'height' => 16, 'alt' => $text))) {
    return l($text, $variables['url'], array('html' => TRUE, 'attributes' => array('class' => array('feed-link'), 'title' => $text)));
  }
}

/**
 * Overrides theme_tagadelic_weighted().
 *
 * Hides the more link in tag clouds.
 */
function parliamentwatch_tagadelic_weighted(array $vars) {
  $terms = $vars['terms'];
  $output = '';

  foreach ($terms as $term) {
    $output .= l($term->name, 'taxonomy/term/'.$term->tid, array(
          'attributes' => array(
            'class' => array("tagadelic", "level".$term->weight),
            'rel' => 'tag',
            'title'  => $term->description,
          )
        )
      )." \n";
  }
  //if (count($terms) >= variable_get('tagadelic_block_tags_'.$vars['voc']->vid, 12)) {
  //  $output .= theme('more_link', array('title' => t('more tags'), 'url' => "tagadelic/chunk/{$vars['voc']->vid}"));
  //}
  return $output;
}

/**
 * Overrides theme_pager().
 */
function parliamentwatch_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_first = theme('pager_first', array('text' => ('1'), 'element' => $element, 'parameters' => $parameters));
  $li_previous = theme('pager_previous', array('text' => (isset($tags[1]) ? $tags[1] : t('‹ prev')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_next = theme('pager_next', array('text' => (isset($tags[3]) ? $tags[3] : t('next ›')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_last = theme('pager_last', array('text' => ($pager_max), 'element' => $element, 'parameters' => $parameters));

  global $base_path;

  //set first page link
  $first = $li_first;

  //set last page link
  $last = $li_last;


  //add left side arrow and text
  if ($li_previous == ""){
    $new_li_first = '<span>'.t('‹ prev').'</span>';
  }else {
    $new_li_previous = $li_previous;
    $new_li_first = str_replace(t('‹ prev'),''.t('‹ prev'),	$new_li_previous);
  }

  //add rigth side arrow and text
  if ($li_next == ""){
    $new_li_last = '<span>'.t('next ›').'</span>';
  }else {
    $new_li_next = $li_next;
    $new_li_last = str_replace(t('next ›'),	t('next ›'),	$new_li_next);
    //$new_li_last = t('next ›').' '.$new_li_last;
  }

  if ($pager_total[$element] > 1) {
//    if ($li_first) {
    $items[] = array(
      'class' => array('pager-first'),
      'data' => $new_li_first,
    );
//    }
//    if ($li_previous) {
    $items[] = array(
      'class' => '',
      'data' => t('Page'),
    );
//    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => $first.' …',
        );
      }
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_previous', array('text' => $i, 'element' => $element, 'interval' => ($pager_current - $i), 'parameters' => $parameters)),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('pager-current'),
            'data' => $i,
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_next', array('text' => $i, 'element' => $element, 'interval' => ($i - $pager_current), 'parameters' => $parameters)),
          );
        }
      }
      if ($i < $pager_max+1) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '… '.$last,
        );
      }
    }
    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => array('pager-next'),
        'data' => '',
      );
    }
//    if ($li_last) {
    $items[] = array(
      'class' => array('pager-last'),
      'data' => $new_li_last,
    );
//    }
    return '<h2 class="element-invisible">'.t('Pages').'</h2>'.theme('item_list', array(
      'items' => $items,
      'attributes' => array('class' => array('pager')),
    ));
  }
}

/**
 * Overrides theme_pager_link().
 */
function abgeordnetenwatch_pager_link($variables) {
  $text = $variables['text'];
  $page_new = $variables['page_new'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $attributes = $variables['attributes'];

  $page = isset($_GET['page']) ? $_GET['page'] : '';
  if ($new_page = implode(',', pager_load_array($page_new[$element], $element, explode(',', $page)))) {
    $parameters['page'] = $new_page;
  }

  $query = array();
  if (count($parameters)) {
    $query = drupal_get_query_parameters($parameters, array());
  }
  if ($query_pager = pager_get_query_parameters()) {
    $query = array_merge($query, $query_pager);
  }

  // Set each pager link title
  if (!isset($attributes['title'])) {
    static $titles = NULL;
    if (!isset($titles)) {
      $titles = array(
        t('« first') => t('Go to first page'),
        t('‹ previous') => t('Go to previous page'),
        t('next ›') => t('Go to next page'),
        t('last »') => t('Go to last page'),
      );
    }
    if (isset($titles[$text])) {
      $attributes['title'] = $titles[$text];
    }
    elseif (is_numeric($text)) {
      $attributes['title'] = t('Go to page @number', array('@number' => $text));
    }
  }

  // @todo l() cannot be used here, since it adds an 'active' class based on the
  //   path only (which is always the current path for pager links). Apparently,
  //   none of the pager links is active at any time - but it should still be
  //   possible to use l() here.
  // @see http://drupal.org/node/1410574
  $attributes['href'] = url($_GET['q'], array('query' => $query));
  return '<a'.drupal_attributes($attributes).'><span>'.check_plain($text).'</span></a>';
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
  return '<ul class="header__nav">' . $variables['tree'] . '</ul>';
}

/**
 * Overrides theme_menu_link() for main menu.
 */
function parliamentwatch_menu_link__main_menu(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  $element['#attributes']['class'] = ['header__nav__item'];
  $element['#localized_options']['attributes']['class'][] = 'header__nav__item__link';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }

  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}
