#ifndef PRIEST_H
#define PRIEST_H
#include "SpellCaster.h"
#include "../states/PriestState.h"
// #include "../attacks/MagicAttack.h"

class Priest : public SpellCaster {
    public:
        Priest(PriestState* state = new PriestState());
        
        virtual ~Priest();
};

#endif // PRIEST_H
