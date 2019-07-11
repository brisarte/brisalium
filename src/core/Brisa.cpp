#include "Brisa.h"

Brisa::Brisa() {
    hasFonte = false;
}

void Brisa::setup(Fonte *fonteBrisa) {

    fonte = fonteBrisa;
    fonte->setup();
    fboBrisa.allocate(1024, 768, GL_RGBA);
    pixelsBrisa.allocate(1024,768, 3);
    hasFonte = true;

    cout << "Brisa setup;\n";
}

void Brisa::update() {
    if(this->hasFonte) {
       updateFonte();   
       aplicaEfeitos();
    }
}

void Brisa::addEfeito(Efeito* efeito) {
    efeitos.push_back(efeito);
}

void Brisa::updateFonte() {
    fboBrisa.begin();
    fonte->draw();
    fboBrisa.end();
    fboBrisa.readToPixels(pixelsBrisa);
}

void Brisa::draw() {
    fboBrisa.draw(0,0);
}

void Brisa::aplicaEfeitos() {
    for( int i = 0; i < efeitos.size(); i++ )
    {
        efeitos[i]->aplicaEfeito(&fboBrisa, &pixelsBrisa);
        fboBrisa.readToPixels(pixelsBrisa);
    }
}
