#include "WarlockState.h"

WarlockState::WarlockState(const std::string& name, int maxHp, int dmg, bool undeadStatus, int mPower, int hInd, int bInd)
        : MagicState(name, maxHp, dmg, undeadStatus, mPower, hInd, bInd) {
}

WarlockState::~WarlockState() {

};
