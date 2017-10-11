<?php
 $ahost = "www";
if (isset($_GET["a"])){
  $ahost = "affiliate";
  if ($_GET["a"] != ""){
    $ahost = filter_var($_GET["a"],FILTER_SANITIZE_STRING).".".$ahost;
  }
}

$atarget = "_blank";
if (isset($_GET["t"])){
  $atarget = filter_var($_GET["t"],FILTER_SANITIZE_STRING);
}

 if (!isset($_GET["p"])){
    echo "Please specify parliament (as parameter p) e.g. ?p=hamburg.";
    die;
 }
 else {
     $parliament = filter_var($_GET["p"],FILTER_SANITIZE_STRING);
 }

$domain = "https://$ahost.abgeordnetenwatch.de";

 $url = "$domain/api/parliament/$parliament/answers.json";
 $data = json_decode(file_get_contents($url));
 if (sizeof($data->dialogues) == 0){
    echo "Invalid or empty parliament given.";
    die;
 }
 else {
    $last_dialogue = $data->dialogues["0"]->dialogue;
    if (!empty($last_dialogue->recipient_user_title)){
        $fullname = $last_dialogue->recipient_user_title." ".$last_dialogue->recipient_user_first_name." ".$last_dialogue->recipient_user_last_name;
    }
    else {
        $fullname = $last_dialogue->recipient_user_first_name." ".$last_dialogue->recipient_user_last_name;
    }
    $party_name = $last_dialogue->recipient_user_party;
    $answer_summary = $last_dialogue->answer_summary;
    $dialogue_link = $last_dialogue->dialogue_path;
    $user_picture = $last_dialogue->recipient_user_picture;
 }

 if (isset($_GET["w"]) && $_GET["w"]==300){
    $width = 300;
 }
 else{
    $width = 160;
 }
?>
<!DOCTYPE html>
<html lang="de" xmlns="http://www.w3.org/1999/xhtml" xml:lang="de">
    <head>
		
    	<title>abgeordnetenwatch.de: Das virtuelle Wählergedächtnis</title>
        <meta charset="UTF-8">
    	<meta content="Das virtuelle Wählergedächtnis" name="description" />
    	<meta content="Das virtuelle Wählergedächtnis,Abgeordnete,Bundestag,Wahlen,Kandidaten,Parteien" name="keywords" />
    	<meta content="de" http-equiv="content-language" />
    	<meta content="no-cache" http-equiv="cache-control" />
    	<meta content="no-cache" http-equiv="pragma" />
    	<meta content="noarchive" name="robots" />
        <meta content="index,follow" name="robots" />
    	<link href="/sites/all/themes/custom/pw_seven/favicon.ico" rel="shortcut icon" />
    
    	<!-- CSS -->
    	<link type="text/css" rel="stylesheet" href="css/reset.css">
    	<link type="text/css" rel="stylesheet" href="css/rebrush.css">
    	<link type="text/css" rel="stylesheet" href="css/widgets.css">
	 
	</head>
	<body id="widget-recentanswers" class="widget width-<?echo $width;?>">
	
        <header>
        <?
          if ($width==300){
              echo "<img src=\"images/logo_neu-slogan-278.png\" id=\"logo\" alt=\"abgeordnetenwatch.de\" width=\"278\" height=\"33\" />";
            }
            else{
              echo "<img src=\"images/logo-abgeordnentenwatch-153.png\" id=\"logo\" alt=\"abgeordnetenwatch.de\" width=\"153\" height=\"30\" />";
            }
        ?>
        </header>
        
        <section id="section-content" class="clearfix">
            <? if ($width == 300): ?>
                <a target="<?echo $atarget;?>" href="<?echo $domain.$dialogue_link;?>" class="float-left bordered"><img src="<?echo $user_picture;?>" width="75" height="100" border="0" alt="<?echo $fullname;?>" /></a>
            <? endif; ?>
        <h3><?echo "$fullname, $party_name";?></h3>
        <p>
         <?echo $answer_summary;?>
        </p>
    	<br clear="all" />
          <? if ($width == 160): ?>
            <a target="<?echo $atarget;?>" href="<?echo $domain.$dialogue_link;?>" class="float-left bordered"><img src="<?echo $user_picture;?>" width="75" height="100" border="0" alt="<?echo $fullname;?>" /></a>
          <? endif; ?>
        <div class="link-question">
            <a target="<?echo $atarget;?>" href="<?echo $domain.$dialogue_link;?>">Ganze Frage und Antwort lesen</a>
        </div>            
        </section>
    </body>
</html>