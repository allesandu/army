#include "BaseAttack.h"

BaseAttack::BaseAttack() {

}

BaseAttack::~BaseAttack() {

}

void BaseAttack::attack(Unit* fighter, Unit* enemy) {
    enemy->takeDamage(fighter->getDamage());
    counterAttack(fighter, enemy);
}

void BaseAttack::counterAttack(Unit* fighter, Unit* enemy) {

    int attackReduce = 50;
    
    fighter->takeDamage(enemy->getDamage()*attackReduce/100);
}

void BaseAttack::magicAttack(Unit* caster, int spellID, Unit* target) {

}
