#include "WolfState.h"
#include "WerewolfState.h"

// WolfState::WolfState() : State() {
//     this->name = "WOLF";
//     this->hitPoints = (int) HP::WOLF;
//     this->maxHitPoints = (int) HP::WOLF;
//     this->damage = (int) DMG::WOLF;
//     // std::cout << "WolfState constructor!" << std::endl;
// }

WolfState::WolfState(const std::string& name, int maxHP, int dmg, bool undeadStatus)
            : State(name, maxHP, dmg, undeadStatus) {
    std::cout << "WolfState condtructor!  - 032020" << std::endl;
}

WolfState::~WolfState() {
    // std::cout << "WolfState destructor!" << std::endl;
}

// void WolfState::transform() {// doesnt work with the same method TRANSFORM in bouth state
//     // this->setState(new WerewolfState());
//     this->name = "BALABAsssss";
//     std::cout << "0000 - STATE has chang_____ed (class <WolfState>)" << std::endl;
// }
