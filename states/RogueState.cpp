#include "RogueState.h"

RogueState::RogueState(const std::string& name, int maxHP, int dmg, bool undeadStatus)
            : State(name, maxHP, dmg, undeadStatus) {
}

RogueState::~RogueState() {

}
