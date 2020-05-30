#include "WerewolfAbility.h"

WerewolfAbility::WerewolfAbility() : Ability() {}

WerewolfAbility::~WerewolfAbility() {}

void WerewolfAbility::action(Unit* target) {
    this->bite(target);
    // std::cout << "Transformation to Werewolf after BITE done <WerewolfAbility class>" << std::endl; // remove
}

void WerewolfAbility::bite(Unit* target) {
    if ( target->getName() != "VAMPIRE" ) {
        target->setState(new WerewolfState());
        target->setAttack(new WerewolfAttack());
        target->setAbility(new WerewolfAbility());
    }
}

void WerewolfAbility::transform(Unit* werewolf) {
    if ( werewolf->getName() == "WOLF" ) {
        werewolf->setState(new WerewolfState());
    } else {
        werewolf->setState(new WolfState());
    }
    
    // std::cout << "Selftranformation Werewolf <--> Wolf done <WerewolfAbility class>" << std::endl; // remove
}
