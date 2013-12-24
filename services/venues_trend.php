<?php
    require_once('../inc/class.FoursquareConnector.inc');
    
    $foursquareConnector = new FoursquareConnector();
    $json_return = $foursquareConnector->getVenuesTrending( 
            '13.735889,100.561302',
            '20131223'
        );
    header('Content-type: application/json; charset=utf-8');
    echo $json_return;
?>