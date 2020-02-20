#include "WerewolfAttack.h"
#include "../states/WerewolfState.h"

WerewolfAttack::WerewolfAttack() : BaseAttack() {
    std::cout << "WerewolfAttack constructor!" << std::endl;
}

WerewolfAttack::~WerewolfAttack() {
    std::cout << "WerewolfAttack destructor!" << std::endl;
}

void WerewolfAttack::bite(Unit* target) {
    if ( target->getName() != "VAMPIRE" ) {
        target->setState(new WerewolfState());
        target->setAttack(new WerewolfAttack());
        std::cout << "0000 - Werewolf has made a bite!" << std::endl;
    }
}
