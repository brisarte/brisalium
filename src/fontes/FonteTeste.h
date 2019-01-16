#include "../core/Fonte.h"

class FonteTeste : public Fonte {
    public:
        FonteTeste();
        ofColor corTeste;
        void setup();
        void update();
        void drawControls();
};
