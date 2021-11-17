<?php
	if(isset($_GET['site']))
	{
		header("Location: ".$_GET['site']);  //Utilisez dans l'url Redirect-Exemple.php?site=https://github.com et changez https://github.com par le site de votre choix
		exit();
	}
?>
