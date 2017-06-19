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
            var subnavOffset = $('.header__subnav__indicator').outerWidth();
            var subnavOffsetValue = subnavOffset;

            // Set Styling
            secondlevel.css('padding-left', subnavOffsetValue + 'px');
            secondlevel.css('padding-right', '30px');

            swiper.update();
            swiper.slideTo(activeMenuItem);
        }
    });
}

function resizeMainNavigation() {
    var secondlevel = $('.header__bottom nav');
    var subnavOffset = $('.header__subnav__indicator').outerWidth();
    var subnavOffsetValue = subnavOffset;
    secondlevel.css('padding-left', subnavOffsetValue + 'px');
    secondlevel.css('padding-right', '30px');
}

function dropdown() {
    $('.dropdown__trigger').click(function () {
        $(this).toggleClass('dropdown__trigger--active');
        $(this).parent('.dropdown').find('.dropdown__list').toggleClass('dropdown__list--open');
        return false;
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
 * Tabs
 * */

function tabs() {
    $('a[data-tab-content]').on( "click", function(event) {

        event.preventDefault();
        event.stopPropagation();

        var link = $(this);
        var tabContent = link.attr('data-tab-content');
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
        $('#' + tabContent).addClass('tabs__content--active');

        swiperTile();


        return false;
    });


    // Set initial tab by checking url for hash
    if(history.pushState) {
        var hashValue = window.location.hash;
        var hashValueClean = hashValue.substring(1);
        $('.nav__item a[data-tab-content=' + hashValueClean + ']').trigger("click");

        $(window).on('popstate', function(event) {
            var hashValueClean = history.state.substring(1);

            console.log(history);

            // Set nav-item classes
            $('.tabs').find('.nav__item').removeClass('nav__item--active');
            $('.nav__item__link[data-tab-content="'+ hashValueClean +'"]').parents('.nav__item').addClass('nav__item--active');

            // Set tab-content classes
            $('.tabs').find('.tabs__content').removeClass('tabs__content--active');
            $('#' + hashValueClean).addClass('tabs__content--active');
        });
    }
}


/*
 * Select2 Implementation
 * */
function select2init() {
    $('select').select2({
        placeholder: 'Bitte wählen',
        allowClear: true,
        dropdownParent: $('.page-container')
    });
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
            slidesPerView: 4,
            slidesPerGroup: 4,
            nextButton: $this.find('.swiper-button-next'),
            prevButton: $this.find('.swiper-button-prev'),
            pagination: $this.find('.swiper-pagination'),
            paginationType: 'fraction',
            breakpoints: {
                550: {
                    slidesPerView: 1,
                    spaceBetween: 10,
                    slidesPerGroup: 1
                },
                768: {
                    slidesPerView: 2,
                    slidesPerGroup: 2,
                    spaceBetween: 20
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
            tooltip.html(d.name).css("left", (d3.event.offsetX) + "px").css("bottom", height - y(d.value) + "px");
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



function d3BarsPollTotal(element){
    var wrapper = element;
    var barWrapper = d3.select(wrapper)
        .append('div')
        .attr('class', 'd3-bars');

    d3.json("/sites/all/themes/custom/parliamentwatch/poll.json", function(data) {
        var fractions = [];
        console.log(data);
    });
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
 * Poll-Timeline
 * */
function pollTimeline() {
    var pollTimeline = $(".poll__timeline");

    var pollID = $(".poll_detail").attr('data-poll-id');
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
        centeredSlides: true,
        autoHeight: true
    });
}



/*
 * Filter Bar
 * */


function filterBar() {
    function filterBarSwiperSize() {
        var filterBarOffsetRight = $('.filterbar__view_options').outerWidth();
        var filterBarOffsetLeft = $('.filterbar__pre_swiper').outerWidth();
        var containerPadding = parseInt($('.filterbar .container').css('padding-right'));
        var filterBarOffsetRightValue = filterBarOffsetRight;
        var filterBarOffsetLeftValue = filterBarOffsetLeft + containerPadding;
        windowWidth = window.innerWidth;

        if (windowWidth >= breakpointSMin) {
            filterBarOffsetRightValue = filterBarOffsetRight + containerPadding;
        }

        // Set Styling
        filterBarSwiper
            .css('right', filterBarOffsetRightValue + 'px')
            .css('left', filterBarOffsetLeftValue + 'px');
    }

    var filterBarSwiper = $(".filterbar__swiper");


    $(".filterbar__item").matchHeight();

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
        var filterBarOffsetAdmin = $('#header').outerHeight() + $('#admin-menu').outerHeight() - 2;

        // Init stickyKit
        if ($("body").hasClass("admin-menu")) {
            $(".filterbar").stick_in_parent({
                offset_top: filterBarOffsetAdmin
            });
        } else {
            $(".filterbar").stick_in_parent({
                offset_top: filterBarOffset
            });
        }
    });
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
    $('[data-d3-poll-total]').each(function( index ) {
        d3BarsPollTotal(this);
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
    var topics = [];
    var data = [];

    window.dialogues.forEach(function (d) {
        if (topics.indexOf(d.topic) === -1) {
            topics.push(d.topic);
        }
    });

    topics.forEach(function (t) {
        var count = 0;
        window.dialogues.forEach(function (d) {
            if (d.topic === t) {
                count++;
            }
        });
        data.push({name: t, value: count});
    });

    return data;
}

function parseVotes() {
    var vote = {
        'yes': {label: 'Ja', color: '#9fd773'},
        'no': {label: 'Nein', color: '#cc6c5b'},
        'abstain': {label: 'Enthalten', color: '#e2e2e2'},
        'no-show': {label: 'Nicht abgestimmt', color: '#a6a6a6'}
    };
    var data = [];

    Object.keys(vote).forEach(function (k) {
        var count = 0;
        window.votes.forEach(function (v) {
            if (v.vote === k) {
                count++;
            }
        });
        data.push({name: vote[k].label, color: vote[k].color, count: count});
    });

    return data;
}
