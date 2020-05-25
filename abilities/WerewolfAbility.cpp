#include "WerewolfAbility.h"

WerewolfAbility::WerewolfAbility() : Ability() {}

WerewolfAbility::~WerewolfAbility() {}

void WerewolfAbility::action(Unit* target) {
    this->bite(target);
    std::cout << "Transformation to Werewolf done <WerewolfAbility class>" << std::endl;
}

void WerewolfAbility::bite(Unit* target) {
    if ( target->getName() != "VAMPIRE" ) {
        target->setState(new WerewolfState());
        target->setAttack(new WerewolfAttack());
        target->setAbility(new WerewolfAbility());
    }
}
