#ifndef EFEITO_H__
#define EFEITO_H__

#include "ofxImGui.h"
#include "ofxOpenCv.h"
#include "ofxKinect.h"

class Efeito {
    public:
        Efeito();

        int id;

        ofPixels pixelsEfeito;
        ofxCvFloatImage floatImage;   
        ofxCvGrayscaleImage grayImage;   
        ofxCvColorImage colorImage;   

        virtual void aplicaEfeito( ofFbo *fboBrisa, ofPixels *pixelsBrisa);

        virtual void drawControls();
};

#endif
