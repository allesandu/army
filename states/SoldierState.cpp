#include "SoldierState.h"

// SoldierState::SoldierState() : State() {
//     this->name = "SOLDIER";
//     this->hitPoints = (int) HP::SOLDIER;
//     this->maxHitPoints = (int) HP::SOLDIER;
//     this->damage = (int) DMG::SOLDIER;
//     std::cout << "SoldierState condtructor!" << std::endl;
// }

SoldierState::SoldierState(const std::string& name, int maxHP, int dmg, bool undeadStatus)
            : State(name, maxHP, dmg, undeadStatus) {
    std::cout << "SoldierState condtructor!  - 032020" << std::endl;
}

// SoldierState::SoldierState() {
//     SoldierState("SOLDIER", (int)HP::SOLDIER, (int)DMG::SOLDIER, false);
//     std::cout << "SoldierState condtructor!  - NEWEST  032020" << std::endl;
// }

SoldierState::~SoldierState() {
    // std::cout << "SoldierState destructor" << std::endl;
}
