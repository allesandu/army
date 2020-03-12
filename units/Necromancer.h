#ifndef NECROMANCER_H
#define NECROMANCER_H
#include "Unit.h"
#include "SpellCaster.h"
#include "../states/NecromancerState.h"
#include "../attacks/NecromancerAttack.h"

class Necromancer : public SpellCaster {
    public:
        Necromancer(NecromancerState* state = new NecromancerState(), NecromancerAttack* attack = new NecromancerAttack());
        
        virtual ~Necromancer();
        
//         virtual void attack(Unit* enemy);
};

#endif // NECROMANCER_H
