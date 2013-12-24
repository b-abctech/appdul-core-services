<?php
    class Venue {
        public $id;
        public $name;
        public $phone;
        public $address;
        public $categoryName;
        public $url;
        public $checkinsCount;
        public $hereNowCount;

        public $venue_data = array();

        /*
            set venue data and bind them to properties
        */
        public function setVenue( $venue_array ) {
            $this->venue_data = &$venue_array;
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

        function setId() {
            $this->id = $this->venue_data['id'];
        }

        function setName() {
            $this->name = $this->venue_data['name'];
        }

        function setPhone() {
            $this->phone = (!empty($this->venue_data['contact'])) ? 
                                $this->venue_data['contact']['phone']:'';
        }

        function setAddress() {
            $this->address = (!empty($this->venue_data['location'])) ? 
                                $this->venue_data['location']['address']:'';
        }

        function setCategoryName() {
            $this->categoryName = (!empty($this->venue_data['categories'])) ? 
                                $this->venue_data['categories'][0]['name']:'';
        }

        function setUrl() {
            $this->url = (!empty($this->venue_data['url'])) ? 
                                $this->venue_data['url']:'';
        }

        function setCheckinsCount() {
            $this->checkinsCount = (!empty($this->venue_data['stats'])) ? 
                                $this->venue_data['stats']['checkinsCount']:'';
        }

        function setHereNowCount() {
            $this->hereNowCount = (!empty($this->venue_data['hereNow'])) ? 
                                $this->venue_data['hereNow']['count']:'';
        }
    }
?>