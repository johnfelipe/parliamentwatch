/*
 Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
 For licensing, see LICENSE.html or http://ckeditor.com/license
 */

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */

if(typeof(CKEDITOR) !== 'undefined') {

    CKEDITOR.config.templates = 'custom';
    CKEDITOR.config.format_p = {
        name : 'Default',
        element: 'p',
        attributes : {
            'style' : 'font-family: Arial, Helvetica, Sans-Serif; color: #4d4d4d; font-size: 15px; line-height: 21px; margin: 0 0 10px;'
        }
    };

    CKEDITOR.addStylesSet( 'drupal', [
        {
            name : 'Paragraph',
            element : 'p',
            attributes : {
                'style' : 'font-family: Arial, Helvetica, Sans-Serif; color: #4d4d4d; font-size: 15px; line-height: 21px; margin: 0 0 10px;'
            }
        },
        {
            name : 'Paragraph (No space-after)',
            element : 'p',
            attributes : {
                'style' : 'font-family: Arial, Helvetica, Sans-Serif; color: #4d4d4d; font-size: 15px; line-height: 21px; margin: 0;'
            }
        },
        {
            name : 'Link',
            element : 'a',
            attributes : {
                'style' : 'color: #f63; text-decoration: none; font-weight: bold;',
                'target' : '_blank'
            }
        }
    ]);
    CKEDITOR.addTemplates( 'custom', {
        // The name of sub folder which hold the shortcut preview images of the
        // templates.
        imagesPath: CKEDITOR.getUrl( CKEDITOR.plugins.getPath( 'templates' ) + 'templates/images/' ),

        // The templates definitions.
        templates: [
            {
                title: 'Image container with ©opyright',
                image: 'template_default_3.gif',
                description: 'A container with an image and a subline floating to the left.',
                html: '<div style="float: left; padding-right: 20px; padding-bottom: 15px;">'
                +'<img src="/sites/all/modules/contrib/ckeditor/ckeditor/plugins/templates/templates/images/template_default_3.gif">'
                +'<div class="copyright" style="font-family: Arial, Helvetica, Sans-Serif; color: #4d4d4d; font-size: 10px; color: #666;">©opyright</div>'
                +'</div>'
                +'<p style="font-family: Arial, Helvetica, Sans-Serif; color: #4d4d4d; font-size: 15px; line-height: 21px; margin: 0 0 10px;">Lorem ipsum</p>'
            },
            {
                title: 'Image container with ©opyright',
                image: 'template_default_4.gif',
                description: 'A container with an image and a subline floating to the right.',
                html: '<div style="float: right; padding-left: 20px; padding-bottom: 15px;">'
                +'<img src="/sites/all/modules/contrib/ckeditor/ckeditor/plugins/templates/templates/images/template_default_4.gif">'
                +'<div class="copyright" style="font-family: Arial, Helvetica, Sans-Serif; color: #4d4d4d; font-size: 10px; color: #666;">©opyright</div>'
                +'</div>'
                +'<p style="font-family: Arial, Helvetica, Sans-Serif; color: #4d4d4d; font-size: 15px; line-height: 21px; margin: 0 0 10px;">Lorem ipsum</p>'
            },
            {
                title: 'Link with icon',
                description: 'A link with an prefixed icon. ',
                html: '<a target="_blank" href="" style="font-family: Arial, Helvetica, Sans-Serif; color: #f63; text-decoration: none; font-weight: bold; font-size: 15px; line-height: 21px;" rel="external">'
                +'<img src="/sites/all/themes/custom/parliamentwatch/images/newsletter/link-icon.png" width="12" height="12" border="0" style="display:inline-block;"> '
                +'Link-Titel'
                +'</div>'
            }
        ]
    });
}