#include "Warlock.h"

Warlock::Warlock(WarlockState* state) : SpellCaster(state) {
    // this->uState = new WarlockState();
    // this->uAttack = new MagicAttack();
    std::cout << "Warlock constructor! - with ANOTHER State|BaseAttack " << std::endl;
}

Warlock::~Warlock() {};
