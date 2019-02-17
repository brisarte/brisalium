#include "FonteVideo.h"

FonteVideo::FonteVideo() {
}

void FonteVideo::setup(){
}

void FonteVideo::update(){
    fboFonte.begin();
    ofSetColor(255,255,255);
    ofDrawRectangle( 768, 512, 256, 256);
    fboFonte.end();
}

void FonteVideo::drawControls(){
}

void FonteVideo::loadVideo(string videoPath) {

}
