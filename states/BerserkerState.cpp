#include "BerserkerState.h"

BerserkerState::BerserkerState(const std::string& name, int maxHP, int dmg, bool undeadStatus)
            : State(name, maxHP, dmg, undeadStatus) {

}

BerserkerState::~BerserkerState() {

}
