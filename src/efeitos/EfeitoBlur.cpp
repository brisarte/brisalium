#include "EfeitoBlur.h"

EfeitoBlur::EfeitoBlur() {
    Efeito();
    colorImage.allocate(1024,768);
    iBlur = 1;
}
    
void EfeitoBlur::aplicaEfeito( ofFbo *fboBrisa, ofPixels *pixelsBrisa) {
    pixelsBrisa->setImageType(OF_IMAGE_COLOR);
    colorImage.setFromPixels(*pixelsBrisa);
    colorImage.blur(iBlur*2+1);

    fboBrisa->begin();
    ofSetColor(255,255,255);
    colorImage.draw(0,0,1024,768);
    fboBrisa->end();
}

void EfeitoBlur::drawControls() {
    ImGui::SliderInt("Blur", &iBlur, 0, 20);
}
