#include "../core/Efeito.h"

class EfeitoContorno : public Efeito {
    public:
        EfeitoContorno();
        EfeitoContorno(int id);

        int minArea,maxArea,nConsidered;
        ofxCvContourFinder contourFinder;
        void aplicaEfeito( ofFbo *fboBrisa, ofPixels *pixelsBrisa);
        void drawControls();
};
