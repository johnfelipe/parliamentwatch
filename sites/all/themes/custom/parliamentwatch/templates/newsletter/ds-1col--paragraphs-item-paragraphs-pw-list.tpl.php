<div class="archive_<?php print $field_show[0]['value'] ?>">
    <div class="<?php print render($content['field_pg_donate_targetgroup']); ?> <?php print $classes;?>">

        <?php if (isset($title_suffix['contextual_links'])): ?>
            <?php print render($title_suffix['contextual_links']); ?>
        <?php endif; ?>

        <?php if (!empty($field_pg_list_title)): ?>
            <table cellpadding="0" cellspacing="0" border="0" bgcolor="#ffffff" width="600" align="center" class="deviceWidth" style="margin-bottom: 10px;">
                <tr>
                    <td width="100%" style="height: 20px;">&nbsp;</td>
                </tr>
                <tr>
                    <td width="100%">
                        <?php if ($field_pg_list_title_small[0]['value'] == '0'): ?>
                            <h3 style="font-family: 'Times New Roman', Times, serif; font-weight: normal; font-size: 24px; margin: 0 0 10px; color: #333;">
                                <?php print render($content['field_pg_list_title']); ?>
                            </h3>
                        <?php endif; ?>

                        <?php if ($field_pg_list_title_small[0]['value'] == '1'): ?>
                            <p style="font-family: Arial, Helvetica, Sans-Serif; color: #4d4d4d; font-size: 15px; line-height: 21px; margin: 0 0 10px;">
                                <strong><?php print render($content['field_pg_list_title']); ?></strong>
                            </p>
                        <?php endif; ?>
                    </td>
                </tr>
            </table>
        <?php endif; ?>

        <table cellpadding="0" cellspacing="0" border="0" bgcolor="#ffffff" width="600" align="center" class="deviceWidth" style="margin-bottom: 10px;">
            <?php print render($content['field_pg_list_item']); ?>
        </table>
    </div>
</div>