#include "EfeitoContorno.h"

EfeitoContorno::EfeitoContorno() {
    Efeito();
    grayImage.allocate(1024,768);
}
    
void EfeitoContorno::aplicaEfeito( ofFbo *fboBrisa, ofPixels *pixelsBrisa) {
    pixelsBrisa->setImageType(OF_IMAGE_GRAYSCALE);
    grayImage.setFromPixels(*pixelsBrisa);

    contourFinder.findContours(grayImage, 100, (1024*768), 20, true);

    fboBrisa->begin();
    ofClear(0,0,0,0);
    ofSetColor(255,255,255);
    contourFinder.draw(0,0,1024,768);
    fboBrisa->end();
}
