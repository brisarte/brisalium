#include "../core/Fonte.h"

class FonteCamera : public Fonte {
    public:
        FonteCamera();

        ofVideoGrabber grabber;


        void setup();
        void update();
        void drawControls();
};
