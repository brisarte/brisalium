#include "Fonte.h"

Fonte::Fonte() {
    fboFonte.allocate(1024,768);
}
    
void Fonte::setup() {
}
    
void Fonte::update() {
}
    
void Fonte::drawControls() {
}

ofFbo Fonte::getFbo() {
    return fboFonte;
}
