#include "WolfState.h"
#include "WerewolfState.h"

WolfState::WolfState(const std::string& name, int maxHP, int dmg, bool undeadStatus)
            : State(name, maxHP, dmg, undeadStatus) {
}

WolfState::~WolfState() {

}
