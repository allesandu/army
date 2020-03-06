#include "VampireState.h"
#include "../config.h"

// VampireState::VampireState() : State() {
//     this->name = "VAMPIRE";
//     this->hitPoints = (int) HP::VAMPIRE;
//     this->maxHitPoints = (int) HP::VAMPIRE;
//     this->damage = (int) DMG::VAMPIRE;
//     this->undead = true;
//     // std::cout << "VampireState constructor!" << std::endl;
// }

VampireState::VampireState(const std::string& name, int maxHP, int dmg, bool undeadStatus)
            : State(name, maxHP, dmg, undeadStatus) {
    std::cout << "VampireState constructor! 032020" << std::endl;
}

VampireState::~VampireState() {
    // std::cout << "VampireState destructor!" << std::endl;
}
