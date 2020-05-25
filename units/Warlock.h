#ifndef WARLOCK_H
#define WARLOCK_H
#include "SpellCaster.h"
#include "../states/WarlockState.h"
#include "../attacks/MagicAttack.h"
#include "../abilities/WarlockAbility.h"

class Warlock : public SpellCaster {
    public:
        Warlock(WarlockState* state = new WarlockState(), MagicAttack* magAttack = new MagicAttack(),
                WarlockAbility* ability = new WarlockAbility());
        
        virtual ~Warlock();
};

#endif // WARLOCK_H
