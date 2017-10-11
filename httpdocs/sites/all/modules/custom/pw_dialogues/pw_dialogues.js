(function ($) {
    Drupal.behaviors.pw_dialogues = {
        attach: function () {
            $('.user-profile .facetapi-facetapi-links a').each(function () {
               $(this).attr('href', $(this).attr('href') + '#pw-block-questions-and-answers');
            });
            $('.block-pw-dialogues-qa .pager li a').each(function () {
               $(this).attr('href', $(this).attr('href') + '#pw-block-questions-and-answers');
            });
        }
    };
})(jQuery);
