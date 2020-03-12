#include "VampireState.h"
#include "../config.h"

VampireState::VampireState(const std::string& name, int maxHP, int dmg, bool undeadStatus)
            : State(name, maxHP, dmg, undeadStatus) {
}

VampireState::~VampireState() {

}
