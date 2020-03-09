#include "RogueState.h"
#include "../config.h"

// RogueState::RogueState() : State() {
//     this->name = "ROGUE";
//     this->hitPoints = (int) HP::ROGUE;
//     this->maxHitPoints = (int) HP::ROGUE;
//     this->damage = (int) DMG::ROGUE;
//     std::cout << "RogueState constructor!" << std::endl;
// }

RogueState::RogueState(const std::string& name, int maxHP, int dmg, bool undeadStatus)
            : State(name, maxHP, dmg, undeadStatus) {
    std::cout << "RogueState condtructor!  - 032020" << std::endl;
}

RogueState::~RogueState() {
    // std::cout << "RogueState destructor!" << std::endl;
}
