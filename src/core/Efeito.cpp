#include "Efeito.h"

Efeito::Efeito() {
    pixelsEfeito.allocate(1024,768, OF_IMAGE_COLOR);
}
    
void Efeito::aplicaEfeito( ofFbo *fboBrisa, ofPixels *pixelsBrisa) {
    cout << "Efeito # aplicado;\n";
}
