#pragma once

#include "ofxImGui.h"
#include "ofMain.h"
#include "ofxOpenCv.h"
#include "ofxKinect.h"

class GuiApp: public ofBaseApp {
    public:
        void setup();
        void update();
        void draw();
        void mousePressed(int x, int y, int iButton) ;

        ofxImGui::Gui gui;
};
