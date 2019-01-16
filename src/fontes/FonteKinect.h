#include "../core/Fonte.h"

class FonteKinect : public Fonte {
    public:
        ofxKinect *kinect;
        FonteKinect(ofxKinect *kinect);

        void setup();
        void update();
        void drawControls();
};
