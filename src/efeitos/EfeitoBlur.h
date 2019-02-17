#include "../core/Efeito.h"

class EfeitoBlur : public Efeito {
    public:
        EfeitoBlur();

        int iBlur;
        void aplicaEfeito( ofFbo *fboBrisa, ofPixels *pixelsBrisa);
        void drawControls();
};
