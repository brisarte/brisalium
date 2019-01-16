#include "Efeito.h"

Efeito::Efeito() {
    colorImage.allocate(1024,768);
    pixelsEfeito.allocate(1024,768, 4);
}
    
void Efeito::aplicaEfeito( ofFbo *fboBrisa) {
    cout << "Efeito # aplicado;\n";
    fboBrisa->begin();
    ofColor cor(255,0,0);
    int i = 10;
    cor.setHueAngle(i*30);
    ofSetColor(cor);
    ofNoFill();
    ofDrawRectangle( 100+ofRandom(i*100), 100+ofRandom(i*100), i*200, 400+ofRandom(350));
    fboBrisa->end();
    fboBrisa->readToPixels(pixelsEfeito);
    colorImage.setFromPixels(pixelsEfeito);
    colorImage.blur(13);
}
