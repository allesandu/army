#include "RogueAttack.h"

RogueAttack::RogueAttack() : BaseAttack() {
    std::cout << "RogueAttack constructor!" << std::endl;
}

RogueAttack::~RogueAttack() {
    // std::cout << "RogueAttack destructor!" << std::endl;
}

void RogueAttack::attack(Unit* fighter, Unit* enemy) {
    std::cout << "()() - RogueAttack - ()()" << std::endl;
    enemy->takeDamage(fighter->getDamage());
}