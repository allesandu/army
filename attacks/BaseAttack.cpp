#include "BaseAttack.h"

BaseAttack::BaseAttack() {
    std::cout << "BaseAttack constructor! - 032020" << std::endl;
}

BaseAttack::~BaseAttack() {
    // std::cout << "BaseAttack destructor!" << std::endl;
}

void BaseAttack::attack(Unit* fighter, Unit* enemy) {
    std::cout << "()() - BaseAttack - ()()" << std::endl;
    enemy->takeDamage(fighter->getDamage());
    counterAttack(fighter, enemy);
}

void BaseAttack::counterAttack(Unit* fighter, Unit* enemy) {
    std::cout << "()() - BaseCounterAttack - ()()" << std::endl;
    int attackReduce = 50;
    
    fighter->takeDamage(enemy->getDamage()*attackReduce/100);
}

void BaseAttack::magicAttack(Unit* caster, int spellID, Unit* target) {
    std::cout << "0000 - no magicAttack ability (class <BaseAttack>)" << std::endl;
}

void BaseAttack::bite(Unit* target) {
    std:: cout << "0000 - no bite ability (class <BaseAttack>)" << std::endl;
}
