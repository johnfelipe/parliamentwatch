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
    breakpointLMax = breakpointLMin - 1;

console.log(windowWidth);
/*
 * Debounce-Function
 * Defines a debounce function for window-resizing
 * source: https://davidwalsh.name/javascript-debounce-function
 * */

function debounce(func, wait, immediate) {
  var timeout;
  return function() {
    var context = this, args = arguments;
    var later = function() {
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
    $('[data-sidebar-trigger]').click(function() {
        $(this).toggleClass('lines-button-close');
        $('[data-sidebar-container]').toggleClass('sidebar-open');
    });
    $('[data-sidebar-container]:after').click(function() {
        $('[data-sidebar-trigger]').toggleClass('lines-button-close');
        $('[data-sidebar-container]').toggleClass('sidebar-open');
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
        contentOffset = mainNavHeight + subNavHeight;

    } else {
        contentOffset = 0;
    }
    $('#content').css('margin-top', contentOffset);

}

$(function() {

    // Init functions when document is ready loaded

    mainNavigation();
    contentOffset();

    // Init functions on window resize

    var windowResize = debounce(function() {
        contentOffset();
    }, 150);


    // Event-Listener

    window.addEventListener('resize', windowResize);

});