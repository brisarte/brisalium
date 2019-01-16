#include "FonteTeste.h"

FonteTeste::FonteTeste() {
}

void FonteTeste::setup(){
    corTeste.set(255,0,255);
}
void FonteTeste::update(){
    fboFonte.begin();
    ofSetColor(corTeste);
    ofDrawRectangle( 100+ofRandom(100), 100+ofRandom(100), 200, 400+ofRandom(350));
    fboFonte.end();
}
void FonteTeste::drawControls(){
}
