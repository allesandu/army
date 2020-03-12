#ifndef NECROMANCERATTACK_H
#define NECROMANCERATTACK_H
#include "MagicAttack.h"

class NecromancerAttack : public MagicAttack {
    public:
        NecromancerAttack();
        virtual ~NecromancerAttack();
        
        virtual void attack(Unit* fighter, Unit* enemy);
};

#endif // NECROMANCERATTACK_H