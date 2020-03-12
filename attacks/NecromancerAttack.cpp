#include "NecromancerAttack.h"

NecromancerAttack::NecromancerAttack() : MagicAttack() {

}

NecromancerAttack::~NecromancerAttack() {

}

void NecromancerAttack::attack(Unit* fighter, Unit* enemy) {
    enemy->attachObserver(fighter);

    enemy->takeDamage(fighter->getDamage());
    counterAttack(fighter, enemy);
}
