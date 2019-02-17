#pragma once

#include "ofxImGui.h"
#include "ofMain.h"
#include "ofxOpenCv.h"
#include "ofxKinect.h"
#include "core/Brisa.h"

class GuiApp: public ofBaseApp {
    public:
        ofxKinect kinectGlobal;

        void setup();
        void update();
        void draw();
        void mousePressed(int x, int y, int iButton) ;

        void drawBrisaControls(int i);
            
        ofxImGui::Gui gui;
        vector<Brisa*> brisas;
};
