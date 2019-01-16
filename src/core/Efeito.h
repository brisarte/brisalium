#ifndef EFEITO_H__
#define EFEITO_H__

#include "ofxImGui.h"
#include "ofxOpenCv.h"
#include "ofxKinect.h"

class Efeito {
    public:
        Efeito();

        ofPixels pixelsEfeito;
        ofxCvColorImage colorImage;   
        virtual void aplicaEfeito( ofFbo *fboBrisa);
};

#endif
