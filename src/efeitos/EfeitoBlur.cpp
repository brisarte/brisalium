#include "EfeitoBlur.h"

EfeitoBlur::EfeitoBlur() {
    Efeito();
}
    
void EfeitoBlur::aplicaEfeito( ofFbo *fboBrisa) {
    cout << "Efeito blur aplicado;\n";
    fboBrisa->readToPixels(pixelsEfeito);
    colorImage.setFromPixels(pixelsEfeito);
    colorImage.blur(13);
    /*
    fboBrisa->begin();
    colorImage.draw(0,0,1024,768);
    fboBrisa->end();*/
}
