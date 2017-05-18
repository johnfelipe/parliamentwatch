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
 * Main-Navigation
 * Set mobile behaviour for the main-navigation as sidebar
 * */

function mainNavigation() {
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
            secondlevel.css('padding-left', subnavOffsetValue + 'px');
            secondlevel.css('padding-right', '30px');
            swiper.update();
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
    }
    if (history && history.pushState) {
        $(window).on('popstate', function(event) {
            var hashValueClean = history.state.substring(1);

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
        placeholder: 'This is my placeholder',
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
    var data = JSON.parse(wrapper.getAttribute('data-data'));
    var colours = {
        fill: '#' + wrapper.dataset.fillColour,
        stroke: '#' + wrapper.dataset.strokeColour
    }
    // set the ranges
    var y = d3.scaleLinear().range([height, 0]);
    var x = d3.scaleBand().rangeRound([0, width], .05);

    // setup SVG wrapper

    var svg = d3.select(wrapper)
        .append("svg:svg")
        .attr("class", "chart")
        .attr('width', width)
        .attr('height', height)
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


$(function () {

    // Init functions when document is ready loaded

    mainNavigation();
    dropdown();
    contentOffset();
    tooltip();
    tabs();
    select2init();
    swiperTile();
    viewDeputyDetail();

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

    // Init functions on window resize

    var windowResize = debounce(function () {
        contentOffset();
        resizeMainNavigation();
        viewDeputyDetail();
    }, 150);

    // Event-Listener

    window.addEventListener('resize', windowResize);

});