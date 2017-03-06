<?php $node_url=url($path=$node_url, array('absolute' => TRUE)); ?>
<div class="archive_<?php print $field_show[0]['value'] ?>">
    <table cellpadding="0" cellspacing="0" border="0" bgcolor="#ffffff" width="600" align="center" class="deviceWidth" style="border-bottom: 1px solid #f63;">
        <tr>
            <td colspan="3" width="100%" style="height: 25px;">&nbsp;</td>
        </tr>
        <tr>
            <td colspan="3" width="100%">
                <table cellpadding="0" cellspacing="0" border="0" bgcolor="#ffffff" width="100%" align="center">
                    <tr>
                        <td width="80%">
                            <h3 style="font-family: 'Times New Roman', Times, serif; font-weight: normal; font-size: 24px; margin: 0;"><a target="_blank" href="<?php print $node_url; ?>" style="color: #333; text-decoration: none;"><?php print $title; ?></a></h3>
                        </td>
                        <td width="20%" style="text-align: right;">
                            <a href="https://twitter.com/intent/tweet?text=<?php print $title; ?>&url=<?php print $node_url; ?>" target="_blank"><img src="<?php print $GLOBALS['base_url'] ?>/sites/all/themes/custom/parliamentwatch/images/newsletter/social-twitter.png" alt="Twitter" border="0" style="display: inline-block;"></a>
                            <a href="https://www.facebook.com/sharer/sharer.php?u=<?php print $node_url; ?>" target="_blank"><img src="<?php print $GLOBALS['base_url'] ?>/sites/all/themes/custom/parliamentwatch/images/newsletter/social-facebook.png" alt="Facebook" border="0" style="display: inline-block;"></a>
                        </td>
                    </tr>
                </table>
            </td>
        </tr>
        <tr>
            <td colspan="3" width="100%" style="height: 10px;">&nbsp;</td>
        </tr>
        <tr>
            <?php if ($field_teaser_image): ?>
            <td width="280" class="block_td pic_td" style="vertical-align: top;">
                <a href="<?php print $node_url; ?>" title="zum Blogartikel" target="_blank" style="display:block;">
                    <img src="<?php $uri = $field_teaser_image[0]['uri']; $uri = image_style_path('pw_landscape_l',$uri); $url = file_create_url($uri); print $url; ?>" alt="">
                </a>
                <p style="font-family: Arial, Helvetica, Sans-Serif; color: #999; font-size: 11px; line-height: 16px; margin: 5px 0 0 0;">
                <?php print($field_teaser_image[0]['field_image_copyright']['und'][0]['value']); ?></p>
            </td>
            <td width="20" class="block_td pic_td" style="vertical-align: top;">&nbsp;</td>
            <?php endif; ?>
            <td width="300" class="block_td percent_td" style="vertical-align: top;">
                <p style="font-family: Arial, Helvetica, Sans-Serif; color: #4d4d4d; font-size: 15px; line-height: 21px; margin: 0 0 10px;"><?php print render($content['body']); ?></p>
                <a target="_blank" href="<?php print($node_url); ?>" style="font-family: Arial, Helvetica, Sans-Serif; color: #f63; font-size: 15px; line-height: 21px; text-decoration: none; font-weight: bold;"><img src="<?php print $GLOBALS['base_url'] ?>/sites/all/themes/custom/parliamentwatch/images/newsletter/link-icon.png" width="12" height="12" border="0" style="display:inline-block; margin-bottom: 2px;"> Weiterlesen</a>
            </td>
        </tr>
        <tr>
            <td colspan="3" width="100%" style="height: 25px;">&nbsp;</td>
        </tr>
    </table>
</div>