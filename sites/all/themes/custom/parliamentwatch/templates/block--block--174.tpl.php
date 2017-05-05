<?php $tag = $block->subject ? 'section' : 'div'; ?>
<<?php print $tag; ?><?php print $attributes; ?>>
  <div class="block-inner clearfix">
    <div class="content-wrapper">
        <?php print render($title_prefix); ?>
        <?php if ($block->subject): ?>
          <h2<?php print $title_attributes; ?>><?php print $block->subject; ?></h2>
        <?php endif; ?>
        <?php print render($title_suffix); ?>


        <div class="kc_wdr_teaser">
          <!-- http://kandidatencheck-test.wdr.de/kandidatencheck/img/[vn]_[nn]/[id]-L.jpg" alt="">-->
          <a class="kc_wdr_teaser__image" href="http://kandidatencheck.wdr.de/kandidatencheck/video/682790" target="_blank"><img src="http://kandidatencheck-test.wdr.de/kandidatencheck/img/Carina_Goedecke/682790-L.jpg" alt=""></a>
          <a class="kc_wdr_teaser__link" href="http://kandidatencheck.wdr.de/kandidatencheck/?kandidat=682790" target="_blank">Zum Profil beim WDR</a>
        </div>
    </div>
  </div>
</<?php print $tag; ?>>