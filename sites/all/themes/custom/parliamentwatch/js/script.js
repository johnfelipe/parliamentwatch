/**
 * @file
 * Provides behaviors for the parliamentwatch theme.
 */

(function ($) {

   "use strict";

  var windowWidth = window.innerWidth,
    windowHeight = window.outerHeight,

    breakpointXsMin = 480,
    breakpointXsMax = breakpointXsMin - 1,

    breakpointSMin = 768,
    breakpointSMax = breakpointSMin - 1,

    breakpointMMin = 992,
    breakpointMMax = breakpointMMin - 1,

    breakpointLMin = 1200,
    breakpointLMax = breakpointLMin - 1,

    beige = '#f3efe6',
    orange = '#f46b3b';

  var iterateTime = 200;

  /**
   * Calls given function after wait milliseconds.
   *
   * @param {Function} func
   *   The function to be debounced.
   * @param {String} wait
   *   The time in milliseconds to wait before the function is executed.
   * @param {Bool} immediate
   *   Indicates whether the function should be executed immediately.
   *
   * @see https://davidwalsh.name/javascript-debounce-function
   */
  function debounce(func, wait, immediate) {
    var timeout;
    return function () {
      var context = this;
      var args = arguments;
      var later = function () {
        timeout = null;
        if (!immediate) {
          func.apply(context, args)
        };
      };
      var callNow = immediate && !timeout;
      clearTimeout(timeout);
      timeout = setTimeout(later, wait);
      if (callNow) {
        func.apply(context, args);
      }
    };
  };

  /**
   * Adds class to html-tag for styling purpose
   */
  function docReadyClass() {
    $('html').addClass('docready');
  }

  /**
   * Adds loading animation to tile-wrappers.
   */
  function addTileWrapperLoader() {
    $('.tile-wrapper').addClass('tile-wrapper--loading').append('<div class="tile-wrapper__loader"><svg viewBox="0 0 65 65"> <g id="Page-1" stroke="none" stroke-width="1" fill="none" fill-rule="evenodd"> <g id="05_filter-textsuche" transform="translate(-744.000000, -698.000000)"> <g id="Loader" transform="translate(744.000000, 698.000000)"> <g id="Group-2"> <circle id="Oval" fill="none" cx="32.5" cy="32.5" r="32.5"></circle> <g id="Group" transform="translate(28.000000, 36.500000) scale(-1, -1) translate(-28.000000, -36.500000) translate(4.000000, 12.000000)" fill="#FFFFFF"> <path d="M35.0628019,13.4372093 C31.5458937,9.66976744 26.8985507,7.28372093 22,6.78139535 L22.3768116,0 C29.1594203,0.753488372 35.4396135,3.76744186 40.0869565,8.66511628 C44.8599034,13.6883721 47.6231884,19.9674419 48,27 L41.0917874,27 C40.7149758,22.1023256 38.5797101,17.2046512 35.0628019,13.4372093 Z M19.9055118,0 L19.6535433,6.875 C13.984252,6.875 8.69291339,9.125 4.66141732,13 L0,8 C5.29133858,2.75 12.3464567,0 19.9055118,0 C20.0314961,0 20.0314961,0 19.9055118,0 Z M34,44.1807229 C35.7906977,42.7349398 37.1976744,40.8072289 38.2209302,39 L45,41.0481928 C43.4651163,43.939759 41.2906977,46.7108434 38.7325581,49 L34,44.1807229 Z M46.3030303,38 L40,35.9701493 C40.8484848,34.1791045 41.2121212,32.1492537 41.3333333,30 L48,30 C47.8787879,32.8656716 47.3939394,35.6119403 46.3030303,38 Z" id="Combined-Shape"></path> </g> <g id="Group" transform="translate(13.000000, 4.000000)" fill="#FF6C36"> <path d="M35.0628019,13.4372093 C31.5458937,9.66976744 26.8985507,7.28372093 22,6.78139535 L22.3768116,0 C29.1594203,0.753488372 35.4396135,3.76744186 40.0869565,8.66511628 C44.8599034,13.6883721 47.6231884,19.9674419 48,27 L41.0917874,27 C40.7149758,22.1023256 38.5797101,17.2046512 35.0628019,13.4372093 Z M19.9055118,0 L19.6535433,6.875 C13.984252,6.875 8.69291339,9.125 4.66141732,13 L0,8 C5.29133858,2.75 12.3464567,0 19.9055118,0 C20.0314961,0 20.0314961,0 19.9055118,0 Z M34,44.1807229 C35.7906977,42.7349398 37.1976744,40.8072289 38.2209302,39 L45,41.0481928 C43.4651163,43.939759 41.2906977,46.7108434 38.7325581,49 L34,44.1807229 Z M46.3030303,38 L40,35.9701493 C40.8484848,34.1791045 41.2121212,32.1492537 41.3333333,30 L48,30 C47.8787879,32.8656716 47.3939394,35.6119403 46.3030303,38 Z" id="Combined-Shape"></path> </g> </g> </g> </g> </g> </svg> <svg viewBox="0 0 65 65"> <g id="Page-1" stroke="none" stroke-width="1" fill="none" fill-rule="evenodd"> <g id="05_filter-textsuche" transform="translate(-744.000000, -698.000000)"> <g id="Loader" transform="translate(744.000000, 698.000000)"> <g id="Group-4"> <circle id="Oval" fill="none" cx="32.5" cy="32.5" r="32.5"></circle> <g id="Group" transform="translate(29.000000, 34.000000) scale(-1, -1) translate(-29.000000, -34.000000) translate(13.000000, 18.000000)" fill="#FFFFFF"> <path d="M23,12.68 L28.2173913,8 C30.4347826,10.64 31.6086957,13.64 32,17 L24.826087,17 C24.4347826,15.44 23.9130435,14 23,12.68 Z M24.2926829,20 L31,20 C30.7560976,24.5 28.6829268,28.875 25.5121951,32 L21,27 C22.8292683,25.125 24.0487805,22.625 24.2926829,20 Z M0,5.125 C3.38,1.875 8.06,0 13,0 L12.61,6.875 C9.62,7 7.02,8.125 4.81,10 L0,5.125 Z M21.0116279,10 C19.3488372,8.48101266 17.1744186,7.34177215 15,6.96202532 L15.3837209,0 C19.3488372,0.506329114 23.0581395,2.40506329 26,5.18987342 L21.0116279,10 Z" id="Combined-Shape"></path> </g> <g id="Group" transform="translate(19.000000, 14.000000)" fill="#FF6C36"> <path d="M23,12.68 L28.2173913,8 C30.4347826,10.64 31.6086957,13.64 32,17 L24.826087,17 C24.4347826,15.44 23.9130435,14 23,12.68 Z M24.2926829,20 L31,20 C30.7560976,24.5 28.6829268,28.875 25.5121951,32 L21,27 C22.8292683,25.125 24.0487805,22.625 24.2926829,20 Z M0,5.125 C3.38,1.875 8.06,0 13,0 L12.61,6.875 C9.62,7 7.02,8.125 4.81,10 L0,5.125 Z M21.0116279,10 C19.3488372,8.48101266 17.1744186,7.34177215 15,6.96202532 L15.3837209,0 C19.3488372,0.506329114 23.0581395,2.40506329 26,5.18987342 L21.0116279,10 Z" id="Combined-Shape"></path> </g> </g> </g> </g> </g> </svg></div>')
  }

  /**
   * Removes loading animation from tile-wrappers.
   */
  function removeTileWrapperLoader() {
    $('.tile-wrapper').removeClass('tile-wrapper--loading');
  }

  /**
   * Maps vote statistics to format expected by D3.
   *
   * @param {Object} votes
   *   Vote statistics to map to D3 data.
   *
   * @returns {Object}
   *   Vote statistics ready for D3.
   */
  function mapVotes(votes) {
    var map = {
      'yes': {name: 'Ja', 'color': '#9fd773'},
      'no': {name: 'Nein', color: '#cc6c5b'},
      'abstain': {name: 'Enthalten', color: '#e2e2e2'},
      'no-show': {name: 'Nicht abgestimmt', color: '#a6a6a6'}
    };

    var data = [];

    for (var key in votes) {
      map[key].count = votes[key];
      data.push(map[key]);
    }

    return data;
  }

  /**
   * Returns dialogue statistics ready for D3.
   *
   * @returns {Array}
   *   Dialogue statistics ready for D3.
   */
  Drupal.parseDialogues = function() {
    var data = [];

    for (var key in window.dialogues) {
      data.push({'name': key, 'value': window.dialogues[key]});
    }

    return data;
  };

  /**
   * Returns vote statistics suitable for D3.
   *
   * @returns {Array}
   *   Vote statistics ready for D3.
   */
  Drupal.parseVotes = function() {
    var data = {'yes': 0, 'no': 0, 'abstain': 0, 'no-show': 0};

    window.votes.forEach(function (v) {
      data[v.vote]++;
    });

    return mapVotes(data);
  };

  /**
   * Returns votes statistics by party ready for D3.
   *
   * @returns {Array}
   *   Vote statistics by party ready for D3.
   */
  Drupal.parseResultsByParty = function() {
    var data = {};

    for (var party in window.resultsByParty) {
      data[party] = mapVotes(window.resultsByParty[party]);
    }

    return data;
  };

  /**
   * Returns vote statistics suitable for D3.
   *
   * @returns {Array}
   *   Vote statistics ready for D3.
   */
  Drupal.parseResultsTotal = function() {
    var data = {'yes': 0, 'no': 0, 'abstain': 0, 'no-show': 0};

    for (var party in window.resultsByParty) {
      data['yes'] += window.resultsByParty[party]['yes'];
      data['no'] += window.resultsByParty[party]['no'];
      data['abstain'] += window.resultsByParty[party]['abstain'];
      data['no-show'] += window.resultsByParty[party]['no-show'];
    }

    return mapVotes(data);
  };


  /**
   * Attaches the main navigation behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   *   Converts the main navigation to a sidebar menu.
   */
  Drupal.behaviors.mainNavigation = {
    attach: function () {
      var activeMenuItem = $('.nav__item.nav__item--active').index();

      $('[data-sidebar-trigger]').click(function () {
        $(this).toggleClass('lines-button-close');
        $('[data-sidebar-container]').toggleClass('sidebar-open');
      });
      /* 2nd-Navigation level with optional swiper integration */
      var secondlevel = $('.header__bottom nav');
      secondlevel.append('<div class="swiper-button-prev"></div><div class="swiper-button-next"></div>');

      var mySwiper = new Swiper('.header__bottom nav', {
        slideClass: 'nav__item',
        wrapperClass: 'nav',
        speed: 400,
        slidesPerView: 'auto',
        resistance: true,
        resistanceRatio: 0.5,
        nextButton: secondlevel.find('.swiper-button-next'),
        prevButton: secondlevel.find('.swiper-button-prev'),
        onInit: function(swiper){
          resizeMainNavigation();

          swiper.update();
          swiper.slideTo(activeMenuItem);
        }
      });

      function resizeMainNavigation() {
        var secondlevel = $('.header__bottom nav');

        var subnavOffset = $('.header__subnav__indicator').outerWidth();
        var wrapperPadding = parseInt($('.header__bottom__inner').css('padding-left'), 10);
        var indicatorPadding = parseInt($('.header__subnav__indicator').css('padding-left'), 10);

        if (wrapperPadding > 0) {
          var subnavOffsetValue = subnavOffset - indicatorPadding;
        } else {
          var subnavOffsetValue = subnavOffset;
        }
        secondlevel.css('padding-left', subnavOffsetValue + 'px');
        secondlevel.css('padding-right', '30px');
      }

      var windowResize = debounce(function () {
        resizeMainNavigation();
      }, 150);

      // Event-Listener
      window.addEventListener('resize', windowResize);
    }
  };

  /**
   * Attaches the dropdown behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.dropdown = {
    attach: function (context, settings) {
      $(window).click(function () {
        $('.dropdown__list--open').removeClass('dropdown__list--open');
      });

      $('.dropdown .dropdown__trigger').click(function (event) {
        var dropdownTrigger = $(this);
        var dropdown = dropdownTrigger.parent('.dropdown');

        event.preventDefault();

        if (dropdown.parents('.filterbar')) {
          dropdownTrigger.addClass('dropdown__trigger--active');
          if (dropdown.hasClass('dropdown--open')) {
            dropdown.removeClass('dropdown--open');
          } else {
            $('.filterbar').find('.dropdown').removeClass('dropdown--open');
            dropdown.addClass('dropdown--open');
          }
        }
      });
    }
  };

  /**
   * Attaches the dropdown hover behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.dropdownHover = {
    attach: function () {
      function dropdownOpen() {
        $(this).find('.dropdown__trigger').addClass('dropdown__trigger--active');
        $(this).addClass('dropdown--open');
      }

      function dropdownClose() {
        $(this).find('.dropdown__trigger').removeClass('dropdown__trigger--active');
        $(this).removeClass('dropdown--open');
      }

      $(".dropdown--hover").hoverIntent({
        over: dropdownOpen,
        out: dropdownClose
      });
      $('.dropdown__text').click(function (event) {
        event.preventDefault();
      });
    }
  };

  /**
   * Attaches the content offset behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.contentOffset = {
    attach: function () {
      function contentOffset() {
        windowWidth = window.innerWidth;
        windowHeight = window.outerHeight;
        var mainNavHeight = $('.header__nav').height(),
          subNavHeight = $('.header__subnav').height(),
          headerHeight = $('#header').height(),
          contentOffset = 0;

        if (windowWidth >= breakpointMMin) {
          contentOffset = headerHeight - 1;

        } else {
          contentOffset = 0;
        }
        $('#content').css('margin-top', contentOffset);
        setTimeout(docReadyClass, 200);
      }
      contentOffset();
      var windowResize = debounce(function () {
        contentOffset();
      }, 150);
      window.addEventListener('resize', windowResize);
    }
  };

  /**
   * Attaches the local scroll behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.initLocalScroll = {
    attach: function (context) {
      $('[data-localScroll]', context).once('initLocalScroll', function () {
        $(this).on("click", function (event) {
          var hrefValue = $(this).attr('href');
          var scrollOffset = $('#header').height() * -1;
          $(window).scrollTo($(hrefValue), 800, {
            offset: {
              top: scrollOffset
            }
          });
          event.preventDefault();
        });
      });
    }
  };

  /**
   * Attaches the tooltip behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.tooltip = {
    attach: function (context) {
      $('[data-tooltip-content]', context).once('tooltip', function () {
        $(this).hover(function () {
          var tooltipContent = $(this).attr('data-tooltip-content');
          $(this).append('<div class="tooltip">' + tooltipContent + '</div>');
        }, function () {
          $(this).find('.tooltip').remove();
        });
      });
    }
  };

  /**
   * Attaches the newsletter widget behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.newsletterWidget = {
    attach: function (context) {
      $('#newsletter-widget', context).once('newsletterWidget', function () {
        $(this).submit(function (event) {
          var inputValue = $('#newsletter-widget-mail').val();
          //var data = new FormData(document.getElementById('newsletter_form'));
          var xhr = new XMLHttpRequest();
          document.getElementById('newsletter-widget').setAttribute('class', 'form loading');
          document.getElementById('newsletter-widget-button').disabled = true;

          xhr.open('GET', '//www.abgeordnetenwatch.de/newsletter/subscribe?email=' + inputValue, true);
          xhr.onload = function () {
            // do something to response
            var newsletter_message = document.getElementById('newsletter-widget-message');
            newsletter_message.setAttribute('class', 'form__item form__item--alert');

            if (this.responseText == "success") {
              newsletter_message.innerHTML = "Anmeldung erfolgreich, sie erhalten eine Email mit Bestätigungslink.";
              newsletter_message.setAttribute('class', 'form__item show form__item--alert form__item--alert-success');
            }
            else if (this.responseText == "email_error") {
              newsletter_message.innerHTML = "Ihre Email-Adresse konnte nicht angemeldet werden.";
              newsletter_message.setAttribute('class', 'form__item show form__item--alert form__item--alert-danger');
            }
            else if (this.responseText == "please_confirm") {
              newsletter_message.innerHTML = "Bitte bestätigen Sie Ihre Anmeldung.";
              newsletter_message.setAttribute('class', 'form__item show form__item--alert form__item--alert-info');
            }
            else if (this.responseText == "already_in_list") {
              newsletter_message.innerHTML = "Sie erhalten bereits unseren Newsletter.";
              newsletter_message.setAttribute('class', 'form__item show form__item--alert form__item--alert-info');
            }
            document.getElementById('newsletter-widget').setAttribute('class', 'form');
            document.getElementById('newsletter-widget-button').disabled = false;
          };
          xhr.send();
          event.preventDefault();
        });
      });
    }
  };

  /**
   * Attaches the tabs behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.tabs = {
    attach: function (context) {
      $('.tabs', context).once('tabs', function () {

        // Set initial tab by checking url for hash
        if (window.location.hash) {
          $('.tabs__navigation a[href=' + window.location.hash + ']').trigger("click");
        }
        // Set initial tab by checking url for hash
        if (history.pushState) {
          $(window).on('popstate', function (event) {
            var hashValue = window.location.hash;

            if ($('.nav__item__link[href="' + hashValue + '"]').length > 0) {
              // Set nav-item classes
              $('.tabs').find('.nav__item').removeClass('nav__item--active');
              $('.nav__item__link[href="' + hashValue + '"]').parents('.nav__item').addClass('nav__item--active');

              // Set tab-content classes
              $('.tabs').find('.tabs__content').removeClass('tabs__content--active');
              $(hashValue).addClass('tabs__content--active');
            }
          });
        }

        $('.tabs__content__content .pager__next a').each(function () {
          this.hash = $(this).parents('.tabs__content').attr('id');
        });

        $('.tabs__navigation a').on('click', function(event) {
          event.preventDefault();
          var link = $(this);
          var id = link[0].hash;

          // add hash-value of the clicked link-element to url
          if (history.pushState) {
            history.pushState(id, null, id);
          }
          // Set nav-item classes
          link.parents('.tabs').find('.nav__item').removeClass('nav__item--active');
          link.parent('.nav__item').addClass('nav__item--active');

          // Set tab-content classes
          link.parents('.tabs').find('.tabs__content').removeClass('tabs__content--active');
          $(id).addClass('tabs__content--active');

          Drupal.attachBehaviors(link.parents('.tabs').find('.swiper-container--tile'));
        });
      });
    }
  };

  /**
   * Attaches the swiper tile behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.swiperTile = {
    attach: function () {
      $('.swiper-container--tile').each(function (index, element) {
        var $this = $(this);
        $this.swiper({
          slideClass: 'tile',
          loop: false,
          spaceBetween: 20,
          slidesPerView: 3,
          slidesPerGroup: 3,
          nextButton: $this.find('.swiper-button-next'),
          prevButton: $this.find('.swiper-button-prev'),
          pagination: $this.find('.swiper-pagination'),
          paginationType: 'fraction',
          breakpoints: {
            550: {
              slidesPerView: 1,
              slidesPerGroup: 1
            },
            768: {
              slidesPerView: 2,
              slidesPerGroup: 2
            },
            992: {
              slidesPerView: 2,
              slidesPerGroup: 2
            },
            1200: {
              slidesPerView: 3,
              slidesPerGroup: 3
            }
          },
          onInit: function () {
            $('.question__question').matchHeight();
            $('.question__answer').matchHeight();
          }
        });
      });
    }
  };

  /**
   * Attaches the select2 behavior to select elements.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.select2init = {
    attach: function (context) {
      $('select.form__item__control', context).once('select2init', function () {
        $(this).select2({
          minimumResultsForSearch: 20,
          placeholder: 'Bitte wählen',
          dropdownParent: $('.page-container')
        });
        $(this).on("select2:open", function (e) {
          // close all dropdowns
          $('.dropdown__list').removeClass('dropdown__list--open');
        });
      });
    }
  };

  /**
   * Attaches the autosuggest behavior to form inputs.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.autosuggest = {
    attach: function (context) {
      $('.form__item__control--autosuggest', context).once('autosuggest', function () {
        if ($('.form__item__control--autosuggest').length) {
          var data = [];

          var politicians = new Bloodhound({
            initialize: true,
            prefetch: {
              url: $('.form__item__control--autosuggest').data('autosuggest-url'),
              cache: false,
            },
            identify: function (obj) {
              return obj.id;
            },
            queryTokenizer: Bloodhound.tokenizers.whitespace,
            datumTokenizer: Bloodhound.tokenizers.obj.whitespace('politicianDatum'),
          });

          var templates = {
            header: function (query) {
              return '<div class="autosuggest__header">Abgeordnete</div>';
            },
            notFound: function (query) {
              return '<div class="autosuggest__item autosuggest__item--empty">Kein Ergebnisse unter "' + query.query + '" Gefunden</div>';
            },
            suggestion: function (query) {
              return '' +
                '<div class="autosuggest__item">' +
                '<div class="autosuggest__item__image">' +
                '<img src="' + query.picture_url + '" alt="">' +
                '</div>' +
                '<div class="autosuggest__item__info">' +
                '<div class="autosuggest__item__name">' + query.name + '</div>' +
                '<div class="autosuggest__item__subtitle">' + query.parliament + ' <i class="icon icon-arrow-right"></i> <span class="party-indicator">' + query.party + '</span></div>' +
                '<div class="autosuggest__item__constituency">' + query.constituency + '</div>' +
                '</div>' +
                '<a href="' + query.url + '#block-pw-dialogues-profile" class="btn--small">' + Drupal.t('Ask now') + '</a>' +
                '</div>';
            }
          };

          var display = function (obj) {
            return obj.name;
          };

          $('.form__item--keys > .form__item__control').typeahead({
            minLength: 2,
            highlight: true
          }, {
            name: 'politicians',
            source: politicians,
            display: display,
            templates: templates
          });
        }
      });
    }
  };

  /**
   * Attaches the autosuggest behavior to form inputs.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.geolocate = {
    attach: function () {
      var geolocate = function(){
        $('.form--pw-globals-politician-search-form').addClass('loading');
        window.navigator.geolocation.getCurrentPosition(function(p){
          $.getJSON('//nominatim.openstreetmap.org/reverse?format=json&lat='+p.coords.latitude+'&lon='+p.coords.longitude+'&zoom=18&addressdetails=1&email=admin@abgeordnetenwatch.de',
            function(r) {
              $('.form--pw-globals-politician-search-form .form__item__control').val(r.address.postcode);
              $('.form--pw-globals-politician-search-form').removeClass('loading');
            });
        });
      };
      $('[data-geolocate]').click(geolocate);
    }
  };


  /**
   * Attaches the deputy detail behavior to deputy detail views.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.viewDeputyDetail = {
    attach: function () {
      function viewDeputyDetail() {
        windowWidth = window.innerWidth;

        if (windowWidth >= breakpointSMin) {
          $('.deputy__intro__sidebar header').prependTo('.deputy__intro__content');
        } else {
          $('.deputy__intro__content header').prependTo('.deputy__intro__sidebar');
        }

        /*
         * Implement select mechanism for changing the viewed profile (election period)
         */
        $('.deputy__intro select').on('select2:select', function (evt) {
          window.location.href = evt.currentTarget.value;
        });
      }

      viewDeputyDetail();

      var windowResize = debounce(function () {
        viewDeputyDetail();
      }, 150);

      // Event-Listener
      window.addEventListener('resize', windowResize);
    }
  };

  /**
   * Attaches the D3 vertical bars behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.d3BarsVertical = {
    attach: function (context) {
      $('[data-d3-bars-vert]', context).once('d3BarsVertical', function () {
        var wrapper = $(this)[0];
        var width = 600;
        var height = wrapper.dataset.height;
        var data = Drupal[wrapper.getAttribute('data-data')]();

        var colours = {
          fill: '#' + wrapper.dataset.fillColour,
          stroke: '#' + wrapper.dataset.strokeColour
        }
        // set the ranges
        var x = d3.scaleBand().rangeRound([0, width], .05);
        var y = d3.scaleLinear().range([height, 0]);

        // setup SVG wrapper

        var svg = d3.select(wrapper)
          .append("svg:svg")
          .attr("class", "chart")
          .attr('viewBox', '0 0 ' + width + ' ' + height)
          .attr('preserveAspectRatio', 'xMidYMid meet');

        // load the data
        data.forEach(function (d) {
          d.name = d.name;
          d.value = +d.value;
        });

        // scale the range of the data
        x.domain(data.map(function (d) {
          return d.name;
        }));
        y.domain([0, d3.max(data, function (d) {
          return d.value;
        })]);

        // ADD Group container
        var g = svg.append('g');

        // ADD Bars
        g.selectAll("bar")
          .data(data)
          .enter().append("rect")
          .attr("class", "bar")
          .attr('fill', colours.fill)
          .attr("x", function (d) {
            return x(d.name);
          })
          .attr("width", x.bandwidth() * .5)
          .attr("y", function (d) {
            return y(d.value);
          })
          .attr("height", function (d) {
            return height - y(d.value);
          })
          .on("mouseover", function (d) {
            var tooltip = $(this).parents('.d3').find('.d3__tooltip');
            tooltip.css("opacity", 1);
            if (d.value == 1) {
              tooltip.html(d.name + ' <span>(' + d.value + ' Frage)</span>').css("left", (d3.event.offsetX) + "px").css("bottom", height - y(d.value) + "px");
            } else {
              tooltip.html(d.name + ' <span>(' + d.value + ' Fragen)</span>').css("left", (d3.event.offsetX) + "px").css("bottom", height - y(d.value) + "px");
            }
          })
          .on("mouseout", function (d) {
            var tooltip = $(this).parents('.d3').find('.d3__tooltip');
            tooltip.css("opacity", 0);
          });
      });
    }
  };

  /**
   * Attaches the D3 horizontal bar behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.d3BarHorizontal = {
    attach: function (context) {
      $('[data-bar-horizontal]', context).once('d3BarHorizontal', function () {
        var wrapper = $(this)[0];
        var chartBar = $(this).find('.bar');

        var dataValue = wrapper.dataset.value;
        var dataValueMax = wrapper.dataset.value_max;

        var barWidth = 100 / dataValueMax * dataValue;
        var barWidth = barWidth + '%';

        setTimeout(function () {
          chartBar.attr('style', 'width:' + barWidth + ';');
        }, iterateTime);
        iterateTime += 400;
      });
    }
  };

  /**
   * Attaches the D3 donut behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.d3Donut = {
    attach: function (context) {
      $('[data-d3-donut]', context).once('d3Donut', function () {
        var wrapper = $(this)[0];
        var dataset = JSON.parse(wrapper.getAttribute('data-data'));

        var width = 360;
        var height = 360;
        var radius = Math.min(width, height) / 2;
        var donutWidth = 75;

        var svg = d3.select(wrapper)
          .append('svg')
          .attr('viewBox', '0 0 ' + width + ' ' + height)
          .attr('preserveAspectRatio', 'xMidYMid meet')
          .append('g')
          .attr('transform', 'translate(' + (width / 2) +
            ',' + (height / 2) + ')');

        var arc = d3.arc()
          .innerRadius(radius - donutWidth)
          .outerRadius(radius);

        var pie = d3.pie()
          .value(function (d) {
            return d.count;
          })
          .sort(null);

        var path = svg.selectAll('path')
          .data(pie(dataset))
          .enter()
          .append('path')
          .attr('d', arc)
          .attr("fill", function (d) {
            return d.data.color;
          });
      });
    }
  };

  /**
   * Attaches the D3 donut with labels behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.d3DonutLabels = {
    attach: function (context) {
      $('[data-d3-donut-labels]', context).once('d3DonutLabels', function () {
        var wrapper = $(this)[0];
        var dataset = Drupal[wrapper.getAttribute('data-data')]();

        var width = 360;
        var height = 360;
        var radius = Math.min(width, height) / 2;
        var donutWidth = 75;

        var svg = d3.select(wrapper)
          .append('svg')
          .attr('viewBox', '0 0 ' + width + ' ' + height)
          .attr('preserveAspectRatio', 'xMidYMid meet')
          .append('g')
          .attr('transform', 'translate(' + (width / 2) +
            ',' + (height / 2) + ')');

        var arc = d3.arc()
          .innerRadius(radius - donutWidth)
          .outerRadius(radius);

        var pie = d3.pie()
          .value(function (d) {
            return d.count;
          })
          .sort(null);

        var path = svg.selectAll('path')
          .data(pie(dataset))
          .enter()
          .append('path')
          .attr('d', arc)
          .attr("fill", function (d) {
            return d.data.color;
          });

        // Define Labels

        var labelWrapper = d3.select(wrapper)
          .append("ul")
          .attr('class', 'd3__label');

        var labelItem = labelWrapper.selectAll('li')
          .data(pie(dataset))
          .enter()
          .append('li')
          .attr('class', 'd3__label__item')
          .html(function (d) {
            return d.data.count + ' ' + d.data.name;
          })
          .insert("span", ":first-child")
          .attr('class', 'd3__label__item__indicator')
          .attr('style', function (d) {
            return 'background-color:' + d.data.color;
          });
      });
    }
  };

  /**
   * Attaches the D3 donut with icon behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.d3DonutIcon = {
    attach: function (context) {
      $('[data-d3-donut-icon]', context).once('d3DonutIcon', function () {
        var wrapper = $(this)[0];
        var dataset = JSON.parse(wrapper.getAttribute('data-data'));
        var voteResult = d3.max(dataset, function (d) {
          return d.count;
        })

        var width = 360;
        var height = 360;
        var radius = Math.min(width, height) / 2;
        var donutWidth = 75;

        var svg = d3.select(wrapper)
          .append('svg')
          .attr('viewBox', '0 0 ' + width + ' ' + height)
          .attr('preserveAspectRatio', 'xMidYMid meet')
          .append('g')
          .attr('transform', 'translate(' + (width / 2) +
            ',' + (height / 2) + ')');

        var arc = d3.arc()
          .innerRadius(radius - donutWidth)
          .outerRadius(radius);

        var pie = d3.pie()
          .value(function (d) {
            return d.count;
          })
          .sort(null);

        var path = svg.selectAll('path')
          .data(pie(dataset))
          .enter()
          .append('path')
          .attr('d', arc)
          .attr("fill", function (d) {
            return d.data.color;
          });

        // Define Icon

        var iconWrapper = d3.select(wrapper)
          .append("i")
          .attr("class", "icon");

        dataset.forEach(function (d) {
          if (d.count == voteResult) {
            if (d.name == 'Ja') {
              iconWrapper
                .attr("class", "icon icon-ok")
                .attr("style", "color:" + d.color + ";");
            }
            if (d.name == 'Nein') {
              iconWrapper
                .attr("class", "icon icon-close")
                .attr("style", "color:" + d.color + ";");
            }
            if (d.name == 'Nicht abgestimmt') {
              iconWrapper
                .attr("class", "icon icon-minus")
                .attr("style", "color:" + d.color + ";");
            }
            if (d.name == 'Enthalten') {
              iconWrapper
                .attr("class", "icon icon-circle-o")
                .attr("style", "color:" + d.color + ";");
            }
          }
        });
      });
    }
  };


  /**
   * Attaches the D3 radial gauge behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.d3RadialGauge = {
    attach: function (context) {
      $('[data-d3-gauge]', context).once('d3RadialGauge', function () {
        var wrapper = $(this)[0];
        var start = 0;
        var end = parseFloat(wrapper.dataset.percentage);

        var colours = {
          fill: '#' + wrapper.dataset.fillColour,
          track: '#' + wrapper.dataset.trackColour,
          text: '#' + wrapper.dataset.textColour,
          stroke: '#' + wrapper.dataset.strokeColour,
        }

        var radius = 100;
        var border = wrapper.dataset.trackWidth;
        var strokeSpacing = wrapper.dataset.strokeSpacing;
        var endAngle = Math.PI * 2;
        var formatText = d3.format('.0%');
        var boxSize = radius * 2;
        var count = end;
        var progress = start;
        var step = end < start ? -0.01 : 0.01;

        //Add Class to Wrapper
        wrapper.className += " d3--executed";

        //Define the circle
        var circle = d3.arc()
          .startAngle(0)
          .innerRadius(radius)
          .outerRadius(radius - border);


        //setup SVG wrapper
        var svg = d3.select(wrapper)
          .append('svg')
          .attr('width', boxSize)
          .attr('height', boxSize)
          .attr('viewBox', '0 0 ' + boxSize + ' ' + boxSize)
          .attr('preserveAspectRatio', 'xMidYMid meet');

        // ADD Group container
        var g = svg.append('g')
          .attr('transform', 'translate(' + boxSize / 2 + ',' + boxSize / 2 + ')');

        //Setup track
        var track = g.append('g');
        track.append('path')
          .attr('class', 'd3__background')
          .attr('fill', colours.track)
          .attr('stroke', colours.stroke)
          .attr('stroke-width', strokeSpacing + 'px')
          .attr('d', circle.endAngle(endAngle));

        //Add colour fill
        var value = track.append('path')
          .attr('class', 'd3__value')
          .attr('fill', colours.fill)
          .attr('stroke', colours.stroke)
          .attr('stroke-width', strokeSpacing + 'px');

        //Add text value
        var numberText = track.append('text')
          .attr('class', 'd3__text')
          .attr('fill', colours.text)
          .attr('text-anchor', 'middle')
          .attr('dy', '1rem');

        function update(progress) {
          //update position of endAngle
          value.attr('d', circle.endAngle(endAngle * progress));
          //update text value
          numberText.text(formatText(progress));
        }

        // Init animation
        (function iterate() {
          update(progress);
          if (count > 0) {
            count--;
            progress += step;
            setTimeout(iterate, 10);
          }
        })();
      })
    }
  };

  /**
   * Attaches the D3 secondary income behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.d3SecondaryIncome = {
    attach: function (context) {
      $('[data-d3-secondary-income]', context).once('d3SecondaryIncome', function () {
        var wrapper = $(this)[0];
        var barWrapper = d3.select(wrapper)
          .append('div')
          .attr('class', 'd3-bars');

        (function (data) {
          var totalVolumeMin = d3.sum(data, function (d) {
            return d.income.totalValueMin;
          });
          var totalVolumeMinPrint = totalVolumeMin;
          var totalVolumeMax = d3.sum(data, function (d) {
            return d.income.totalValueMax;
          });
          var totalVolumeMaxPrint = totalVolumeMax;
          var itemCount = data.length;

          // ADD Bars
          barWrapper.selectAll("div")
            .data(data)
            .enter().append("div")
            .attr("class", "d3-bars__item")
            .attr("style", function (d) {
              var value = 100 / totalVolumeMax * d.income.totalValueMax;
              return 'width:' + value + '%';
            })
            .attr("data-sidejobid", function (d) {
              return d.id;
            })
            .on("mouseover", function (d) {
              $(this).html('<span class="tooltip tooltip--side d3__tooltip"></span>');
              var tooltip = $(this).find('.d3__tooltip');

              tooltip.css("opacity", 1)
                .append('<div class="tooltip__content"><h5>' + d.customer + '</h5><p>' + d.activity + '</p></div>')
                .append('<div class="tooltip__side"><div class="tooltip__side__indicator"><small>Stufe</small> ' + d.income.level + '</div><div class="tooltip__side__info">' + d.income.valueMin + ' &ndash; ' + d.income.valueMax + ' €</div></div>');
            })
            .on("mouseout", function (d) {
              var tooltip = $(this).find('.d3__tooltip');
              tooltip.css("opacity", 0);
            });

          // Call table highlighting function
          tableSecondaryHighlight();

          // ADD Total
          barWrapper.insert('div', ':first-child').attr('class', 'd3-bars__total').html('Gesamteinnahmen: ' + totalVolumeMin + ' &ndash; ' + totalVolumeMax);
        })(window.sidejobs || []);
      });
    }
  };

  /**
   * Attaches the table seconday income behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.tableSecondaryIncome = {
    attach: function (context) {
      $('.table--secondary-income', context).once('tableSecondaryIncome', function () {
        $('.table--secondary-income').stupidtable();
      });
    }
  };

  /**
   * Attaches the table seconday highlight behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.tableSecondaryHighlight = {
    attach: function (context) {
      $('[data-sidejobid]', context).once('tableSecondaryHighlight', function () {
        $(this).click(function () {
          var jobID = $(this).attr('data-sidejobid');

          // Highlight chart element
          $('.d3--bars-secondary-income .d3-bars__item').removeClass('d3-bars__item--active');
          $('.d3--bars-secondary-income').find('[data-sidejobid="' + jobID + '"]').addClass('d3-bars__item--active');

          // Highlight clicked element
          $('.sidejob-overview__item').removeClass('sidejob-overview__item--active');
          $('.sidejob-overview table').find('[data-sidejobid="' + jobID + '"]').addClass('sidejob-overview__item--active');
        });
      });
    }
  };

  /**
   * Attaches the D3 stacked horizontal bar behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.d3BarHorizontalStacked = {
    attach: function (context) {
      $('[data-bar-horizontal-stacked]', context).once('d3BarHorizontalStacked', function () {
        var wrapper = $(this)[0];
        var dataset = Drupal[wrapper.getAttribute('data-data')]();
        var barWrapper = d3.select(wrapper)
          .append('div')
          .attr('class', 'd3-bars');

        (function (data) {
          var totalPollCount = d3.sum(data, function (d) {
            return d.count;
          });
          var totalLabelBefore = wrapper.getAttribute('data-label-total-before');
          var totalLabelAfter = wrapper.getAttribute('data-label-total-after');

          barWrapper.selectAll("div")
            .data(data)
            .enter().append("div")
            .attr("class", "d3-bars__item")
            .attr("style", function (d) {
              var value = 100 / totalPollCount * d.count;
              return 'width:' + value + '%; background-color:' + d.color + ';';
            });

          // Define Total-Label
          var totalLabelWrapper = d3.select(wrapper)
            .append("p")
            .attr('class', 'd3__total-label')
            .html(function (d) {
              return totalLabelBefore + ' ' + totalPollCount + ' ' + totalLabelAfter;
            });

          // Define Labels
          var labelWrapper = d3.select(wrapper)
            .append("ul")
            .attr('class', 'd3__label d3__label--inline');

          var labelItem = labelWrapper.selectAll('li')
            .data(data)
            .enter()
            .append('li')
            .attr('class', 'd3__label__item')
            .html(function (d) {
              return d.count + ' ' + d.name;
            })
            .insert("span", ":first-child")
            .attr('class', 'd3__label__item__indicator')
            .attr('style', function (d) {
              return 'background-color:' + d.color;
            });

        })(dataset || []);
      });
    }
  };

  /**
   * Attaches the D3 stacked vertical poll behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.d3BarVerticalStackedPoll = {
    attach: function (context) {
      $('[data-bar-vertical-stacked-poll]', context).once('d3BarVerticalStackedPoll', function () {
        var wrapper = $(this)[0];
        var dataset = Drupal[wrapper.getAttribute('data-data')]();

        (function (data) {
          for (var key in data) {

            var obj = data[key];
            var totalPollCount = d3.sum(obj, function (o) {
              return o.count;
            });

            var chartwrapper = d3.select(wrapper)
              .append('div')
              .attr('class', 'd3-chart');

            var barWrapper = chartwrapper
              .append('div')
              .attr('class', 'd3-bars')
              .selectAll("div")
              .data(obj)
              .enter()
              .append("div")
              .attr("class", "d3-bars__item")
              .attr("style", function (d) {
                var value = 100 / totalPollCount * d.count;
                return 'height:' + value + '%; background-color:' + d.color + ';';
              });

            // Define Labels
            var labelWrapper = chartwrapper
              .append('div')
              .attr('class', 'd3__label_outer')
              .html('<h3>' + key + ' <span>' + Drupal.formatPlural(totalPollCount, '1 member', '@count members') + '</span></h3>')
              .append("ul")
              .attr('class', 'd3__label');

            var labelItem = labelWrapper.selectAll('li')
              .data(obj)
              .enter()
              .append('li')
              .attr('class', 'd3__label__item')
              .html(function (o) {
                return o.count + ' ' + o.name;
              })
              .insert("span", ":first-child")
              .attr('class', 'd3__label__item__indicator')
              .attr('style', function (o) {
                return 'background-color:' + o.color;
              });
          }
        })(dataset || []);
      });
    }
  };

  /**
   * Attaches the poll timeline behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.pollTimeline = {
    attach: function (context) {
      $('.poll__timeline', context).once('pollTimeline', function () {
        var pollTimeline = $(this);
        var pollID = $('.poll.detail').attr('data-poll-id');
        var pollTimelineSlideItem = pollTimeline.find('.poll__timeline__item__poll[data-poll-id=' + pollID + ']');
        var pollTimelineSlide = pollTimelineSlideItem.parents('.poll__timeline__item');

        // Add Active class to timeline-item
        pollTimelineSlideItem.addClass('poll__timeline__item__poll--active');

        // Add Click-Behavior to timeline-items
        $('.poll__timeline__item__poll').click(function () {
          $('.poll__timeline__item__poll').removeClass('poll__timeline__item__poll--active');
          $(this).addClass('poll__timeline__item__poll--active');

          pollTimelineSwiper.update();
        });

        var pollTimelineSwiper = new Swiper(pollTimeline, {
          slideClass: 'poll__timeline__item',
          wrapperClass: 'poll__timeline__inner',
          speed: 400,
          initialSlide: pollTimelineSlide.index(),
          slidesPerView: 'auto',
          spaceBetween: 30,
          centeredSlides: true
        });
      });
    }
  };

  /**
   * Attaches the filterbar behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.filterBar = {
    attach: function () {
      var filterBarSwiper = $('.filterbar__swiper');

      function filterBarSwiperSize() {
        var filterBarOffsetRight = $('.filterbar__view_options').outerWidth();
        var filterBarOffsetLeft = $('.filterbar__pre_swiper').outerWidth();
        var filterBarOffsetRightValue = filterBarOffsetRight;
        var filterBarOffsetLeftValue = filterBarOffsetLeft;
        windowWidth = window.innerWidth;

        if (windowWidth >= breakpointMMin) {
          filterBarOffsetRightValue = filterBarOffsetRight + 20;
        }
        else if (windowWidth >= breakpointSMin) {
          filterBarOffsetRightValue = filterBarOffsetRight + 15;
        }
        else {
          filterBarOffsetRightValue = 0;
        }
        filterBarSwiper
          .css('right', filterBarOffsetRightValue + 'px')
          .css('left', filterBarOffsetLeftValue + 'px');
      }

      var mySwiper = new Swiper('.filterbar__swiper', {
        freeMode: true,
        resistance: true,
        resistanceRatio: 0.5,
        slideClass: 'filterbar__item',
        wrapperClass: 'filterbar__swiper__inner',
        speed: 400,
        slidesPerView: 'auto',
        nextButton: filterBarSwiper.find('.swiper-button-next'),
        prevButton: filterBarSwiper.find('.swiper-button-prev'),
        onInit: function (swiper) {
          filterBarSwiperSize();
          swiper.update();
        },
        onAfterResize: function (swiper) {
          filterBarSwiperSize();
          swiper.update();
        }
      });

      if (!$('body').hasClass('blank-theme')) {
        $(window).load(function () {
          $(function() {
            var filterBarOffset = $('#header').outerHeight() - 2;
            var filterBarOffsetAdmin = $('#header').outerHeight() + $('#admin-menu').outerHeight() - 8;
            if (windowWidth >= breakpointSMin) {
              // Init stickyKit

              if ($('body').hasClass('admin-menu')) {
                $(".filterbar").stick_in_parent({
                  offset_top: filterBarOffsetAdmin,
                  parent: '#content'
                });
              } else {
                $(".filterbar").stick_in_parent({
                  offset_top: filterBarOffset,
                  parent: '#content'
                });
              }
            }
          });
        });
      }
      $('.filterbar__swiper .filterbar__item--dropdown').on("click", function () {
        var index = $(this).index();
        mySwiper.slideTo(index, 300);
        $('.dropdown__list').removeClass('dropdown__list--open');
        if ($(this).children('.dropdown__trigger').hasClass('dropdown__trigger--active')) {
          $(this).find('.dropdown__list').addClass('dropdown__list--open');
        }
      });
    }
  };



  /**
   * Attaches the read more behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.readMore = {
    attach: function (context) {
      $('.readmore', context).once('readMore', function () {
        var readmoreHeight = $(this).outerHeight();

        if (readmoreHeight < 300) {
          $(this).addClass('readMore--expanded readMore--expanded-initial');
          $(this).find('.readmore__trigger').hide();
        }
        $('.readmore__trigger .readmore__trigger__more').click(function (event) {
          event.preventDefault();
          $(this).parents('.readmore').addClass('readMore--expanded');
        });
        $('.readmore__trigger .readmore__trigger__less').click(function (event) {
          event.preventDefault();
          $(this).parents('.readmore').removeClass('readMore--expanded');
        });
      });
    }
  };

  /**
   * Attaches the candidate check behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.candidateCheck = {
    attach: function (context) {
      $('.deputy__candidate_check', context).once('candidateCheck', function () {
        var candidateCheckSwiper = $(this);
        var mySwiper = new Swiper('.deputy__candidate_check', {
          speed: 400,
          slidesPerView: 1,
          autoHeight: 1,
          nextButton: candidateCheckSwiper.find('.swiper-button-next'),
          prevButton: candidateCheckSwiper.find('.swiper-button-prev'),
          pagination: candidateCheckSwiper.find('.swiper-pagination'),
          paginationType: 'fraction',
          paginationFractionRender: function (swiper, currentClassName, totalClassName) {
            return Drupal.t('Proposition') + ' <span class="' + currentClassName + '"></span> ' +
              Drupal.t('of') +
              ' <span class="' + totalClassName + '"></span>';
          },
          onInit: function (swiper) {
          },
          onAfterResize: function (swiper) {
          }
        });
      });
    }
  };

  /**
   * Attaches the sidebar behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.sidebar = {
    attach: function (context) {
      $('.sidebar__box__accordion__item__title', context).once('sidebar', function () {
        $(this).click(function () {
          $('.sidebar__box__accordion__item').removeClass('sidebar__box__accordion__item--open');
          $(this).parents('.sidebar__box__accordion__item').addClass('sidebar__box__accordion__item--open');
        });

        $(window).load(function () {
          var sideBarOffset = $('#header').outerHeight() + 20;
          var sideBarOffsetAdmin = $('#header').outerHeight() + $('#admin-menu').outerHeight() + 16;

          if (windowWidth >= breakpointSMin) {
            // Init stickyKit
            if ($("body").hasClass("admin-menu")) {
              $(".sidebar").stick_in_parent({
                offset_top: sideBarOffsetAdmin,
                parent: '.sidebar-container'
              });
            } else {
              $(".sidebar").stick_in_parent({
                offset_top: sideBarOffset,
                parent: '.sidebar-container'
              });
            }
          }
        });
      });
    }
  };

  /**
   * Attaches the footer behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.footer = {
    attach: function (context) {
      $('.footer__maincol__col', context).once('footer', function () {
        $(this).matchHeight();
      });
    }
  };

  /**
   * Attaches the landing page teaser behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.landingPageTeaser = {
    attach: function (context) {
      $('.lp-teaser__item', context).once('landingPageTeaser', function () {
        $(this).matchHeight();
      });
    }
  };

  /**
   * Attaches the match height behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.matchHeight = {
    attach: function (context) {
      $('.mh-item', context).matchHeight();
      $('.mh-item-nr', context).matchHeight({ byRow: false });
    }
  };

  /**
   * Attaches the AJAX tracking behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.ajaxTracking = {
    attach: function (context, settings) {
      if (window.history && window.history.pushState && settings.url) {
        history.pushState({}, document.title, settings.url);
        _paq.push(['setCustomUrl', window.location.href]);
        _paq.push(['trackPageView']);
      }
    }
  };

  /**
   * Attaches the AJAX filterbar behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.ajaxFilterbar = {
    attach: function (context, settings) {
      $('form[data-ajax-target] .form__item__control').change(function (event) {
        event.preventDefault();
        addTileWrapperLoader();
        var path = $(this).parents('form').attr('action');
        var search = $(this).parents('form').serialize();
        var target = $(this).parents('form').data('ajax-target');
        var url = path + '?' + search;
        var ajaxUrl = search ? url + '&ajax=' : '?ajax=';

        $(target).load(ajaxUrl + ' ' + target + ' > *', function () {
          Drupal.attachBehaviors(target, {url: url});
          removeTileWrapperLoader();
        });
      });
      $('a[data-ajax-target]').click(function (event) {
        event.preventDefault();
        addTileWrapperLoader();
        var target = $(this).data('ajax-target');
        var url = $(this).attr('href');
        var ajaxUrl = this.search ? url + '&ajax=' : '?ajax=';

        $(target).load(ajaxUrl  + ' ' + target + ' > *', function () {
          Drupal.attachBehaviors(target, {url: url});
          removeTileWrapperLoader();
        });
      });
    }
  };

  /**
   * Attaches modal behavior.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~attachBehavior}
   */
  Drupal.behaviors.modal = {
    attach: function () {
      $('[data-modal-close]').click(function (event) {
        var attr = $(this).parents('.modal').attr('data-modal-cookie');
        $('.modal__close').parents('.modal').removeClass('modal--open');

        // Cookie handling
        if (typeof attr !== typeof undefined && attr !== false) {
          var cookieName = $(this).parents('.modal').attr('data-modal-name');
          $.cookie(cookieName, '1', { expires: 7 });
        }

        event.preventDefault();
      });

      $('.modal-overlay').click(function () {
        var modalName = $(this).attr('data-modal-name');
        var modal = $('.modal[data-modal-name=' + modalName +']');
        var attr = modal.attr('data-modal-cookie');
        modal.removeClass('modal--open');

        // Cookie handling
        if (typeof attr !== typeof undefined && attr !== false) {
          var cookieName = modalName;
          $.cookie(cookieName, '1', { expires: 7 });
        }
      });

      // Control inital modals
      if ($('[data-modal-initial]').length) {
        $('[data-modal-initial]').each(function( index ) {
          var cookieName = $(this).attr('data-modal-name');
          if (!$.cookie(cookieName) == '1') {
            $('[data-modal-initial]').addClass('modal--open');
          }
        });
      }
    }
  };

} (jQuery));
