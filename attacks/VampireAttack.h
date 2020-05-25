#ifndef VAMPIREATTACK_H
#define VAMPIREATTACK_H
#include "BaseAttack.h"
#include "../states/VampireState.h"
#include "../config.h"

class VampireAttack : public BaseAttack {
    public:
        VampireAttack();
        ~VampireAttack();
        
        virtual void attack(Unit* fighter, Unit* enemy);
        virtual void counterAttack(Unit* fighter, Unit* enemy);
        // virtual void bite(Unit* target);// remove
};

#endif // VAMPIREATTACK_H
