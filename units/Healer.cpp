#include "Healer.h"
#include "../states/HealerState.h"
#include "../attacks/MagicAttack.h"

Healer::Healer() : SpellCaster() {
    this->uState = new HealerState();
    this->uAttack = new MagicAttack();
    // std::cout << "Healer constructor!" << std::endl;
}

Healer::~Healer() {};
