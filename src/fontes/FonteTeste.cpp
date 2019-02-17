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
    ofSetColor(255, 255, 255); // white
    ofDrawRectangle( 256, 0, 256, 256);
    int interval = 256;
    int posy = 0;
    for(int interval = 256; interval > 1; interval/=2 ) {
        posy += interval;
        for(int i = 256; i < 768; i+=interval ) {
            ofDrawRectangle( i, posy, interval/2, interval/2);
        }
    }
    fboFonte.end();
}
void FonteTeste::drawControls(){
}
