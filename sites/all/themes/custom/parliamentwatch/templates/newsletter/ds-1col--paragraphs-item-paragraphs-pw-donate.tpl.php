<?php $content_link_url = $content['field_pg_content_link'][0]['#element']['url']; ?>
<div class="relative entity-paragraphs-item <?php print render($content['field_pg_donate_targetgroup']); ?>">
    <table cellpadding="0" cellspacing="0" border="0" bgcolor="#ffffff" width="600" align="center" class="deviceWidth" style="border-bottom: 1px solid #f63;">
        <tr>
            <td colspan="3" width="100%">
                <table cellpadding="0" cellspacing="0" border="0" bgcolor="#ffffff" width="100%" align="center">
                    <tr>
                        <td width="80%">
                            <h3 style="font-family: 'Times New Roman', Times, serif; font-weight: normal; font-size: 24px; margin: 0;"><a target="_blank" href="<?php print $content_link_url; ?>" style="color: #333; text-decoration: none;"><?php print render($content['field_pg_content_title']); ?></a></h3>
                        </td>
                        <td width="20%" style="text-align: right;">
                            <a href="https://twitter.com/intent/tweet?text=Jetzt für abgeordnetenwatch.de spenden&url=<?php print $content_link_url; ?>" class="twitter" target="_blank"><img src="/sites/all/themes/custom/parliamentwatch/images/newsletter/social-twitter.png" alt="Twitter" border="0" style="display: inline-block;"></a>
                            <a href="https://www.facebook.com/sharer/sharer.php?u=<?php print $content_link_url; ?>" class="facebook" target="_blank"><img src="/sites/all/themes/custom/parliamentwatch/images/newsletter/social-facebook.png" alt="Facebook" border="0" style="display: inline-block;"></a>
                        </td>
                    </tr>
                </table>
            </td>
        </tr>
        <tr>
            <td colspan="3" width="100%" style="height: 10px;">&nbsp;</td>
        </tr>
        <tr>
            <td colspan="3" width="100%">
                <?php print render($content['field_pg_content_body']); ?>
            </td>
        </tr>
        <tr>
            <td colspan="3" width="100%" style="height: 20px;">&nbsp;</td>
        </tr>
    </table>

    <table cellpadding="0" cellspacing="0" border="0" bgcolor="#ffffff" width="600" align="center" class="deviceWidth" style="border-bottom: 1px solid #f63;">
        <tr>
            <td colspan="3" width="100%" style="height: 20px;">&nbsp;</td>
        </tr>
        <tr>
            <td width="180">&nbsp;</td>
            <td width="240" style="text-align: center;">
                <table width="100%" border="0" cellspacing="0" cellpadding="0">
                    <tr>
                        <td>
                            <table border="0" cellspacing="0" cellpadding="0" align="center">
                                <tr>
                                    <td>
                                        <a href="<?php print render($content['field_pg_content_link']); ?>"   target="_blank" style="font-size: 16px; font-family:   Helvetica, Arial, sans-serif; color: #ffffff;   text-decoration: none; background-color: #f63;   border-top: 12px solid #f63; border-bottom: 12px   solid #f63; border-right: 18px solid #f63;   border-left: 18px solid #f63; display: inline-block;   white-space: nowrap;">Jetzt&nbsp;fördern</a>

                                    </td>
                                </tr>
                            </table>
                        </td>
                    </tr>
                </table>
            </td>
            <td width="180">&nbsp;</td>
        </tr>
        <tr>
            <td colspan="3" width="100%" style="height: 20px;">&nbsp;</td>
        </tr>
    </table>
</div>
