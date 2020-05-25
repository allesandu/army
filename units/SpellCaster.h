#ifndef SPELLCASTER_H
#define SPELLCASTER_H
#include "Unit.h"
#include "../states/MagicState.h"
#include "../attacks/MagicAttack.h"
#include "../abilities/Ability.h"

class SpellCaster : public Unit {
    public:
        SpellCaster(MagicState* magState, MagicAttack* magAttack = new MagicAttack(),
                    Ability* ability = new Ability());
        
        virtual ~SpellCaster();
};

#endif // SPELLCASTER_H
