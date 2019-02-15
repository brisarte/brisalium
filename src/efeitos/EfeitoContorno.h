#include "../core/Efeito.h"

class EfeitoContorno : public Efeito {
    public:
        EfeitoContorno();

        ofxCvContourFinder contourFinder;
        void aplicaEfeito( ofFbo *fboBrisa, ofPixels *pixelsBrisa);
};
