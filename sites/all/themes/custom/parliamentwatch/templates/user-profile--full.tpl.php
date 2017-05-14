<?php

/**
 * @file
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * Use render($user_profile) to print all profile items, or print a subset
 * such as render($user_profile['field_user_picture']). Always call
 * render($user_profile) at the end in order to print all remaining items. If
 * the item is a category, it will contain all its profile items. By default,
 * $user_profile['summary'] is provided, which contains data on the user's
 * history. Other data can be included by modules. $user_profile['user_picture']
 * is available for showing the account picture.
 *
 * Available variables:
 *   - $user_profile: An array of profile items. Use render() to print them.
 *   - $user_url: The URL to the detail page of the profile.
 *   - $display_name: The display name.
 *   - $field_user_picture: The profile picture.
 *   - $field_user_picture_copyright: The profile picture's copyright.
 *   - $field_user_constituency: The constituency.
 *   - $field_user_party: The party.
 *   - $questions: The number of questions the user has received.
 *   - $answers: The number of questions the user has answered.
 *   - $answer_ratio: The percentage of answered questions.
 *
 * @see user-profile-category.tpl.php
 *   Where the html is handled for the group.
 * @see user-profile-item.tpl.php
 *   Where the html is handled for each item in the group.
 * @see template_preprocess_user_profile()
 *
 * @ingroup themeable
 */
?>



