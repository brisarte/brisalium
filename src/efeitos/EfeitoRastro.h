#include "../core/Efeito.h"

class EfeitoRastro : public Efeito {
    public:
        EfeitoRastro();

        int iRastro;

        ofxCvColorImage rastroImg;   
        void aplicaEfeito( ofFbo *fboBrisa, ofPixels *pixelsBrisa);
        void drawControls();
};
