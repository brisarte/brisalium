#ifndef FONTE_H__
#define FONTE_H__

#include "ofxImGui.h"
#include "ofxOpenCv.h"
#include "ofxKinect.h"

 class Fonte {
    public:
        Fonte();

         ofFbo fboFonte;

         virtual void setup();
         virtual void update();
         virtual void drawControls();
         ofFbo getFbo();
};

#endif
