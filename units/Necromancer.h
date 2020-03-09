#ifndef NECROMANCER_H
#define NECROMANCER_H
#include "Unit.h"
#include "SpellCaster.h"
#include "../states/NecromancerState.h"

class Necromancer : public SpellCaster {
    public:
        Necromancer(NecromancerState* state = new NecromancerState());
        
        virtual ~Necromancer();
        
        virtual void attack(Unit* enemy);
};

#endif // NECROMANCER_H
