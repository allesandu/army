#include "SoldierState.h"

SoldierState::SoldierState(const std::string& name, int maxHP, int dmg, bool undeadStatus)
            : State(name, maxHP, dmg, undeadStatus) {
}

SoldierState::~SoldierState() {

}
