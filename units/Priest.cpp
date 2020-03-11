#include "Priest.h"


// Priest::Priest() : SpellCaster() {
//     this->uState = new PriestState();
//     this->uAttack = new MagicAttack();
//     std::cout << "Priest constructor!" << std::endl;
// }

Priest::Priest(PriestState* state) : SpellCaster(state) {
    this->uAttack = new PriestAttack(); // check is it works !!!
    std::cout << "Priest constructor! - with ANOTHER State|BaseAttack" << std::endl;
}

Priest::~Priest() {};
