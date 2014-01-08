<?php
    
    require_once('../inc/class.Event.inc');

    class EventsCollector {
        /*
            get venues list that are trending from lat long and date
            return in json format
        */
        public function getEventTrending( $latlong, $date ) {
            //$data = json_decode( $json, TRUE );
            // loop from data from foursquare to bind into Venue objects list
            $events = array();
            $event = new Event;
            // event 1
            $event->id = 1;
            $event->name = 'Bangkok Fashion Outlet';
            $event->imaageURL = 'http://appdul/img/event1.png';
            $event->imageThumbURL = 'http://appdul/img/event1_thumb.png';
            $event->url = 'http://www.bangkokfashionoutlet.com/';
            $event->duration = 'MON-SUN 11.00-20.00';
            $event->description = 'The first Fashion Outlet in Central Bangkok'.
                                    'Over 500 top Thai and international brands'. 
                                    'Sale up to 90% On selected items';
            $event->contact = 'Silom Road, At Silom & Surasak Intersection 02-631-1000';
            $event->hereNowCount = 200;
            $event->checkedInCount = 1250;
            array_push( $events , $event );
            // event 2
            $event = new Event;
            $event->id = 2;
            $event->name = 'งานสัปดาห์หนังสือ 2557';
            $event->imaageURL = 'http://appdul/img/event2.png';
            $event->imageThumbURL = 'http://appdul/img/event2_thumb.png';
            $event->url = 'http://www.booksfairbangkok.com/';
            $event->duration = '2 มค. ถึง 10 มค. 2557';
            $event->description = 'The first Fashion Outlet in Central Bangkok'.
                                    'Over 500 top Thai and international brands'. 
                                    'Sale up to 90% On selected items';
            $event->contact = 'Silom Road, At Silom & Surasak Intersection 02-631-1000';
            $event->hereNowCount = 150;
            $event->checkedInCount = 1250;
            array_push( $events , $event );

            $json_return = json_encode( $events );

            return $json_return;
        }
    }
?>