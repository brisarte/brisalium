#include "Efeito.h"
#include "EfeitoBlur.h"
#include "Fonte.h"
#include "FonteTeste.h"
#include "FonteKinect.h"

class Brisa {

    public:

        vector<Efeito*> efeitos;
        ofFbo fboBrisa;
        Fonte *fonte;

        void setup(Fonte *fonteBrisa);
        void update();
        void draw();

        void updateFonte();
        void aplicaEfeitos();
};
