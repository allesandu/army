#include "HealerState.h"

HealerState::HealerState(const std::string& name, int maxHp, int dmg, bool undeadStatus, int mPower, int hInd, int bInd)
        : MagicState(name, maxHp, dmg, undeadStatus, mPower, hInd, bInd) {
    // std::cout << "HealerState constructor!  - 032020" << std::endl;
}

HealerState::~HealerState() {};
