#include "../core/Efeito.h"

class EfeitoRastro : public Efeito {
    public:
        EfeitoRastro();

        int iRastro;
        int iForcaRastro;

        ofxCvColorImage rastroImage;   
        void aplicaEfeito( ofFbo *fboBrisa, ofPixels *pixelsBrisa);
        void drawControls();
};
