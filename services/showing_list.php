<?php

    require_once('../inc/class.ShowingCollector.inc');

    $showingCollector = new ShowingCollector();
    $json_return = $showingCollector->getNowShowingList();

    header('Content-type: application/json; charset=utf-8');
    header('Access-Control-Allow-Origin: *');
    echo $json_return;
?>