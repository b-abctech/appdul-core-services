<?
    require_once('class.Venue.inc');
    class VenueDetail extends Venue {

        public $imageURL;
        public $imageThumbURL;
        public $opentime;
        public $description;

        public function prepare() {
            $this->setImageURL();
            $this->setOpentime();
            $this->setDescription();
            parent::prepare();
        }

        function setImageURL(){
            $this->imageURL = (!empty($this->venue_data['photos']['groups'])) ?
                $this->venue_data['photos']['groups'][0]['items'][0]['prefix'].
                '280x180'.
                $this->venue_data['photos']['groups'][0]['items'][0]['suffix'] :
                null;
        }

        function setOpentime(){
            $this->opentime = (!empty($this->venue_data['hours'])) ?
                $this->venue_data['hours']['timeframes'][0]['days'].
                ' '.
                $this->venue_data['hours']['timeframes'][0]['open'][0]['renderedTime']:
                '-';
        }

        function setDescription(){
            $this->description = (!empty($this->venue_data['description']))?
                $this->venue_data['description']:'-';
        }

    }
?>