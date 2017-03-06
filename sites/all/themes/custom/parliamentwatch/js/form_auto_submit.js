(function ($) {
    $.fn.autoSubmit = function () {
        var form = this;
        $('input, select, textarea', form).change(function() {
            $(form).submit();
        });
        $('*[type=submit]', form).hide();
    };

    Drupal.behaviors.autoSubmit = {
        attach: function () {
            $('form.profile-filters').autoSubmit();
        }
    };
})(jQuery);
