#include <iostream>
#include "Unit.h"
#include "Soldier.h"
#include "../states/SoldierState.h"
#include "../attacks/BaseAttack.h"

Soldier::Soldier() : Unit() {
    this->uState = new SoldierState();
    this->uAttack = new BaseAttack();
    // std::cout << "Soldier constuctor!" << std::endl;
}

Soldier::~Soldier() {
    // std::cout << "Soldier Destructor!" << std::endl;
}
