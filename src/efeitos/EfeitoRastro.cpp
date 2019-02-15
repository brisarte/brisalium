#include "EfeitoRastro.h"

EfeitoRastro::EfeitoRastro() {
    Efeito();
    colorImage.allocate(1024,768);
    rastroImg.allocate(1024,768);
}
    
void EfeitoRastro::aplicaEfeito( ofFbo *fboBrisa, ofPixels *pixelsBrisa) {
    pixelsBrisa->setImageType(OF_IMAGE_COLOR);
    colorImage.setFromPixels(*pixelsBrisa);

    rastroImg += colorImage;

    fboBrisa->begin();
    ofSetColor(255,255,255);
    rastroImg.draw(0,0,1024,768);
    fboBrisa->end();
}
