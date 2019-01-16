#include "GuiApp.h"
#include <vector>
using namespace std;

float t0, t1;

void GuiApp::setup(){
    gui.setup();

    ImGui::GetIO().MouseDrawCursor = false;
}

void GuiApp::update(){
    // Quanto tempo passou desde o ultimo update?
    // Resp = t1 - t0
    t0 = t1;
    t1 = ofGetElapsedTimef();
    float dt = t1 - t0;
}

void GuiApp::draw() {
    ofBackground(100, 100, 100);

    gui.begin();

    ImGui::SetNextWindowSize(ofVec2f(20, 10), ImGuiSetCond_FirstUseEver);
    ImGui::Begin("Controles Gerais");

    ImGui::Text("%.1f FPS (%.3f ms/frame) ", ImGui::GetIO().Framerate, 1000.0f / ImGui::GetIO().Framerate);


    ImGui::End();

    gui.end();
}


void GuiApp::mousePressed(int x, int y, int iButton) {
}
