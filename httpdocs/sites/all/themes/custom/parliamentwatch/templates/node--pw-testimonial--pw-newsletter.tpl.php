<?php print render($title_suffix); ?>

<td width="500" class="block_td percent_td">
  <table cellpadding="0" cellspacing="0" border="0" bgcolor="transparent" width="500" align="center" class="deviceWidthInner">
    <tr>
      <td width="70" style="vertical-align: top;">
        <?php print render($content['field_testimonial_portrait']); ?>
      </td>
      <td width="20">&nbsp;</td>
      <td width="390" style="vertical-align: top;">
        <blockquote style="font-family: 'Times New Roman', Times, serif; font-size: 18px; line-height: 22px; font-style: italic; color: #4d4d4d; margin: 0 0 10px; padding: 0;">
          <span style="color: #999; font-family: Georgia,Times New Roman,Times,serif; font-size: 20px;">„</span><?php print render($content['field_testimonial_quote']); ?><span style="color: #999; font-family: Georgia,Times New Roman,Times,serif; font-size: 20px; ">“</span>
        </blockquote>
        <p style="font-family: Arial, Helvetica, Sans-Serif; color: #999; font-size: 11px; line-height: 16px; margin: 0 0 10px;">
          <?php print render($content['field_testimonial_fullname']); ?> ist eines von <?php print variable_get('pw_globals_supporters', 0); ?> Fördermitgliedern von abgeordnetenwatch.de
        </p>
      </td>
      <td width="20">&nbsp;</td>
    </tr>
    <tr>
      <td colspan="4" width="600" style="height: 10px; font-size: 10px;">&nbsp;</td>
    </tr>
  </table>
</td>
