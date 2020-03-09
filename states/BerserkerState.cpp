#include "BerserkerState.h"
#include "../config.h"

// BerserkerState::BerserkerState() : State() {
//     this->name = "BERSERKER";
//     this->hitPoints = (int) HP::BERSERKER;
//     this->maxHitPoints = (int) HP::BERSERKER;
//     this->damage = (int) DMG::BERSERKER;
//     // std::cout << "BerserkerState constructor!" << std::endl;
// }

BerserkerState::BerserkerState(const std::string& name, int maxHP, int dmg, bool undeadStatus)
            : State(name, maxHP, dmg, undeadStatus) {
    std::cout << "BerserkerState condtructor!  - 032020" << std::endl;
}

BerserkerState::~BerserkerState() {
    // std::cout << "BerserkerState destructor!" << std::endl;
}
