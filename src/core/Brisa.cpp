#include "Brisa.h"

void Brisa::setup(Fonte *fonteBrisa) {

    fonte = fonteBrisa;
    fonte->setup();
    fboBrisa.allocate(1024, 768);
    pixelsBrisa.allocate(1024,768, 3);

    /* Limpa o fbo
     * (será realmente necessário?)
     */
    fboBrisa.begin();
    ofClear(255,255,255, 0);
    fboBrisa.end();

    efeitos.push_back(new EfeitoBlur);
    cout << "Brisa setup;\n";
}
void Brisa::update() {
    updateFonte();   
    aplicaEfeitos();
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
