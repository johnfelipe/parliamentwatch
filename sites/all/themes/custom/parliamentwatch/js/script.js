/*
 * Custom global js/jquery
 */

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

/*
 * Debounce-Function
 * Defines a debounce function for window-resizing
 * source: https://davidwalsh.name/javascript-debounce-function
 * */

function debounce(func, wait, immediate) {
    var timeout;
    return function () {
        var context = this, args = arguments;
        var later = function () {
            timeout = null;
            if (!immediate) func.apply(context, args);
        };
        var callNow = immediate && !timeout;
        clearTimeout(timeout);
        timeout = setTimeout(later, wait);
        if (callNow) func.apply(context, args);
    };
};


/*
 * docReadyClass
 * Add class to html-tag for styling purpose
 * */

function docReadyClass() {
    $('html').addClass('docready');
}


/*
 * Main-Navigation
 * Set mobile behaviour for the main-navigation as sidebar
 * */

function resizeMainNavigation() {
    var secondlevel = $('.header__bottom nav');

    var subnavOffset = $('.header__subnav__indicator').outerWidth();
    var wrapperPadding = parseInt($('.header__bottom__inner').css('padding-left'), 10);
    var indicatorPadding = parseInt($('.header__subnav__indicator').css('padding-left'), 10);

    if(wrapperPadding > 0) {
        var subnavOffsetValue = subnavOffset - indicatorPadding;
    } else {
        var subnavOffsetValue = subnavOffset;
    }

    secondlevel.css('padding-left', subnavOffsetValue + 'px');
    secondlevel.css('padding-right', '30px');
}

function mainNavigation() {
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
        nextButton: secondlevel.find('.swiper-button-next'),
        prevButton: secondlevel.find('.swiper-button-prev'),
        onInit: function(swiper){
            resizeMainNavigation();

            swiper.update();
            swiper.slideTo(activeMenuItem);
        }
    });
}

function dropdown() {
    $('.dropdown__trigger').click(function () {
        $(this).toggleClass('dropdown__trigger--active');
        $(this).parent('.dropdown').find('.dropdown__list').toggleClass('dropdown__list--open');
    });
}


/*
 * Content-Offset
 * */

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


/*
 * Local scroll Plugin
 * */

function initLocalScroll() {
    $('[data-localScroll]').on( "click", function(event) {
        var hrefValue = $(this).attr('href');
        var scrollOffset = $('#header').height() * -1;
        $(window).scrollTo($(hrefValue), 800, {
            offset: {
                top: scrollOffset
            }
        });
        return false;
    });
}


/*
 * Tooltips
 * */

function tooltip() {
    $('[data-tooltip-content]').hover(function () {
        var tooltipContent = $(this).attr('data-tooltip-content');
        $(this).append('<div class="tooltip">' + tooltipContent + '</div>');
    }, function () {
        $(this).find('.tooltip').remove();
    });
}


/*
 * Newsletter Widget
 * */

function newsletterWidget() {
    $( "#newsletter-widget" ).submit(function( event ) {
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

            if (this.responseText == "success"){
                newsletter_message.innerHTML = "Anmeldung erfolgreich, sie erhalten eine Email mit Bestätigungslink.";
                newsletter_message.setAttribute('class', 'form__item show form__item--alert form__item--alert-success');
            }
            else if (this.responseText == "email_error"){
                newsletter_message.innerHTML = "Ihre Email-Adresse konnte nicht angemeldet werden.";
                newsletter_message.setAttribute('class', 'form__item show form__item--alert form__item--alert-danger');
            }
            else if (this.responseText == "please_confirm"){
                newsletter_message.innerHTML = "Bitte bestätigen Sie Ihre Anmeldung.";
                newsletter_message.setAttribute('class', 'form__item show form__item--alert form__item--alert-info');
            }
            else if (this.responseText == "already_in_list"){
                newsletter_message.innerHTML = "Sie erhalten bereits unseren Newsletter.";
                newsletter_message.setAttribute('class', 'form__item show form__item--alert form__item--alert-info');
            }
            document.getElementById('newsletter-widget').setAttribute('class', 'form');
            document.getElementById('newsletter-widget-button').disabled = false;
        };
        xhr.send();
        event.preventDefault();
    });
}


