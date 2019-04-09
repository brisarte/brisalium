#include "Efeito.h"

Efeito::Efeito() {
    pixelsEfeito.allocate(1024,768, OF_IMAGE_COLOR);
    id = 0;
}
    
void Efeito::aplicaEfeito( ofFbo *fboBrisa, ofPixels *pixelsBrisa) {
    cout << "Efeito #" << id << " aplicado;\n";
}

void Efeito::drawControls() {
}
