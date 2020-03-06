#ifndef SOLDIERSTATE_H
#define SOLDIERSTATE_H
#include "State.h"
#include "../config.h"

class SoldierState : public State {
    public:
        
        
        SoldierState(const std::string& name = "SOLDIER",
                    int maxHP = (int)HP::SOLDIER,
                    int dmg = (int)DMG::SOLDIER,
                    bool undeadStatus = false);
        
        // SoldierState();
        
        virtual ~SoldierState();
};

#endif // SOLDIERSTATE_H