/*
 * Tabs
 * */

function tabs() {
    $('.tabs__navigation a').on( "click", function(event) {

        event.preventDefault();
        event.stopPropagation();

        var link = $(this);
        var id = link[0].hash;

        // add hash-value of the clicked link-element to url
        if(history.pushState) {
            history.pushState(id, null, id);
        }
        // Set nav-item classes
        link.parents('.tabs').find('.nav__item').removeClass('nav__item--active');
        link.parent('.nav__item').addClass('nav__item--active');

        // Set tab-content classes
        link.parents('.tabs').find('.tabs__content').removeClass('tabs__content--active');
        $(id).addClass('tabs__content--active');

        swiperTile();

        return false;
    });

    // Set initial tab by checking url for hash
    if (window.location.hash) {
        $('.tabs__navigation a[href=' + window.location.hash + ']').trigger("click");
    }

    // Set initial tab by checking url for hash
    if(history.pushState) {
        $(window).on('popstate', function(event) {
            var hashValue = window.location.hash;

            if ($('.nav__item__link[href="'+ hashValue +'"]').length > 0) {
                // Set nav-item classes
                $('.tabs').find('.nav__item').removeClass('nav__item--active');
                $('.nav__item__link[href="'+ hashValue +'"]').parents('.nav__item').addClass('nav__item--active');

                // Set tab-content classes
                $('.tabs').find('.tabs__content').removeClass('tabs__content--active');
                $(hashValue).addClass('tabs__content--active');
            }
        });

    }

    $('.tabs__content__content .pager__next a').each(function () {
        this.hash = $(this).parents('.tabs__content').attr('id');
    });
}


/*
 * Select2 Implementation
 * */

function select2init() {
    $('select.form__item__control').select2({
        minimumResultsForSearch: 20,
        placeholder: 'Bitte wählen',
        dropdownParent: $('.page-container')
    });
    $('select.form__item__control').on("select2:open", function (e) {
        // close all dropdowns
        $('.dropdown__list').removeClass('dropdown__list--open');
    });
}


/*
 * Autosuggest
 * */

function autosuggest() {

    var names = [];

    $.get('/sites/all/themes/custom/parliamentwatch/deputies.json', {}, function (data) {
        $.each(data, function (i, str) {
            names.push(str.name);
        });
    });

    var substringMatcher = function (strs) {
        return function findMatches(q, cb) {
            var matches, substringRegex;

            // an array that will be populated with substring matches
            matches = [];

            // regex used to determine if a string contains the substring `q`
            substrRegex = new RegExp(q, 'i');

            // iterate through the pool of strings and for any string that
            // contains the substring `q`, add it to the `matches` array
            $.each(strs, function (i, str) {
                if (substrRegex.test(str)) {
                    matches.push(str);
                }
            });
            cb(matches);
        };
    };

    $('.autosuggest').typeahead({
        minLength: 2,
        display: "names",
        highlight: true
    },
    {
        name: 'names',
        source: substringMatcher(names),
        templates: {
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
                            '<img src="http://via.placeholder.com/150x150" alt="">' +
                        '</div>' +
                        '<div class="autosuggest__item__info">' +
                            '<div class="autosuggest__item__name">' + query + '</div>' +
                            '<div class="autosuggest__item__subtitle">Bundestag <i class="icon icon-arrow-right"></i> <span class="party-indicator">SPD</span></div>' +
                            '<div class="autosuggest__item__constituency">Wahlkreis</div>' +
                        '</div>' +
                        '<a href="#" class="btn--small">Jetzt befragen</a>' +
                    '</div>';
            }
        }
    });
}


/*
 * Sponsor-Counter
 * */

