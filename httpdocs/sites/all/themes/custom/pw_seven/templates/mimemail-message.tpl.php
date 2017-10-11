<?php

/**
 * @file
 * Default theme implementation to format an HTML mail.
 *
 * Copy this file in your default theme folder to create a custom themed mail.
 * Rename it to mimemail-message--[module]--[key].tpl.php to override it for a
 * specific mail.
 *
 * Available variables:
 * - $recipient: The recipient of the message
 * - $subject: The message subject
 * - $body: The message body
 * - $css: Internal style sheets
 * - $module: The sending module
 * - $key: The message identifier
 *
 * @see template_preprocess_mimemail_message()
 */
?>
<html>
  <head>
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
    <?php if ($css): ?>
    <style type="text/css">
      <!--
      <?php print $css ?>
      -->
    </style>
    <?php endif; ?>
  </head>
  <body id="mimemail-body" <?php if ($module && $key): print 'class="'. $module .'-'. $key .'"'; endif; ?>>
    <div id="center" style="max-width: 600px; margin: auto;">
        <div style="padding: 20px 0; border-bottom: 1px solid #f63; margin-bottom: 20px;">
            <img src="https://www.abgeordnetenwatch.de/sites/abgeordnetenwatch.de/themes/abgeordnetenwatch/logo.png" width="385" height="42" alt="" />
        </div>
        
      <div id="main">
        <?php print $body ?>
      </div>
    </div>
  </body>
</html>
