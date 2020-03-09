#include "Healer.h"


// Healer::Healer() : SpellCaster() {
//     this->uState = new HealerState();
//     this->uAttack = new MagicAttack();
//     // std::cout << "Healer constructor!" << std::endl;
// }

Healer::Healer(HealerState* state) : SpellCaster(state) {
    // this->uState = new HealerState();
    // this->uAttack = new MagicAttack();
    std::cout << "Healer constructor! - with ANOTHER State|BaseAttack " << std::endl;
}

Healer::~Healer() {};