<article class="deputy detail"<?php print $attributes; ?>>
  <div class="container">

    <div class="deputy__intro">
      <div class="deputy__intro__sidebar">
        <div class="deputy__image">
          <?php print render($user_profile['field_user_picture']); ?>
        </div>
        <a href="#" class="btn btn--block">Frage stellen</a>
        <?php print render($user_profile['field_user_picture_copyright']); ?>
      </div>
      <div class="deputy__intro__content">
        <header>
          <h1 class="deputy__title"><?php print render($user_profile['field_user_fname']); ?> <?php print render($user_profile['field_user_lname']); ?></h1>
          <div class="deputy__subtitle">
            <?php print render($user_profile['field_user_party']); ?> | Abgeordneter Bundestag
          </div>
        </header>

        <div class="hstats">
          <div class="hstats__item hstats__item--donut-digit">
            <div class="hstats__item__display mh-item-nr" data-mh="hstats">
              <span class="d3 d3--gauge"
                    data-d3-gauge
                    data-percentage="30"
                    data-track-width="10"
                    data-track-colour="ccc"
                    data-fill-colour="f46b3b"
                    data-text-colour="444"
                    data-stroke-colour="FFFFFF"
                    data-stroke-spacing="2">
                <span><?php print $answer_ratio; ?>%</span>
              </span>
            </div>
            <div class="hstats__item__label mh-item-nr" data-mh="hstats">
              <div class="hstats__item__label__value">
                <?php print $user_profile['field_user_answers_give']['#items'][0]['value']; ?>&thinsp;/&thinsp;<?php print $user_profile['field_user_questions_get']['#items'][0]['value']; ?>
              </div>
              <?php print format_plural($user_profile['field_user_questions_get']['#items'][0]['value'], t('Answered question'), t('Answered questions')) ?>
              <i class="icon icon-info" data-tooltip-content="<?php print t('tooltip-profil-answered-questions') ?>"></i>
            </div>
          </div>
          <div class="hstats__item hstats__item--donut-digit">
            <div class="hstats__item__display mh-item-nr" data-mh="hstats">
              <span class="d3 d3--gauge"
                    data-d3-gauge
                    data-percentage="68"
                    data-track-width="10"
                    data-track-colour="ccc"
                    data-fill-colour="f46b3b"
                    data-text-colour="444"
                    data-stroke-colour="FFFFFF"
                    data-stroke-spacing="2">
                <span><?php print $answer_ratio; ?>%</span>
              </span>
            </div>
            <div class="hstats__item__label mh-item-nr" data-mh="hstats">
              <div class="hstats__item__label__value">
                xx&thinsp;/&thinsp;XX
              </div>
              <?php print format_plural($user_profile['field_user_questions_get']['#items'][0]['value'], t('Vote by name'), t('Votes by name')) ?>
              <i class="icon icon-info" data-tooltip-content="<?php print t('tooltip-profil-votes-by-name') ?>"></i>
            </div>
          </div>

          <div class="hstats__item hstats__item--digit">
            <div class="hstats__item__label mh-item-nr" data-mh="hstats">
              <div class="hstats__item__label__value">
                <span class="hstats__item__label__value_min">160.000</span> € &ndash; <span class="hstats__item__label__value_max">220.000</span> €
              </div>
              <?php print t('Additional income min.') ?> <i class="icon icon-info" data-tooltip-content="<?php print t('tooltip-profil-additional-income') ?>"></i> <?php print t('Additional income max.') ?>
            </div>
          </div>

        </div>

        <dl class="dl">
          <?php if ($user_profile['field_user_birthday']): ?>
            <dt class="dl__dt"><?php print $user_profile['field_user_birthday']['#title']; ?></dt>
            <dd class="dl__dd"><?php print $user_profile['field_user_birthday'][0]['#markup']; ?> (<?php print $user_profile['field_user_age'][0]['#markup']; ?> Jahre)</dd>
          <?php endif; ?>
          <?php if ($user_profile['field_user_childs']): ?>
            <dt class="dl__dt"><?php print $user_profile['field_user_childs']['#title']; ?></dt>
            <dd class="dl__dd"><?php print $user_profile['field_user_childs'][0]['#markup']; ?></dd>
          <?php endif; ?>
          <?php if ($user_profile['field_user_marriage_status']): ?>
            <dt class="dl__dt"><?php print $user_profile['field_user_marriage_status']['#title']; ?></dt>
            <dd class="dl__dd"><?php print $user_profile['field_user_marriage_status'][0]['#markup']; ?></dd>
          <?php endif; ?>
          <?php if ($user_profile['field_user_address']['#items'][0]['locality']): ?>
            <dt class="dl__dt"><?php print t('Wohnort') ?></dt>
            <dd class="dl__dd"><?php print $user_profile['field_user_address']['#items'][0]['locality']; ?></dd>
          <?php endif; ?>
          <?php if ($user_profile['field_user_education']): ?>
            <dt class="dl__dt"><?php print $user_profile['field_user_education']['#title']; ?></dt>
            <dd class="dl__dd"><?php print $user_profile['field_user_education'][0]['#markup']; ?></dd>
          <?php endif; ?>
          <?php if ($user_profile['field_user_children']): ?>
            <dt class="dl__dt"><?php print $user_profile['field_user_children']['#title']; ?></dt>
            <dd class="dl__dd"><?php print $user_profile['field_user_children'][0]['#markup']; ?></dd>
          <?php endif; ?>
          <?php if ($user_profile['field_user_list']): ?>
            <dt class="dl__dt"><?php print $user_profile['field_user_list']['#title']; ?></dt>
            <dd class="dl__dd"><?php print $user_profile['field_user_list'][0]['#markup']; ?></dd>
          <?php endif; ?>
          <?php if ($user_profile['field_user_list_position']): ?>
            <dt class="dl__dt"><?php print $user_profile['field_user_list_position']['#title']; ?></dt>
            <dd class="dl__dd"><?php print $user_profile['field_user_list_position'][0]['#markup']; ?></dd>
          <?php endif; ?>
          <?php if ($user_profile['field_user_parliament']): ?>
            <dt class="dl__dt"><?php print $user_profile['field_user_parliament']['#title']; ?></dt>
            <dd class="dl__dd"><?php print $user_profile['field_user_parliament'][0]['#markup']; ?></dd>
          <?php endif; ?>

          <?php if ($user_profile['field_user_election_result']): ?>
            <dt class="dl__dt"><?php print $user_profile['field_user_election_result']['#title']; ?></dt>
            <dd class="dl__dd"><?php print $user_profile['field_user_election_result'][0]['#markup']; ?></dd>
          <?php endif; ?>
          <?php if ($user_profile['field_user_constituency']): ?>
            <dt class="dl__dt"><?php print $user_profile['field_user_constituency']['#title']; ?></dt>
            <dd class="dl__dd"><?php print $user_profile['field_user_constituency'][0]['#markup']; ?></dd>
          <?php endif; ?>

        </dl>
      </div>
    </div>
  </div>
  <div class="tabs">
    <div class="tabs__navigation">
      <div class="container">
        <ul class="nav nav--tab">
          <li class="nav__item nav__item--active"><a class="nav__item__link" href="#fragen-und-antworten" data-tab-content="fragen-und-antworten">Fragen & Antworten</a></li>
          <li class="nav__item"><a class="nav__item__link" href="#abstimmverhalten" data-tab-content="abstimmverhalten">Abstimmverhalten</a></li>
          <li class="nav__item"><a class="nav__item__link" href="#nebentaetigkeiten" data-tab-content="nebentaetigkeiten">Nebentätigkeiten</a></li>
          <li class="nav__item"><a class="nav__item__link" href="#ausschussmitgliedschaften" data-tab-content="ausschussmitgliedschaften">Ausschußmitgliedschaften</a></li>
        </ul>
      </div>
    </div>
    <section id="fragen-und-antworten" class="tabs__content tabs__content--active" data-tab-content="fragen-und-antworten">
      <div class="container">
        <div class="tabs__content__title option-title">
          <h2 data-tab-content="fragen-und-antworten">Fragen & Antworten</h2>
          <div class="form__item form__item--select">
            <select name="#" id="#" class="form__item__control" multiple="multiple" data-placeholder="Tags auswählen" data-width="100%">
              <option value="#">Tag 1</option>
              <option value="#">Tag 2</option>
              <option value="#">Tag 3</option>
              <option value="#">Tag 4</option>
              <option value="#">Tag 5</option>
            </select>
          </div>
          <div class="form__item form__item--checkbox">
            <label for="filter_show_only_answered" class="form__item__label">
              <input name="filter_show_only_answered" id="filter_show_only_answered" class="form__item__control" type="checkbox">
              <?php print t('Nur beantwortete anzeigen') ?>
            </label>
          </div>
        </div>
        <div class="tabs__content__content">
          <div class="swiper-container swiper-container--tile">
            <div class="swiper-wrapper">
              <div class="question tile">
                <div class="question__meta tile__meta">
                  <a href="#" class="quesion__meta__tag tile__meta__tag"># Demokratie & Bürgerrechte</a>
                  <span class="question__meta__date tile__meta__date">17. Jan. 2017</span>
                </div>
                <div class="question__question mh-item-tile" data-mh="questionTitle">
                  <h3 class="question__question__title">[...] für wie wirkungsvoll halten Sie Grenzkontrollen um Terroranschläge zu verhindern? [...]</h3>
                  <p class="question__question__author">Von: Wilfried Meißner</p>
                </div>
                <div class="question__answer mh-item-tile" data-mh="questionAnswer">
                  <p class="question__answer__author">Antwort von <strong>Gregor Gysi</strong></p>
                  <p>Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores ... rebum.</p>
                </div>
                <ul class="question__links tile__links tile__links--2">
                  <li class="tile__links__item"><a class="tile__links__item__link" href="<?php print $user_url ?>#fragen">12 <?php print t('Fragesteller') ?></a></li>
                  <li class="tile__links__item"><a class="tile__links__item__link" href="<?php print $user_url ?>"><?php print t('Details') ?></a></li>
                </ul>
              </div>
              <div class="question tile">
                <div class="question__meta tile__meta">
                  <a href="#" class="quesion__meta__tag tile__meta__tag"># Demokratie & Bürgerrechte</a>
                  <span class="question__meta__date tile__meta__date">17. Jan. 2017</span>
                </div>
                <div class="question__question mh-item-tile" data-mh="questionTitle">
                  <h3 class="question__question__title">[...] lorem ipsum dolor sit amet invidunt?</h3>
                  <p class="question__question__author">Von: Wilfried Meißner</p>
                </div>
                <div class="question__answer mh-item-tile" data-mh="questionAnswer">
                  <p class="question__answer__author">Antwort von <strong>Gregor Gysi</strong></p>
                  <p>Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores ... rebum.</p>
                </div>
                <ul class="question__links tile__links tile__links--2">
                  <li class="tile__links__item"><a class="tile__links__item__link" href="<?php print $user_url ?>#fragen">12 <?php print t('Fragesteller') ?></a></li>
                  <li class="tile__links__item"><a class="tile__links__item__link" href="<?php print $user_url ?>"><?php print t('Details') ?></a></li>
                </ul>
              </div>
              <div class="question tile">
                <div class="question__meta tile__meta">
                  <a href="#" class="quesion__meta__tag tile__meta__tag"># Demokratie & Bürgerrechte</a>
                  <span class="question__meta__date tile__meta__date">17. Jan. 2017</span>
                </div>
                <div class="question__question mh-item-tile" data-mh="questionTitle">
                  <h3 class="question__question__title">[...] für wie wirkungsvoll halten Sie Grenzkontrollen um Terroranschläge zu verhindern? [...]</h3>
                  <p class="question__question__author">Von: Wilfried Meißner</p>
                </div>
                <div class="question__answer mh-item-tile" data-mh="questionAnswer">
                  <p class="question__answer__author">Antwort von <strong>Gregor Gysi</strong></p>
                  <p>Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores ... rebum.</p>
                </div>
                <ul class="question__links tile__links tile__links--2">
                  <li class="tile__links__item"><a class="tile__links__item__link" href="<?php print $user_url ?>#fragen">12 <?php print t('Fragesteller') ?></a></li>
                  <li class="tile__links__item"><a class="tile__links__item__link" href="<?php print $user_url ?>"><?php print t('Details') ?></a></li>
                </ul>
              </div>
              <div class="question tile">
                <div class="question__meta tile__meta">
                  <a href="#" class="quesion__meta__tag tile__meta__tag"># Demokratie & Bürgerrechte</a>
                  <span class="question__meta__date tile__meta__date">17. Jan. 2017</span>
                </div>
                <div class="question__question mh-item-tile" data-mh="questionTitle">
                  <h3 class="question__question__title">[...] für wie wirkungsvoll halten Sie Grenzkontrollen um Terroranschläge zu verhindern? [...]</h3>
                  <p class="question__question__author">Von: Wilfried Meißner</p>
                </div>
                <div class="question__answer mh-item-tile" data-mh="questionAnswer">
                  <p class="question__answer__author">Antwort von <strong>Gregor Gysi</strong></p>
                  <p>Lorem ipsum dolor sit amet, consetetur sadipscing elitr, ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores ... rebum.</p>
                </div>
                <ul class="question__links tile__links tile__links--2">
                  <li class="tile__links__item"><a class="tile__links__item__link" href="<?php print $user_url ?>#fragen">12 <?php print t('Fragesteller') ?></a></li>
                  <li class="tile__links__item"><a class="tile__links__item__link" href="<?php print $user_url ?>"><?php print t('Details') ?></a></li>
                </ul>
              </div>
              <div class="question tile">
                <div class="question__meta tile__meta">
                  <a href="#" class="quesion__meta__tag tile__meta__tag"># Demokratie & Bürgerrechte</a>
                  <span class="question__meta__date tile__meta__date">17. Jan. 2017</span>
                </div>
                <div class="question__question mh-item-tile" data-mh="questionTitle">
                  <h3 class="question__question__title">[...] für wie wirkungsvoll halten Sie Grenzkontrollen um Terroranschläge zu verhindern? [...]</h3>
                  <p class="question__question__author">Von: Wilfried Meißner</p>
                </div>
                <div class="question__answer mh-item-tile" data-mh="questionAnswer">
                  <p class="question__answer__author">Antwort von <strong>Gregor Gysi</strong></p>
                  <p>Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores ... rebum.</p>
                </div>
                <ul class="question__links tile__links tile__links--2">
                  <li class="tile__links__item"><a class="tile__links__item__link" href="<?php print $user_url ?>#fragen">12 <?php print t('Fragesteller') ?></a></li>
                  <li class="tile__links__item"><a class="tile__links__item__link" href="<?php print $user_url ?>"><?php print t('Details') ?></a></li>
                </ul>
              </div>
              <div class="question tile">
                <div class="question__meta tile__meta">
                  <a href="#" class="quesion__meta__tag tile__meta__tag"># Demokratie & Bürgerrechte</a>
                  <span class="question__meta__date tile__meta__date">17. Jan. 2017</span>
                </div>
                <div class="question__question mh-item-tile" data-mh="questionTitle">
                  <h3 class="question__question__title">[...] für wie wirkungsvoll halten Sie Grenzkontrollen um Terroranschläge zu verhindern? [...]</h3>
                  <p class="question__question__author">Von: Wilfried Meißner</p>
                </div>
                <div class="question__answer mh-item-tile" data-mh="questionAnswer">
                  <p class="question__answer__author">Antwort von <strong>Gregor Gysi</strong></p>
                  <p>Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores ... rebum.</p>
                </div>
                <ul class="question__links tile__links tile__links--2">
                  <li class="tile__links__item"><a class="tile__links__item__link" href="<?php print $user_url ?>#fragen">12 <?php print t('Fragesteller') ?></a></li>
                  <li class="tile__links__item"><a class="tile__links__item__link" href="<?php print $user_url ?>"><?php print t('Details') ?></a></li>
                </ul>
              </div>
              <div class="question tile">
                <div class="question__meta tile__meta">
                  <a href="#" class="quesion__meta__tag tile__meta__tag"># Demokratie & Bürgerrechte</a>
                  <span class="question__meta__date tile__meta__date">17. Jan. 2017</span>
                </div>
                <div class="question__question mh-item-tile" data-mh="questionTitle">
                  <h3 class="question__question__title">[...] für wie wirkungsvoll halten Sie Grenzkontrollen um Terroranschläge zu verhindern? [...]</h3>
                  <p class="question__question__author">Von: Wilfried Meißner</p>
                </div>
                <div class="question__answer mh-item-tile" data-mh="questionAnswer">
                  <p class="question__answer__author">Antwort von <strong>Gregor Gysi</strong></p>
                  <p>Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores ... rebum.</p>
                </div>
                <ul class="question__links tile__links tile__links--2">
                  <li class="tile__links__item"><a class="tile__links__item__link" href="<?php print $user_url ?>#fragen">12 <?php print t('Fragesteller') ?></a></li>
                  <li class="tile__links__item"><a class="tile__links__item__link" href="<?php print $user_url ?>"><?php print t('Details') ?></a></li>
                </ul>
              </div><div class="question tile">
                <div class="question__meta tile__meta">
                  <a href="#" class="quesion__meta__tag tile__meta__tag"># Demokratie & Bürgerrechte</a>
                  <span class="question__meta__date tile__meta__date">17. Jan. 2017</span>
                </div>
                <div class="question__question mh-item-tile" data-mh="questionTitle">
                  <h3 class="question__question__title">[...] für wie wirkungsvoll halten Sie Grenzkontrollen um Terroranschläge zu verhindern? [...]</h3>
                  <p class="question__question__author">Von: Wilfried Meißner</p>
                </div>
                <div class="question__answer mh-item-tile" data-mh="questionAnswer">
                  <p class="question__answer__author">Antwort von <strong>Gregor Gysi</strong></p>
                  <p>Lorem ipsum dolor sit amet, et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores ... rebum.</p>
                </div>
                <ul class="question__links tile__links tile__links--2">
                  <li class="tile__links__item"><a class="tile__links__item__link" href="<?php print $user_url ?>#fragen">12 <?php print t('Fragesteller') ?></a></li>
                  <li class="tile__links__item"><a class="tile__links__item__link" href="<?php print $user_url ?>"><?php print t('Details') ?></a></li>
                </ul>
              </div>
              <div class="question tile">
                <div class="question__meta tile__meta">
                  <a href="#" class="quesion__meta__tag tile__meta__tag"># Demokratie & Bürgerrechte</a>
                  <span class="question__meta__date tile__meta__date">17. Jan. 2017</span>
                </div>
                <div class="question__question mh-item-tile" data-mh="questionTitle">
                  <h3 class="question__question__title">[...] für wie wirkungsvoll halten Sie Grenzkontrollen um Terroranschläge zu verhindern? [...]</h3>
                  <p class="question__question__author">Von: Wilfried Meißner</p>
                </div>
                <div class="question__answer mh-item-tile" data-mh="questionAnswer">
                  <p class="question__answer__author">Antwort von <strong>Gregor Gysi</strong></p>
                  <p>Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores ... rebum.</p>
                </div>
                <ul class="question__links tile__links tile__links--2">
                  <li class="tile__links__item"><a class="tile__links__item__link" href="<?php print $user_url ?>#fragen">12 <?php print t('Fragesteller') ?></a></li>
                  <li class="tile__links__item"><a class="tile__links__item__link" href="<?php print $user_url ?>"><?php print t('Details') ?></a></li>
                </ul>
              </div>
            </div>
            <div class="swiper-button-prev"></div>
            <div class="swiper-button-next"></div>
          </div>
          <a href="#" class="btn btn--white">Alle Fragen in der Übersicht</a>
        </div>
      </div>
    </section>
    <section id="abstimmverhalten" class="tabs__content" data-tab-content="abstimmverhalten">
      <div class="container">
        <div class="tabs__content__title option-title">
          <h2 data-tab-content="abstimmverhalten">Abstimmverhalten</h2>
        </div>
        <div class="tabs__content__content">
          <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. A ad atque ducimus error esse exercitationem fuga
            incidunt laudantium magni nemo, nobis nostrum omnis quae quaerat quia quo repellendus velit voluptatem.</p>
          <p>Amet natus, veritatis. Adipisci aperiam distinctio dolorum ea ex harum hic id incidunt inventore ipsa iusto,
            nesciunt obcaecati odit, officiis, praesentium provident quaerat saepe tempora vel velit. Deleniti
            dignissimos, sit?</p>
        </div>
      </div>
    </section>
    <section id="nebentaetigkeiten" class="tabs__content" data-tab-content="nebentaetigkeiten">
      <div class="container">
        <div class="tabs__content__title option-title">
          <h2 data-tab-content="nebentaetigkeiten">Nebentätigkeiten</h2>
        </div>
        <div class="tabs__content__content">
          <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. A ad atque ducimus error esse exercitationem fuga
            incidunt laudantium magni nemo, nobis nostrum omnis quae quaerat quia quo repellendus velit voluptatem.</p>
          <p>Amet natus, veritatis. Adipisci aperiam distinctio dolorum ea ex harum hic id incidunt inventore ipsa iusto,
            nesciunt obcaecati odit, officiis, praesentium provident quaerat saepe tempora vel velit. Deleniti
            dignissimos, sit?</p>
        </div>
      </div>
    </section>
    <section id="ausschussmitgliedschaften" class="tabs__content" data-tab-content=ausschussmitgliedschaften">
      <div class="container">
        <div class="tabs__content__title option-title">
          <h2 data-tab-content="ausschussmitgliedschaften">Ausschußmitgliedschaften</h2>
        </div>
        <div class="tabs__content__content">
          <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. A ad atque ducimus error esse exercitationem fuga
            incidunt laudantium magni nemo, nobis nostrum omnis quae quaerat quia quo repellendus velit voluptatem.</p>
          <p>Amet natus, veritatis. Adipisci aperiam distinctio dolorum ea ex harum hic id incidunt inventore ipsa iusto,
            nesciunt obcaecati odit, officiis, praesentium provident quaerat saepe tempora vel velit. Deleniti
            dignissimos, sit?</p>
        </div>
      </div>
    </section>
  </div>
</article>


<br><br><br><br><br><br><br><br><br><br><br><br><br>
<pre>
  <?php print_r($user_profile['field_user_constituency']); ?>
</pre>