#ifndef HEALER_H
#define HEALER_H
#include "SpellCaster.h"
#include "../states/HealerState.h"
// #include "../attacks/MagicAttack.h"

class Healer : public SpellCaster {
    public:
        Healer(HealerState* state = new HealerState());
        
        virtual ~Healer();
};

#endif // HEALER_H
