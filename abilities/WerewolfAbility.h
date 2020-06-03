#ifndef WEREWOLFABILITY_H
#define WEREWOLFABILITY_H
#include "../units/Unit.h"
#include "../states/WerewolfState.h"
#include "../states/WolfState.h"
#include "../attacks/WerewolfAttack.h"
#include "Ability.h"
#include "../Exceptions.h"

class Unit;

class WerewolfAbility : public Ability {
    public:
        WerewolfAbility();
        virtual ~WerewolfAbility();
        
        void bite(Unit* target);
        
        void transform(Unit* werewolf);
};

#endif // WEREWOLFABILITY_H
