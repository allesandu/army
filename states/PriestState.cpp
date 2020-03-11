#include "PriestState.h"

PriestState::PriestState(const std::string& name, int maxHp, int dmg, bool undeadStatus, int mPower, int hInd, int bInd)
        : MagicState(name, maxHp, dmg, undeadStatus, mPower, hInd, bInd) {
    // std::cout << "PriestState constructor!  - 032020" << std::endl;
}

PriestState::~PriestState() {};
