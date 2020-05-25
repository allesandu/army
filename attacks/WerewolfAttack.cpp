#include "WerewolfAttack.h"
#include "../states/WerewolfState.h"

WerewolfAttack::WerewolfAttack() : BaseAttack() {

}

WerewolfAttack::~WerewolfAttack() {

}

// void WerewolfAttack::bite(Unit* target) {
//     if ( target->getName() != "VAMPIRE" ) {
//         target->setState(new WerewolfState());
//         target->setAttack(new WerewolfAttack());
//     }
// }
