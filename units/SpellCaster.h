#ifndef SPELLCASTER_H
#define SPELLCASTER_H
#include "Unit.h"
#include "../states/MagicState.h"
#include "../attacks/MagicAttack.h"

class SpellCaster : public Unit {
    public:
        SpellCaster(MagicState* magState, MagicAttack* magAttack = new MagicAttack());
        virtual ~SpellCaster();
};

#endif // SPELLCASTER_H
