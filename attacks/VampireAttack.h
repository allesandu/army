#ifndef VAMPIREATTACK_H
#define VAMPIREATTACK_H
#include "BaseAttack.h"

class VampireAttack : public BaseAttack {
    public:
        VampireAttack();
        ~VampireAttack();
        
        virtual void attack(Unit* fighter, Unit* enemy);
        virtual void counterAttack(Unit* fighter, Unit* enemy);
        virtual void bite(Unit* target);
};

#endif // VAMPIREATTACK_H
