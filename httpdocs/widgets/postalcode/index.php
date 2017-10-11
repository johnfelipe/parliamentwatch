<?
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
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML+RDFa 1.1//EN">
<html lang="de" xmlns="http://www.w3.org/1999/xhtml" xml:lang="de">
    <head>
    	<title>abgeordnetenwatch.de: Das virtuelle Wählergedächtnis</title>
    	<meta content="Das virtuelle Wählergedächtnis" name="description" />
    	<meta content="Das virtuelle Wählergedächtnis,Abgeordnete,Bundestag,Wahlen,Kandidaten,Parteien" name="keywords" />
    	<meta content="de" http-equiv="content-language" />
    	<meta content="text/html; charset=utf-8" http-equiv="content-type" />
    	<meta content="no-cache" http-equiv="cache-control" />
    	<meta content="no-cache" http-equiv="pragma" />
    	<meta content="noarchive" name="robots" />
        <meta content="index,follow" name="robots" />
    	<link href="https://awatch.wavecdn.net/sites/abgeordnetenwatch.de/themes/abgeordnetenwatch/favicon.ico" rel="shortcut icon">
    
    	<!-- CSS -->
    	<link type="text/css" rel="stylesheet" href="css/reset.css">
    	<link type="text/css" rel="stylesheet" href="css/rebrush.css">
    	<link type="text/css" rel="stylesheet" href="css/widgets.css">

        <!-- JavaScript -->
        <script src="js/jquery.min.js"></script>
        <script type="text/javascript">
          function pw_submit(){
            var query = $("#pw-search").val();
            $("#pw-search-form").attr("action", "https://<?echo $ahost;?>.abgeordnetenwatch.de/search/site/" + query);
          }
        </script>
	</head>
	<body id="widget-postalcodesearch" class="widget width-<?echo (isset($_GET["w"]) && $_GET["w"]==300)?"300":"160";?>">
	
        <header>
            <img src="images/logo-abgeordnentenwatch-153.png" id="logo" alt="abgeordnetenwatch.de" width="153" height="30" />
        </header>
        
        <div class="map"></div>
        
        <section id="section-content">
            <h4>Befragen Sie Ihre Kandidierenden</h4>
            <p>
             Einfach Postleitzahl eingeben und los geht's!
            </p>
            <form id="pw-search-form" method="post" action="https://<?echo $ahost;?>.abgeordnetenwatch.de/search/site" target="<?echo $atarget;?>">
                <fieldset>
                    <input pattern="\d{4,5}" maxlength="5" id="pw-search" type="text" class="txt" placeholder="Postleitzahl" alt="Postleitzahl" name="keys" />
                    <input onclick="pw_submit()" type="image" class="form-submit image" src="images/btn_search.png" title="Suchen" value="Suche" />
                </fieldset>
            </form>
        </section>
        
    </body>
</html>