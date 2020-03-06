#ifndef SOLDIER_H
#define SOLDIER_H
#include "Unit.h"
#include <iostream>
#include "Soldier.h"
#include "../states/SoldierState.h"
#include "../attacks/BaseAttack.h"
#include "../config.h"

class Soldier : public Unit {
    public:
        
        // Soldier(SoldierState* soldState = new SoldierState(), BaseAttack* atack = new BaseAttack());
        Soldier(const std::string& name = "SOLDIER", int maxHP = (int)HP::SOLDIER, int dmg = (int)DMG::SOLDIER);
        
        virtual ~Soldier();
};

#endif // SOLDIER_H
