<?php
    require_once('../inc/class.EventsCollector.inc');
    
    $eventsCollector = new EventsCollector();
    $json_return = $eventsCollector->getEventTrending( 
            '13.735889,100.561302',
            '20131223'
        );
    header('Content-type: application/json; charset=utf-8');
    header('Access-Control-Allow-Origin: *');
    echo $json_return;
?>