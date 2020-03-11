#include "Necromancer.h"


// Necromancer::Necromancer() : Unit() {
//     this->uState = new NecromancerState();
//     this->uAttack = new MagicAttack();
//     // std::cout << "Necromancer constructor!" << std::endl;
// }

Necromancer::Necromancer(NecromancerState* state, NecromancerAttack* attack) : SpellCaster(state, attack) {
    std::cout << "Necromancer constructor! - with ANOTHER State|BaseAttack" << std::endl;
}

Necromancer::~Necromancer() {
    std::cout << "Necromancer destructor!" << std::endl;
}

// void Necromancer::attack(Unit* enemy) {
//     std::cout << "Necromancer does attachment with attack Ggg..! (class <Necromancer>)" << std::endl;
//     enemy->attachObserver(this);
//     this->uAttack->attack(this, enemy);
// }
