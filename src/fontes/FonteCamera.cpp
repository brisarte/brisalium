#include "FonteCamera.h"

FonteCamera::FonteCamera() {
}

void FonteCamera::setup(){
    //Select camera by its id in system
    grabber.setDeviceID( 0 );
    //Select desired grabbing frame rate
    grabber.setDesiredFrameRate( 30 );
    //Start grabbing with desired frame width and height
    grabber.initGrabber( 640, 480 );
}

void FonteCamera::draw(){
    grabber.update();
    fboFonte.begin();
    ofSetColor(255,255,255);
    grabber.draw(0,0, 1024, 768);
    fboFonte.end();
}

void FonteCamera::drawControls(){
}
