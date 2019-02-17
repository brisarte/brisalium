#include "../core/Fonte.h"

class FonteVideo : public Fonte {
    public:
        FonteVideo();

        ofVideoPlayer video;
        float posVideo;
        string caminhoVideo;
        void loadVideo(string videoPath);

        void setup();
        void update();
        void drawControls();
};
