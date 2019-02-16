#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0,0,0); 
    FonteKinect *fonteKinect = new FonteKinect(&kinectGlobal);
    FonteTeste *fonteTeste = new FonteTeste();
    brisa = new Brisa;
    brisa->setup(fonteTeste);
}

//--------------------------------------------------------------
void ofApp::update(){

    for( int i = gui->brisas.size()-1; i >= 0; i-- ) {
        if(gui->brisas[i]->hasFonte) {
            gui->brisas[i]->update();
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    for( int i = gui->brisas.size()-1; i >= 0; i-- ) {
        gui->brisas[i]->draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
