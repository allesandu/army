#ifndef VAMPIREABILITY_H
#define VAMPIREABILITY_H
#include "../units/Unit.h"
#include "../states/VampireState.h"
#include "../attacks/VampireAttack.h"
#include "Ability.h"
#include "../Exceptions.h"

class Unit;

class VampireAbility : public Ability {
    public:
        VampireAbility();
        virtual ~VampireAbility();
        
        virtual void action(Unit* target);
        void bite(Unit* target);
};

#endif // VAMPIREABILITY_H