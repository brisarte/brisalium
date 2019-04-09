#include "../core/Efeito.h"

class EfeitoBrilhoContraste : public Efeito {
    public:
        EfeitoBrilhoContraste();

        float iBrilho;
        float iContraste;

        void aplicaEfeito( ofFbo *fboBrisa, ofPixels *pixelsBrisa);
        void drawControls();
};
