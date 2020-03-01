#ifndef WARLOCKSTATE_H
#define WARLOCKSTATE_H
#include "MagicState.h"
#include "../units/Demon.h"
#include <set>

class WarlockState : public MagicState {
    protected:
            std::set<Demon*>* demonArmy;
        
    public:
        WarlockState();
        virtual ~WarlockState();
        
        virtual void addDemon();
        virtual void summon();
        
        virtual void getDemonArmy();
};

#endif // WARLOCKSTATE_H
