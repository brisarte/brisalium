#include "Efeito.h"
#include "EfeitoBlur.h"
#include "EfeitoContorno.h"
#include "EfeitoRastro.h"
#include "Fonte.h"
#include "FonteTeste.h"
#include "FonteKinect.h"
#include "FonteVideo.h"
#include "FonteCamera.h"

class Brisa {

    public:

        Brisa();
        vector<Efeito*> efeitos;
        ofFbo fboBrisa;
        ofPixels pixelsBrisa;
        Fonte *fonte;

        void setup(Fonte *fonteBrisa);
        void update();
        void draw();

        void updateFonte();
        void addEfeito(Efeito* efeito);
        void aplicaEfeitos();

        bool hasFonte;
};
