#ifndef WARLOCK_H
#define WARLOCK_H
#include "SpellCaster.h"
#include "../states/WarlockState.h"

class Warlock : public SpellCaster {
    public:
        Warlock(WarlockState* state = new WarlockState());
        
        virtual ~Warlock();
};

#endif // WARLOCK_H
