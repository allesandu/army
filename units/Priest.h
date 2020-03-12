#ifndef PRIEST_H
#define PRIEST_H
#include "SpellCaster.h"
#include "../states/PriestState.h"
#include "../attacks/PriestAttack.h"

class Priest : public SpellCaster {
    public:
        Priest(PriestState* state = new PriestState(), PriestAttack* attack = new PriestAttack());
        
        virtual ~Priest();
};

#endif // PRIEST_H
