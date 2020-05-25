#ifndef ROGUE_H
#define ROGUE_H
#include "Unit.h"
#include "../attacks/RogueAttack.h"
#include "../states/RogueState.h"
#include "../abilities/Ability.h"

class Rogue : public Unit {
    public:
        Rogue();
        
        virtual ~Rogue();
};

#endif // ROGUE_H
