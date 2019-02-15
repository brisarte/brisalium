#include "FonteTeste.h"

FonteTeste::FonteTeste() {
}

void FonteTeste::setup(){
    corTeste.set(255,0,0); // red
}
void FonteTeste::update(){
    fboFonte.begin();
    ofSetColor(corTeste);
    ofFill();
    ofDrawRectangle( 0, 0, 256, 256);
    ofSetColor(0, 255, 0); // green
    ofDrawRectangle( 0, 256, 256, 256);
    ofSetColor(0, 0, 255); // blue
    ofDrawRectangle( 0, 512, 256, 256);
    ofSetColor(0, 255, 255); // cyan
    ofDrawRectangle( 768, 0, 256, 256);
    ofSetColor(255, 0, 255); // magenta
    ofDrawRectangle( 768, 256, 256, 256);
    ofSetColor(255, 255, 0); // yellow
    ofDrawRectangle( 768, 512, 256, 256);
    fboFonte.end();
}
void FonteTeste::drawControls(){
}
