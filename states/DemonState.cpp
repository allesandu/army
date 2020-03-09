#include "DemonState.h"

DemonState::DemonState(const std::string& name, int maxHP, int dmg, bool undeadStatus)
            : SoldierState(name, maxHP, dmg, undeadStatus) {
    std::cout << "DemonState condtructor!  - 032020" << std::endl;
}

DemonState::~DemonState() {};
