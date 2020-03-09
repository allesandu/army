#ifndef DEMONSTATE_H
#define DEMONSTATE_H
#include "SoldierState.h"
#include "../config.h"

class DemonState : public SoldierState {
    public:
        DemonState(const std::string& name = "DEMON",
                    int maxHP = (int)HP::DEMON,
                    int dmg = (int)DMG::DEMON,
                    bool undeadStatus = false);
        
       virtual ~DemonState();
};

#endif // DEMONSTATE_H
