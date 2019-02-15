#include "Efeito.h"
#include "EfeitoBlur.h"
#include "EfeitoContorno.h"
#include "Fonte.h"
#include "FonteTeste.h"
#include "FonteKinect.h"

class Brisa {

    public:

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
};
