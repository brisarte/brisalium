#include "Brisa.h"

Brisa::Brisa() {
    hasFonte = false;
}

void Brisa::setup(Fonte *fonteBrisa) {

    fonte = fonteBrisa;
    fonte->setup();
    hasFonte = true;
    fboBrisa.allocate(1024, 768);
    pixelsBrisa.allocate(1024,768, 3);

    /* Limpa o fbo
     * (será realmente necessário?)
     */
    fboBrisa.begin();
    ofClear(0,0,0);
    fboBrisa.end();

 //   efeitos.push_back(new EfeitoBlur);
 //   efeitos.push_back(new EfeitoContorno);
    cout << "Brisa setup;\n";
}
void Brisa::update() {
    updateFonte();   
    aplicaEfeitos();
}

void Brisa::addEfeito(Efeito* efeito) {
    efeitos.push_back(efeito);
}

void Brisa::updateFonte() {
    fboBrisa.begin();
    fonte->update();
    fonte->getFbo().draw(0,0,1024,768);
    fboBrisa.end();
    fboBrisa.readToPixels(pixelsBrisa);
}

void Brisa::draw() {
    fboBrisa.draw(0,0,1024,768);
}
void Brisa::aplicaEfeitos() {
    for( int i = 0; i < efeitos.size(); i++ )
    {
        efeitos[i]->aplicaEfeito(&fboBrisa, &pixelsBrisa);
    }
}
