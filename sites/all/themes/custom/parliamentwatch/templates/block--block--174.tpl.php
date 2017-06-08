<?php

$account_parliament = _pw_get_current_parliament_term()->name;
$account_name = _pw_get_current_user()->name;
if($account_parliament != "Nordrhein-Westfalen" || empty($account_name)){
  return;
}
$file = file_get_contents(dirname(__FILE__)."/wdr/candidates.json");
$json = json_decode($file);
foreach($json->k as $candidate) {
  $links = $candidate->l;
  foreach($links as $link){
    if(isset($candidate->img) && $link->u == "https://www.abgeordnetenwatch.de/profile/".$account_name){
      $wdr_id = $candidate->id;
      $wdr_img_url = "http://".$candidate->img->l;
      break;
    }
  }
}
if(!isset($wdr_id)){
  return;
}
?>
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
          <!-- http://kandidatencheck.wdr.de/kandidatencheck/video/ -->
          <a class="kc_wdr_teaser__image" href="http://kandidatencheck.wdr.de/kandidatencheck/?kandidat=<?php print $wdr_id; ?>" target="_blank"><img src="<?php print $wdr_img_url; ?>" alt=""></a>
          <!--a class="kc_wdr_teaser__link" href="http://kandidatencheck.wdr.de/kandidatencheck/?kandidat=<?php print $wdr_id; ?>" target="_blank">Zum Profil beim WDR</a-->
        </div>
    </div>
  </div>
</<?php print $tag; ?>>