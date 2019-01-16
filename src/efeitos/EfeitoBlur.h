#include "../core/Efeito.h"

class EfeitoBlur : public Efeito {
    public:
        EfeitoBlur();

        void aplicaEfeito( ofFbo *fboBrisa);
};