function sponsorCounter() {
    if ($("#mscount").length > 0) {
        $("#mscount").load("/images/membership-count.txt");
        setInterval(function() {
            $.get("/images/membership-count.txt",
                function(count){
                    var old_count = document.getElementById('mscount').innerHTML;
                    if (old_count < count){
                        $("#mscount").fadeOut('slow', function(){
                                $('#mscount').html(count);
                                $("#mscount").fadeIn('slow');
                            }
                        );
                    }
                }
            );
        }, 10000);
    }
}


/*
 * Swiper Implementation
 * */

function swiperTile() {
    //initialize swiper when document ready
    $(".swiper-container--tile").each(function(index, element){
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
            onImagesReady: function(){
                $(".mh-item-tile").matchHeight();
            }
        });
    });
}


/*
 * View: deputy detail
 * */

function viewDeputyDetail() {
    windowWidth = window.innerWidth;

    if (windowWidth >= breakpointSMin) {
        $('.deputy__intro__sidebar header').prependTo('.deputy__intro__content')
    } else {
        $('.deputy__intro__content header').prependTo('.deputy__intro__sidebar')
    }

    /*
    * Implement select mechanism for changing the viewed profile (election period)
     */
    $('.deputy__intro__content select').on('select2:select', function (evt) {
        window.location.href = evt.currentTarget.value;
    });
}


/*
 * D3: Bars vertical
 * */

function d3BarsVertical(element) {
    var wrapper = element;
    var width = 600;
    var height = wrapper.dataset.height;
    var data = window[wrapper.getAttribute('data-data')]();

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
    data.forEach(function(d) {
        d.name = d.name;
        d.value = +d.value;
    });

    // scale the range of the data
    x.domain(data.map(function(d) { return d.name; }));
    y.domain([0, d3.max(data, function(d) { return d.value; })]);

    // ADD Group container
    var g = svg.append('g');

    // ADD Bars
    g.selectAll("bar")
        .data(data)
      .enter().append("rect")
        .attr("class", "bar")
        .attr('fill', colours.fill)
        .attr("x", function(d) { return x(d.name); })
        .attr("width", x.bandwidth() * .5)
        .attr("y", function(d) { return y(d.value); })
        .attr("height", function(d) { return height - y(d.value); })
        .on("mouseover", function(d) {
            var tooltip = $(this).parents('.d3').find('.d3__tooltip');
            tooltip.css("opacity", 1);
            if (d.value == 1) {
                tooltip.html(d.name + ' <span>(' + d.value + ' Frage)</span>').css("left", (d3.event.offsetX) + "px").css("bottom", height - y(d.value) + "px");
            } else {
                tooltip.html(d.name + ' <span>(' + d.value + ' Fragen)</span>').css("left", (d3.event.offsetX) + "px").css("bottom", height - y(d.value) + "px");
            }
        })
        .on("mouseout", function(d) {
            var tooltip = $(this).parents('.d3').find('.d3__tooltip');
            tooltip.css("opacity", 0);
        });
}


/*
 * D3: Donut
 * */

function d3Donut(element) {
    var wrapper = element;
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
        .value(function(d) { return d.count; })
        .sort(null);

    var path = svg.selectAll('path')
        .data(pie(dataset))
        .enter()
        .append('path')
        .attr('d', arc)
        .attr("fill", function(d) { return d.data.color; });
}

/*
 * D3: Donut with labels
 * */

function d3DonutLabels(element) {
    var wrapper = element;
    var dataset = window[wrapper.getAttribute('data-data')]();

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
        .value(function(d) { return d.count; })
        .sort(null);

    var path = svg.selectAll('path')
        .data(pie(dataset))
    .enter()
        .append('path')
        .attr('d', arc)
        .attr("fill", function(d) { return d.data.color; });

    // Define Labels

    var labelWrapper = d3.select(wrapper)
        .append("ul")
        .attr('class', 'd3__label');

    var labelItem = labelWrapper.selectAll('li')
        .data(pie(dataset))
        .enter()
        .append('li')
        .attr('class', 'd3__label__item')
        .html(function(d) { return d.data.count + ' ' + d.data.name; })
        .insert("span",":first-child")
        .attr('class', 'd3__label__item__indicator')
        .attr('style', function(d) { return 'background-color:' + d.data.color; });
}

