#ifndef WEREWOLF_H
#define WEREWOLF_H
#include "Unit.h"
#include "../attacks/WerewolfAttack.h"
#include "../states/WerewolfState.h"
#include "../abilities/WerewolfAbility.h"

class Werewolf : public Unit {
    public:
        Werewolf();
        
        virtual ~Werewolf();
};

#endif // WEREWOLF_H
