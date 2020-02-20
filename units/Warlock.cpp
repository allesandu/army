#include "Warlock.h"
#include "../states/WarlockState.h"
#include "../attacks/MagicAttack.h"

Warlock::Warlock() : SpellCaster() {
    this->uState = new WarlockState();
    this->uAttack = new MagicAttack();
    std::cout << "Warlock constructor!" << std::endl;
}

Warlock::~Warlock() {};
