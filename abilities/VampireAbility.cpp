#include "VampireAbility.h"

VampireAbility::VampireAbility() : Ability() {}

VampireAbility::~VampireAbility() {}

void VampireAbility::action(Unit* target) {
    this->bite(target);
    
    std::cout << "Transformation to Vampire done <VampireAbility class>" << std::endl;
}

void VampireAbility::bite(Unit* target) {
    if ( target->getName() != "WEREWOLF" ) {
        if ( target->getName() != "WOLF" ) {
            target->setState(new VampireState());
            target->setAttack(new VampireAttack());
            target->setAbility(new VampireAbility());
        }
    }
}