/*
 * D3: Donut with icon
 * */

function d3DonutIcon(element) {
    var wrapper = element;
    var dataset = JSON.parse(wrapper.getAttribute('data-data'));
    var voteResult = d3.max(dataset, function(d) { return d.count; })

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
        .value(function(d) { return d.count; })
        .sort(null);

    var path = svg.selectAll('path')
        .data(pie(dataset))
        .enter()
        .append('path')
        .attr('d', arc)
        .attr("fill", function(d) { return d.data.color; });

    // Define Icon

    var iconWrapper = d3.select(wrapper)
        .append("i")
        .attr("class", "icon");

    dataset.forEach(function(d) {
        if (d.count == voteResult) {
            if (d.name == 'Ja') {
                iconWrapper
                    .attr("class", "icon icon-ok")
                    .attr("style", "color:" + d.color + ";" );
            }
            if (d.name == 'Nein') {
                iconWrapper
                    .attr("class", "icon icon-close")
                    .attr("style", "color:" + d.color + ";" );
            }
            if (d.name == 'Nicht abgestimmt') {
                iconWrapper
                    .attr("class", "icon icon-minus")
                    .attr("style", "color:" + d.color + ";" );
            }
            if (d.name == 'Enthalten') {
                iconWrapper
                    .attr("class", "icon icon-circle-o")
                    .attr("style", "color:" + d.color + ";" );
            }
        }
    });

}


/*
 * D3: Radial Gauge
 * */

function d3RadialGauge(element) {
    var wrapper = element;
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
}


/*
 * D3: Bar-Chart Secondary Income
 * */

function d3SecondaryIncome(element) {
    var wrapper = element;
    var barWrapper = d3.select(wrapper)
        .append('div')
        .attr('class', 'd3-bars');

    (function(data) {
        var totalVolumeMin = d3.sum(data, function(d) { return d.income.totalValueMin; });
        var totalVolumeMinPrint = totalVolumeMin;
        var totalVolumeMax = d3.sum(data, function(d) { return d.income.totalValueMax; });
        var totalVolumeMaxPrint = totalVolumeMax;
        var itemCount = data.length;

        // ADD Bars
        barWrapper.selectAll("div")
            .data(data)
        .enter().append("div")
            .attr("class", "d3-bars__item")
            .attr("style", function(d) {
                var value = 100 / totalVolumeMax * d.income.totalValueMax;
                return 'width:' + value + '%';
            })
            .attr("data-sidejobid", function(d) {
                return d.id;
            })
            .on("mouseover", function(d) {
                $(this).html('<span class="tooltip tooltip--side d3__tooltip"></span>');
                var tooltip = $(this).find('.d3__tooltip');

                tooltip.css("opacity", 1)
                    .append('<div class="tooltip__content"><h5>' + d.customer + '</h5><p>' + d.activity + '</p></div>')
                    .append('<div class="tooltip__side"><div class="tooltip__side__indicator"><small>Stufe</small> ' + d.income.level + '</div><div class="tooltip__side__info">' + d.income.valueMin + ' &ndash; ' + d.income.valueMax + ' €</div></div>');
            })
            .on("mouseout", function(d) {
                var tooltip = $(this).find('.d3__tooltip');
                tooltip.css("opacity", 0);
            });

        // Call table highlighting function
        tableSecondaryHighlight();

        // ADD Total
        barWrapper.insert('div',':first-child').attr('class', 'd3-bars__total').html('Gesamteinnahmen: ' + totalVolumeMin + ' &ndash; ' + totalVolumeMax);
    })(window.sidejobs || []);
}

function tableSecondaryIncome() {
    $(".table--secondary-income").stupidtable();
}

