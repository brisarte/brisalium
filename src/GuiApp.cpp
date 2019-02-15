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
    ofBackground(60, 60, 60);

    gui.begin();

    ImGui::SetNextWindowSize(ofVec2f(20, 10), ImGuiSetCond_FirstUseEver);
    ImGui::Begin("Controles Gerais");

    if (ImGui::Button("Add Brisa")) { brisas.push_back(new Brisa); }
    ImGui::Text("%.1f FPS (%.3f ms/frame) ", ImGui::GetIO().Framerate, 1000.0f / ImGui::GetIO().Framerate);

    ImGui::End();

    ImGui::SetNextWindowSize(ofVec2f(500, 200), ImGuiSetCond_FirstUseEver);
    for( int i = brisas.size()-1; i >= 0; i-- ) {
        string nomeBrisa = "Brisa " + to_string(i + 1);
        ImGui::Begin(nomeBrisa.c_str());
        if (ImGui::Button("Adicionar Fonte")) {  }
        ImGui::End();
    }
    // TODO
    // unico btn que aparece no começo é o de add fonte pra caso a brisa n tenha fonte
    // se ja tiver fonte aparece os botoes de add efeito


    gui.end();
}

void GuiApp::draw
void GuiApp::mousePressed(int x, int y, int iButton) {
}
