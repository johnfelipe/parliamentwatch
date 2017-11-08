<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<?php $content_link_url = $content['field_pg_content_link'][0]['#element']['url']; ?>

<div class="archive_<?php print $field_show[0]['value'] ?>">
  <div class="<?php print render($content['field_pg_donate_targetgroup']); ?>">
    <table cellpadding="0" cellspacing="0" border="0" bgcolor="#ffffff" width="600" align="center" class="deviceWidth" style="border-top: 1px solid #999; border-bottom: 1px solid #999; background: #f8f8f8; ">
      <tr>
        <td colspan="4" width="600" style="height: 20px;">&nbsp;</td>
      </tr>
      <tr>
        <td width="20" class="block_td percent_td hidden_mobile">&nbsp;</td>

        <?php /** ds-3col--node-pw-testimonial-pw-newsletter.tpl.php loaded */ ?>

        <?php print render($content['field_pg_testimonial_er']); ?>

        <td width="70" style="text-align: center; vertical-align: top;" class="block_td percent_td">
          <a href="https://twitter.com/intent/tweet?text=Jetzt Fördermitglied von abgeordnetenwatch.de werden&url=<?php print $content_link_url; ?>" target="_blank"><img src="<?php print $GLOBALS['base_url'] ?>/sites/all/themes/custom/parliamentwatch/images/newsletter/social-twitter.png" alt="Twitter" border="0" style="display: inline-block;"></a>
          <a href="https://www.facebook.com/sharer/sharer.php?u=<?php print $content_link_url; ?>" target="_blank"><img src="<?php print $GLOBALS['base_url'] ?>/sites/all/themes/custom/parliamentwatch/images/newsletter/social-facebook.png" alt="Facebook" border="0" style="display: inline-block;"></a>
        </td>
        <td width="10" class="block_td percent_td">&nbsp;</td>
      </tr>

      <?php if ($content['field_pg_donate_targetgroup'][0]['#markup'] == 'sponsor'): ?>
        <tr>
          <td colspan="3" width="600">
          <?php foreach ($field_pg_content_link as $delta => $item): ?>
            <p style="font-family: Arial, Helvetica, Sans-Serif; color: #999; font-size: 15px; line-height: 21px; margin: 0; text-align: center;">
              <a target="_blank" href="<?php print render($item['url']); ?>" style="color: #f63; text-decoration: none; font-weight: bold;">Jetzt Spenden</a>
            </p>
          <?php endforeach; ?>
          </td>
          <td width="10" class="block_td percent_td">&nbsp;</td>
        </tr>
      <?php else: ?>
        <tr>
          <td colspan="3" width="600">
            <?php foreach ($field_pg_content_link as $delta => $item): ?>
              <p style="font-family: Arial, Helvetica, Sans-Serif; color: #999; font-size: 15px; line-height: 21px; margin: 0; text-align: center;">
                <a target="_blank" href="<?php print render($item['url']); ?>?recurring=1" style="color: #f63; text-decoration: none; font-weight: bold;">Jetzt Fördern</a>
              </p>
            <?php endforeach; ?>
          </td>
          <td width="10" class="block_td percent_td">&nbsp;</td>
        </tr>
      <?php endif; ?>
      <tr>
        <td colspan="4" width="600" style="height: 20px;">&nbsp;</td>
      </tr>
    </table>
    <table cellpadding="0" cellspacing="0" border="0" bgcolor="#ffffff" width="600" align="center" class="deviceWidth">
      <tr>
        <td colspan="3" width="100%" style="height: 20px;">&nbsp;</td>
      </tr>
    </table>
  </div>
</div>
