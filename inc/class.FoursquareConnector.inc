<?php
    
    require_once('../inc/class.Venue.inc');

    define('CLIENT_ID','2C0ODWQ4A1NTTHW3XCEEPEC3G5OERW0K52POFTZU25H4PLGP');
    define('CLIENT_SECRET','3CUHR0GR1ZZLX5F53VS2F3OH35ZZ2KPK5NFRKBY5SKLAYO1U');

    class FoursquareConnector {
        /*
            get venues list that are trending from lat long and date
            return in json format
        */
        public function getVenuesTrending( $latlong, $date ) {
            $url = 'https://api.foursquare.com/v2/venues/trending?'.
                    "ll=$latlong".
                    '&client_id=2C0ODWQ4A1NTTHW3XCEEPEC3G5OERW0K52POFTZU25H4PLGP'.
                    '&client_secret=3CUHR0GR1ZZLX5F53VS2F3OH35ZZ2KPK5NFRKBY5SKLAYO1U'.
                    "&v=$date";

            $json = file_get_contents( $url );
            $data = json_decode( $json, TRUE );
            // loop from data from foursquare to bind into Venue objects list
            $venues = array();

            foreach ($data['response']['venues'] as $venue_array ) {
                $venue = new Venue;
                $venue->setVenue( $venue_array );
                array_push( $venues , $venue );
            }

            $json_return = json_encode( $venues );

            return $json_return;
        }
    }
?>