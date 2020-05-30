#include "WerewolfState.h"

WerewolfState::WerewolfState(const std::string& name, int maxHP, int dmg, bool undeadStatus)
            : State(name, maxHP, dmg, undeadStatus) {
}

WerewolfState::~WerewolfState() {
}