function tableSecondaryHighlight() {
    $('[data-sidejobid]').click(function () {
        var jobID = $(this).attr('data-sidejobid');

        // Highlight chart element
        $('.d3--bars-secondary-income .d3-bars__item').removeClass('d3-bars__item--active');
        $('.d3--bars-secondary-income').find('[data-sidejobid="'+jobID+'"]').addClass('d3-bars__item--active');

        // Highlight clicked element
        $('.sidejob-overview__item').removeClass('sidejob-overview__item--active');
        $('.sidejob-overview table').find('[data-sidejobid="'+jobID+'"]').addClass('sidejob-overview__item--active');
    });
}


/*
 * Bars horizontal stacked
 * */

function d3BarHorizontalStacked(element){
    var wrapper = element;
    var dataset = window[wrapper.getAttribute('data-data')]();
    var barWrapper = d3.select(wrapper)
        .append('div')
        .attr('class', 'd3-bars');

    (function(data) {
        var totalPollCount = d3.sum(data, function(d) { return d.count; });
        var totalLabelBefore = wrapper.getAttribute('data-label-total-before');
        var totalLabelAfter = wrapper.getAttribute('data-label-total-after');

        barWrapper.selectAll("div")
            .data(data)
        .enter().append("div")
            .attr("class", "d3-bars__item")
            .attr("style", function(d) {
                var value = 100 / totalPollCount * d.count;
                return 'width:' + value + '%; background-color:' + d.color + ';';
            });

        // Define Total-Label
        var totalLabelWrapper = d3.select(wrapper)
            .append("p")
            .attr('class', 'd3__total-label')
            .html(function(d) { return totalLabelBefore + ' ' + totalPollCount + ' ' + totalLabelAfter; });

        // Define Labels

        var labelWrapper = d3.select(wrapper)
            .append("ul")
            .attr('class', 'd3__label d3__label--inline');

        var labelItem = labelWrapper.selectAll('li')
            .data(data)
        .enter()
            .append('li')
            .attr('class', 'd3__label__item')
            .html(function(d) { return d.count + ' ' + d.name; })
            .insert("span",":first-child")
            .attr('class', 'd3__label__item__indicator')
            .attr('style', function(d) { return 'background-color:' + d.color; });

    })(dataset || []);
}
function d3BarVerticalStackedPoll(element){
    var wrapper = element;
    var dataset = window[wrapper.getAttribute('data-data')]();

    (function(data) {
        for (var key in data) {

            var obj = data[key];
            var totalPollCount = d3.sum(obj, function(o) {
                return o.count;
            });

            var chartwrapper = d3.select(wrapper)
                .append('div')
                .attr('class', 'd3-chart');
//
            var barWrapper = chartwrapper
                .append('div')
                .attr('class', 'd3-bars')
                .selectAll("div")
                .data(obj)
            .enter()
                .append("div")
                .attr("class", "d3-bars__item")
                .attr("style", function(d) {
                    var value = 100 / totalPollCount * d.count;
                    return 'height:' + value + '%; background-color:' + d.color + ';';
                });

            // Define Labels

            var labelWrapper = chartwrapper
                .append('div')
                .attr('class', 'd3__label_outer')
                .html('<h3>'+ key +' <span>'+ Drupal.formatPlural(totalPollCount, '1 member', '@count members') + '</span></h3>')
                .append("ul")
                .attr('class', 'd3__label');

            var labelItem = labelWrapper.selectAll('li')
                .data(obj)
            .enter()
                .append('li')
                .attr('class', 'd3__label__item')
                .html(function(o) { return o.count + ' ' + o.name; })
                .insert("span",":first-child")
                .attr('class', 'd3__label__item__indicator')
                .attr('style', function(o) { return 'background-color:' + o.color; });
        }



    })(dataset || []);
}

/*
 * Poll-Timeline
 * */

function pollTimeline() {
    var pollTimeline = $(".poll__timeline");

    var pollID = $(".poll.detail").attr('data-poll-id');
    var pollTimelineSlideItem = pollTimeline.find('.poll__timeline__item__poll[data-poll-id=' + pollID+ ']');
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
}


