#include "EfeitoBrilhoContraste.h"

EfeitoBrilhoContraste::EfeitoBrilhoContraste() {
    Efeito();
    grayImage.allocate(1024,768);
    iBrilho = 0.5;
    iContraste = 0.5;
}

void EfeitoBrilhoContraste::aplicaEfeito( ofFbo *fboBrisa, ofPixels *pixelsBrisa) {
    pixelsBrisa->setImageType(OF_IMAGE_GRAYSCALE);
    grayImage.setFromPixels(*pixelsBrisa);

    grayImage.brightnessContrast(iBrilho, iContraste);

    fboBrisa->begin();
    grayImage.draw(0,0,1024,768);
    fboBrisa->end();
}

void EfeitoBrilhoContraste::drawControls() {
    ImGui::SliderFloat("brilho", &iBrilho, -1, 1);
    ImGui::SliderFloat("contraste", &iContraste, 0, 1);
}
