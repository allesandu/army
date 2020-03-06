#include "VampireAttack.h"


VampireAttack::VampireAttack() : BaseAttack() {
    // std::cout << "VampireAttack constructor!" << std::endl;
}

VampireAttack::~VampireAttack() {
    // std::cout << "VampireAttack destructor!" << std::endl;
}

void VampireAttack::attack(Unit* fighter, Unit* enemy) {
    if ( fighter->isAlive() ) {
        std::cout << "Vampire Attack!" << std::endl;
        int helpHP = 10;
        
        fighter->takeHitPoints(enemy->getHitPoints()*helpHP/100);
        enemy->takeDamage(fighter->getDamage());
        counterAttack(fighter, enemy); // CHECK
    }
}

void VampireAttack::counterAttack(Unit* fighter, Unit* enemy) {
    if ( enemy->isAlive() ) {
        std::cout << "Vampire counterAttack!" << std::endl;
        int attackReducer = 50;
        int hpIndex = 10;
        
        fighter->takeHitPoints(enemy->getHitPoints()*hpIndex/100);
        fighter->takeDamage(enemy->getDamage()*attackReducer/100);
    }
}

void VampireAttack::bite(Unit* target){
    if ( target->getName() != "WEREWOLF" ) {
        if ( target->getName() != "WOLF" ) {
            target->setState(new VampireState());
            // target->setState(new VampireState("VAMPIRE", (int)HP::VAMPIRE, (int)DMG::VAMPIRE));
            target->setAttack(new VampireAttack());
            std::cout << "0000 - Vampire has made a bite!" << std::endl;
        }
    }
}
