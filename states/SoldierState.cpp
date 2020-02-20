#include "SoldierState.h"
#include "../config.h"

SoldierState::SoldierState() : State() {
    this->name = "SOLDIER";
    this->hitPoints = (int) HP::SOLDIER;
    this->maxHitPoints = (int) HP::SOLDIER;
    this->damage = (int) DMG::SOLDIER;
    // std::cout << "SoldierState condtructor!" << std::endl;
}

SoldierState::~SoldierState() {
    // std::cout << "SoldierState destructor" << std::endl;
}
