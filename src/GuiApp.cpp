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

    // Printa os controles de cada brisa indvidualmente
    ImGui::SetNextWindowSize(ofVec2f(500, 200), ImGuiSetCond_FirstUseEver);
    for( int i = brisas.size()-1; i >= 0; i-- ) {
        string nomeBrisa = "Brisa " + to_string(i + 1);
        ImGui::Begin(nomeBrisa.c_str());
        drawBrisaControls(i);
        ImGui::End();
    }
    gui.end();
}

void GuiApp::drawBrisaControls(int i) {
    // unico btn que aparece no começo é o de add fonte pra caso a brisa n tenha fonte
    if (!brisas[i]->hasFonte) {
        if (ImGui::Button("Adicionar Fonte Kinect")) { 
            FonteKinect *fonteKinect = new FonteKinect(&kinectGlobal);
            brisas[i]->setup(fonteKinect);
        }
        ImGui::SameLine();
        if (ImGui::Button("Adicionar Fonte Camera")) { 
            FonteCamera *fonteCamera = new FonteCamera();
            brisas[i]->setup(fonteCamera);
        }
        ImGui::SameLine();
        if (ImGui::Button("Adicionar Fonte Teste")) { 
            FonteTeste *fonteTeste = new FonteTeste();
            brisas[i]->setup(fonteTeste);
        }
        ImGui::SameLine();
        if (ImGui::Button("Adicionar Fonte Video")) { 
            FonteVideo *fonteVideo = new FonteVideo();
            brisas[i]->setup(fonteVideo);
        }
    }
    // se ja tiver fonte aparece os botoes de add efeito
    if (brisas[i]->hasFonte) {
        if (ImGui::Button("Adicionar Efeito Contorno")) { 
            EfeitoContorno *efeitoContorno = new EfeitoContorno(2);
            brisas[i]->addEfeito(efeitoContorno);
        }
        if (ImGui::Button("Adicionar Efeito Blur")) { 
            EfeitoBlur *efeitoBlur = new EfeitoBlur();
            brisas[i]->addEfeito(efeitoBlur);
        }
        if (ImGui::Button("Adicionar Efeito Rastro")) { 
            EfeitoRastro *efeitoRastro = new EfeitoRastro();
            brisas[i]->addEfeito(efeitoRastro);
        }
        if (ImGui::Button("Adicionar Efeito Brilho/Contraste")) { 
            EfeitoBrilhoContraste *efeitoBrilhoContraste = new EfeitoBrilhoContraste();
            brisas[i]->addEfeito(efeitoBrilhoContraste);
        }
    }
    for( int iEfeito = 0; iEfeito < brisas[i]->efeitos.size(); iEfeito++) {
        brisas[i]->efeitos[iEfeito]->drawControls();ImGui::SameLine();
        if (ImGui::Button("Remover efeito")) {
            brisas[i]->efeitos.erase(brisas[i]->efeitos.begin()+iEfeito);
        }
    }

    if (ImGui::Button("Excluir Brisa")) {
        brisas.erase(brisas.begin()+i);
    }
}



void GuiApp::mousePressed(int x, int y, int iButton) {
}
