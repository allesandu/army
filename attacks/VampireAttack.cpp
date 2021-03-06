#include "VampireAttack.h"


VampireAttack::VampireAttack() : BaseAttack() {

}

VampireAttack::~VampireAttack() {

}

void VampireAttack::attack(Unit* fighter, Unit* enemy) {
    int helpHP = 10;
    
    fighter->takeHitPoints(enemy->getHitPoints()*helpHP/100);
    enemy->takeDamage(fighter->getDamage());
    counterAttack(fighter, enemy); // CHECK
}

void VampireAttack::counterAttack(Unit* fighter, Unit* enemy) {
    int attackReducer = 50;
    int hpIndex = 10;
    
    fighter->takeHitPoints(enemy->getHitPoints()*hpIndex/100);
    fighter->takeDamage(enemy->getDamage()*attackReducer/100);
}
