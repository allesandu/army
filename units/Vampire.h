#ifndef VAMPIRE_H
#define VAMPIRE_H
#include "Unit.h"
#include "../attacks/VampireAttack.h"
#include "../states/VampireState.h"
#include "../config.h"

class Vampire : public Unit {
    public:
        Vampire();
        
        virtual ~Vampire();
        
};

#endif // VAMPIRE_H
