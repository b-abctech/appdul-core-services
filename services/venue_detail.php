<?php
    require_once('../inc/class.FoursquareConnector.inc');

    $foursquareConnector = new FoursquareConnector();
    $json_return = $foursquareConnector->getVenue( $_GET['vid'], '20131223' );
    header('Content-type: application/json; charset=utf-8');
    header('Access-Control-Allow-Origin: *');
    echo $json_return;
?>