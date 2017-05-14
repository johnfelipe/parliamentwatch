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
    $('a[data-tab-content]').click(function () {
        var tabContent = $(this).attr('data-tab-content');

        $(this).parents('.tabs').find('.nav__item').removeClass('nav__item--active');

        $(this).parent('.nav__item').addClass('nav__item--active');

        $(this).parents('.tabs').find('.tabs__content').removeClass('tabs__content--active');
        $('#' + tabContent).addClass('tabs__content--active');

        return false;
    });
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
                992: {
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

    // Init functions on window resize

    var windowResize = debounce(function () {
        contentOffset();
    }, 150);

    // Event-Listener

    window.addEventListener('resize', windowResize);

});