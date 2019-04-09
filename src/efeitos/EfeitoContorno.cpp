#include "EfeitoContorno.h"

EfeitoContorno::EfeitoContorno() {
    Efeito();
    grayImage.allocate(1024,768);
    minArea = 10;
    maxArea = (1024*768)/2;
    nConsidered = 10;
}
EfeitoContorno::EfeitoContorno(int idEfeito) {
    Efeito();
    grayImage.allocate(1024,768);
    minArea = 10;
    maxArea = (1024*768)/2;
    nConsidered = 10;
    id = idEfeito;
}
    
void EfeitoContorno::aplicaEfeito( ofFbo *fboBrisa, ofPixels *pixelsBrisa) {
    pixelsBrisa->setImageType(OF_IMAGE_GRAYSCALE);
    grayImage.setFromPixels(*pixelsBrisa);

    contourFinder.findContours(grayImage, minArea, maxArea, nConsidered, true);

    fboBrisa->begin();
    ofClear(0,0,0,0);
    ofSetColor(255,255,255);
    contourFinder.draw(0,0,1024,768);
    fboBrisa->end();
}

void EfeitoContorno::drawControls() {
    string areaNome = "[" + to_string(id + 1) + "] minArea";
    ImGui::SliderInt(areaNome.c_str(), &minArea, 0, 2000);
    ImGui::SliderInt("maxArea", &maxArea, 0, (1024*768));
    ImGui::SliderInt("nConsidered", &nConsidered, 0, 20);
}