/*
 * Filter Bar
 * */

function filterBar() {
    var filterBarSwiper = $(".filterbar__swiper");

    function filterBarSwiperSize() {
        var filterBarOffsetRight = $('.filterbar__view_options').outerWidth();
        var filterBarOffsetLeft = $('.filterbar__pre_swiper').outerWidth();
        // var containerPadding = parseInt($('.filterbar .container').css('padding-right'));
        var filterBarOffsetRightValue = filterBarOffsetRight;
        var filterBarOffsetLeftValue = filterBarOffsetLeft;
        windowWidth = window.innerWidth;

        if (windowWidth >= breakpointSMin) {
            filterBarOffsetRightValue = filterBarOffsetRight + 20;
        } else {
            filterBarOffsetRightValue = 0;
        }

        // Set Styling
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
        onInit: function(swiper){
            $(window).load(function() {
                filterBarSwiperSize();
                swiper.update();
            });
        },
        onAfterResize: function(swiper){
            filterBarSwiperSize();
            swiper.update();
        }
    });

    $(window).load(function() {
        var filterBarOffset = $('#header').outerHeight() - 2;
        var filterBarOffsetAdmin = $('#header').outerHeight() + $('#admin-menu').outerHeight() - 8;

        if (windowWidth >= breakpointSMin) {
            // Init stickyKit
            if ($("body").hasClass("admin-menu")) {
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
    $('.filterbar__swiper .filterbar__item--dropdown').click(function (event) {
        var index = $(this).index();
        mySwiper.slideTo(index, 300);
        $('.dropdown__list').removeClass('dropdown__list--open');
        if ($(this).children('.dropdown__trigger').hasClass('dropdown__trigger--active')) {
            $(this).find('.dropdown__list').addClass('dropdown__list--open');
        }
    });
}


/*
 * Readmore expander
 * */

function readMore() {
    $('.readmore').each(function( index ) {
        var readmoreHeight = $(this).outerHeight();

        if (readmoreHeight < 300) {
            $(this).addClass('readMore--expanded readMore--expanded-initial');
            $(this).find('.readmore__trigger').hide();
        }
        $('.readmore__trigger .readmore__trigger__more').click(function () {
            event.preventDefault();
            $(this).parents('.readmore').addClass('readMore--expanded');
        });
        $('.readmore__trigger .readmore__trigger__less').click(function () {
            event.preventDefault();
            $(this).parents('.readmore').removeClass('readMore--expanded');
        });
    });
}


/*
 * Kandidaten check
 * */

function candidateCheck() {
    var candidateCheckSwiper = $(".deputy__candidate_check");
    var mySwiper = new Swiper('.deputy__candidate_check', {
        speed: 400,
        slidesPerView: 1,
        autoHeight: 1,
        nextButton: candidateCheckSwiper.find('.swiper-button-next'),
        prevButton: candidateCheckSwiper.find('.swiper-button-prev'),
        pagination: candidateCheckSwiper.find('.swiper-pagination'),
        paginationType: 'fraction',
        paginationFractionRender: function(swiper, currentClassName, totalClassName){
            return Drupal.t('Proposition') + ' <span class="' + currentClassName + '"></span> ' +
                Drupal.t('of') +
                ' <span class="' + totalClassName + '"></span>';
        },
        onInit: function(swiper){
        },
        onAfterResize: function(swiper){
        }
    });
}


/*
 * Sidebar
 * */

function sidebar() {
    $('.sidebar__box__accordion__item__title').click(function () {
        $('.sidebar__box__accordion__item').removeClass('sidebar__box__accordion__item--open');
        $(this).parents('.sidebar__box__accordion__item').addClass('sidebar__box__accordion__item--open');
    });

    $(window).load(function() {
        var sideBarOffset = $('#header').outerHeight() + 20;
        var sideBarOffsetAdmin = $('#header').outerHeight() + $('#admin-menu').outerHeight() + 16;

        if (windowWidth >= breakpointSMin) {
            // Init stickyKit
            if ($("body").hasClass("admin-menu")) {
                $(".sidebar").stick_in_parent({
                    offset_top: sideBarOffsetAdmin,
                    parent: '#content'
                });
            } else {
                $(".sidebar").stick_in_parent({
                    offset_top: sideBarOffset,
                    parent: '#content'
                });
            }
        }
    });
}


/*
 * Footer
 * */

function footer() {
    $('.footer__maincol__col').matchHeight();
}


$(function () {

    // Init functions when document is ready loaded

    filterBar();
    mainNavigation();
    dropdown();
    contentOffset();
    tooltip();
    tabs();
    select2init();
    swiperTile();
    viewDeputyDetail();
    tableSecondaryIncome();
    initLocalScroll();
    pollTimeline();
    newsletterWidget();
    autosuggest();
    sponsorCounter();
    readMore();
    footer();
    candidateCheck();
    sidebar();

    // Init global matchHeight-plugin class

    $(".mh-item").matchHeight();
    $(".mh-item-nr").matchHeight({
        byRow: false
    });

    // Iterate d3 Charts

    $('[data-d3-gauge]').each(function( index ) {
        d3RadialGauge(this);
        $(this)
    });
    $('[data-d3-bars-vert]').each(function( index ) {
        d3BarsVertical(this);
        $(this)
    });
    $('[data-d3-donut]').each(function( index ) {
        d3Donut(this);
        $(this)
    });
    $('[data-d3-donut-labels]').each(function( index ) {
        d3DonutLabels(this);
        $(this)
    });
    $('[data-d3-donut-icon]').each(function( index ) {
        d3DonutIcon(this);
        $(this)
    });
    $('[data-d3-secondary-income]').each(function( index ) {
        d3SecondaryIncome(this);
        $(this)
    });
    $('[data-bar-horizontal-stacked]').each(function( index ) {
        d3BarHorizontalStacked(this);
        $(this)
    });
    $('[data-bar-vertical-stacked-poll]').each(function( index ) {
        d3BarVerticalStackedPoll(this);
        $(this)
    });

    // Init functions on window resize

    var windowResize = debounce(function () {
        contentOffset();
        resizeMainNavigation();
        viewDeputyDetail();
    }, 150);

    // Event-Listener

    window.addEventListener('resize', windowResize);
});

function parseDialogues() {
    var data = [];

    for (var key in window.dialogues) {
        data.push({'name': key, 'value': window.dialogues[key]});
    }

    return data;
}

function parseVotes() {
    var data = {'yes': 0, 'no': 0, 'abstain': 0, 'no-show': 0};

    window.votes.forEach(function (v) {
        data[v.vote]++;
    });

    return mapVotes(data);
}

function parseResultsByParty() {
    var data = {};

    for (var party in window.resultsByParty) {
        data[party] = mapVotes(window.resultsByParty[party]);
    }

    return data;
}

function parseResultsTotal() {
    var data = {'yes': 0, 'no': 0, 'abstain': 0, 'no-show': 0};

    for (var party in window.resultsByParty) {
        data['yes'] += window.resultsByParty[party]['yes'];
        data['no'] += window.resultsByParty[party]['no'];
        data['abstain'] += window.resultsByParty[party]['abstain'];
        data['no-show'] += window.resultsByParty[party]['no-show'];
    }

    return mapVotes(data);
}

function mapVotes(votes) {
    var map = {
        'yes': {name: 'Ja', 'color': '#9fd773'},
        'no': {name: 'Nein', color: '#cc6c5b'},
        'abstain': {name: 'Enthalten', color: '#e2e2e2'},
        'no-show': {name: 'Nicht abgestimmt', color: '#a6a6a6'}
    };

    var data = [];

    for (key in votes) {
        map[key].count = votes[key];
        data.push(map[key]);
    }

    return data;
}
