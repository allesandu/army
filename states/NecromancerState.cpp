#include "NecromancerState.h"

NecromancerState::NecromancerState(const std::string& name, int maxHp, int dmg, bool undeadStatus, int mPower, int hInd, int bInd)
        : MagicState(name, maxHp, dmg, undeadStatus, mPower, hInd, bInd) {
    // std::cout << "NecromancerState constructor!  - 032020" << std::endl;
}

NecromancerState::~NecromancerState() {
    // std::cout << "NecromancerState destructor!" << std::endl;
}
