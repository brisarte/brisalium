#include "../core/Fonte.h"

class FonteTeste : public Fonte {
    public:
        FonteTeste();
        ofColor corTeste;
        void setup();
        void draw();
        void drawControls();
};
