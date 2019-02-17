#include "EfeitoRastro.h"

EfeitoRastro::EfeitoRastro() {
    Efeito();
    colorImage.allocate(1024,768);
    rastroImg.allocate(1024,768);
}
    
/* Ainda não funciona
 *
 * a ideia é pegar a img do fbo como ela estava logo antes
 * e salvar ele na var rastroImg.
 *
 * Talvez seja necessário printar as fbo dos efeitos para testes
 * */
void EfeitoRastro::aplicaEfeito( ofFbo *fboBrisa, ofPixels *pixelsBrisa) {
    fboBrisa->readToPixels(*pixelsBrisa);
    pixelsBrisa->setImageType(OF_IMAGE_COLOR);
    colorImage.setFromPixels(*pixelsBrisa);

    rastroImg = colorImage;

    fboBrisa->begin();
    ofSetColor(255,255,255);
    rastroImg.draw(0,0,1024,768);
    fboBrisa->end();
}

void EfeitoRastro::drawControls() {
    ImGui::SliderInt("Rastro", &iRastro, 0, 20);
}
