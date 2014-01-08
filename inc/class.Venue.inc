<?php
    class Venue {
        public $id = '';
        public $name = '';
        public $phone = '';
        public $address = '';
        public $categoryName = '';
        public $url = '';
        public $checkinsCount = 0;
        public $hereNowCount = 0;

        public $venue_data = array();

        /*
            set bind them to properties
        */
        public function prepare() {
            $this->setId();
            $this->setName();
            $this->setPhone();
            $this->setAddress();
            $this->setCategoryName();
            $this->setUrl();
            $this->setCheckinsCount();
            $this->setHereNowCount();
            $this->venue_data = null;
        }

        function initVenueData( $venue_array ){
            $this->venue_data = &$venue_array;
        }

        function setId() {
            $this->id = $this->venue_data['id'];
        }

        function setName() {
            $this->name = $this->venue_data['name'];
        }

        function setPhone() {
            if(!empty($this->venue_data['contact']) && 
                !empty($this->venue_data['contact']['phone']))
                    $this->phone = $this->venue_data['contact']['phone'];
        }

        function setAddress() {
            if(!empty($this->venue_data['location']) && 
                !empty($this->venue_data['location']['address']))
                    $this->address = $this->venue_data['location']['address'];
        }

        function setCategoryName() {
            if(!empty($this->venue_data['categories']) && 
                !empty($this->venue_data['categories'][0]) &&
                !empty($this->venue_data['categories'][0]['name']))
                    $this->categoryName = $this->venue_data['categories'][0]['name'];
        }

        function setUrl() {
            if(!empty($this->venue_data['url']))
                $this->url = $this->venue_data['url'];
        }

        function setCheckinsCount() {
            if(!empty($this->venue_data['stats']) && 
                !empty($this->venue_data['stats']['checkinsCount']))
                    $this->checkinsCount = $this->venue_data['stats']['checkinsCount'];
        }

        function setHereNowCount() {
            if(!empty($this->venue_data['hereNow']) && 
                !empty($this->venue_data['hereNow']['count']))
                    $this->hereNowCount =$this->venue_data['hereNow']['count'];
        }
    }
?>