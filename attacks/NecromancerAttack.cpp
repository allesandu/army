#include "NecromancerAttack.h"

NecromancerAttack::NecromancerAttack() : MagicAttack() {
    std::cout << "RogueAttack constructor!" << std::endl;
}

NecromancerAttack::~NecromancerAttack() {
    // std::cout << "RogueAttack destructor!" << std::endl;
}

void NecromancerAttack::attack(Unit* fighter, Unit* enemy) {
    std::cout << "()() - NecromancerAttack - ()()" << std::endl;
    std::cout << "Necromancer does attachment with attack Ggg..! (class <Necromancer>)" << std::endl;
    enemy->attachObserver(fighter);

    enemy->takeDamage(fighter->getDamage());
    counterAttack(fighter, enemy);
}
