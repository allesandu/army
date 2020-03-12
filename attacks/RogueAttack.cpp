#include "RogueAttack.h"

RogueAttack::RogueAttack() : BaseAttack() {

}

RogueAttack::~RogueAttack() {

}

void RogueAttack::attack(Unit* fighter, Unit* enemy) {
    enemy->takeDamage(fighter->getDamage());
}