#include "FonteKinect.h"

FonteKinect::FonteKinect( ofxKinect *kinectGlobal ) {
    kinect = kinectGlobal;
}

void FonteKinect::setup(){
    if( !kinect->isConnected() ) {
        kinect->setRegistration(true);
        kinect->init();
        kinect->open();
        kinect->setCameraTiltAngle(0);
    }
}
void FonteKinect::update(){
    fboFonte.begin();
    if( kinect->isConnected() ) {
        kinect->update();
        kinect->drawDepth(0,0,1024,768);
    }
    fboFonte.end();
}

void FonteKinect::drawControls(){
}
