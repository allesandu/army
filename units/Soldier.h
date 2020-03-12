#ifndef SOLDIER_H
#define SOLDIER_H
#include "Unit.h"
#include <iostream>
#include "Soldier.h"
#include "../states/SoldierState.h"
#include "../attacks/BaseAttack.h"

class Soldier : public Unit {
    public:
        Soldier();
        
        virtual ~Soldier();
};

#endif // SOLDIER_H
