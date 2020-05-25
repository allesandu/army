#ifndef WEREWOLFABILITY_H
#define WEREWOLFABILITY_H
#include "../units/Unit.h"
#include "../states/WerewolfState.h"
#include "../attacks/WerewolfAttack.h"
#include "Ability.h"
#include "../Exceptions.h"

class Unit;

class WerewolfAbility : public Ability {
    public:
        WerewolfAbility();
        virtual ~WerewolfAbility();
        
        virtual void action(Unit* target);
        void bite(Unit* target);
};

#endif // WEREWOLFABILITY_H
