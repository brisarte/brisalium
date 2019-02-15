#include "../core/Efeito.h"

class EfeitoRastro : public Efeito {
    public:
        EfeitoRastro();

        ofxCvColorImage rastroImg;   
        void aplicaEfeito( ofFbo *fboBrisa, ofPixels *pixelsBrisa);
};
