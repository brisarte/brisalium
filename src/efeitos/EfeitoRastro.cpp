#include "EfeitoRastro.h"

EfeitoRastro::EfeitoRastro() {
    Efeito();
    colorImage.allocate(1024,768);
    rastroImage.clear();
    rastroImage.allocate(1024,768);
    iRastro = 2;
    iForcaRastro = 25;
}

void EfeitoRastro::aplicaEfeito( ofFbo *fboBrisa, ofPixels *pixelsBrisa) {
    pixelsBrisa->setImageType(OF_IMAGE_COLOR);
    colorImage.setFromPixels(*pixelsBrisa);

    ofPixels & pixF = rastroImage.getPixels();
    ofPixels & pixA = colorImage.getPixels();
    int numPixels = pixF.size();
    for (int i = 0; i < numPixels; i++) {
        float pixelRastro = pixF[i] *((float)iRastro/100);
        float pixelNovo = pixA[i] * (1 - (float)iRastro/100);
        pixF[i] = ofClamp(pixelRastro*iForcaRastro/50 + pixelNovo, 0 , 255);

    }
    rastroImage.flagImageChanged();
    colorImage = rastroImage;

    fboBrisa->begin();
    colorImage.draw(0,0,1024,768);
    fboBrisa->end();
}

void EfeitoRastro::drawControls() {
    ImGui::SliderInt("Qtd Rastro", &iRastro, 0, 99);
    ImGui::SliderInt("Força Rastro", &iForcaRastro, 0, 100);
}
