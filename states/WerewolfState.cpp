#include "WerewolfState.h"

WerewolfState::WerewolfState(const std::string& name, int maxHP, int dmg, bool undeadStatus)
            : State(name, maxHP, dmg, undeadStatus) {
}

WerewolfState::~WerewolfState() {
}

// void WerewolfState::transform() { // remove
//     if ( this->getName() == "WOLF" ) {
//         this->setState(new WerewolfState());
//     } else {
//         this->setState(new WolfState());
//     }
// }
