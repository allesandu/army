#include "Priest.h"
#include "../states/PriestState.h"
#include "../attacks/MagicAttack.h"

Priest::Priest() : SpellCaster() {
    this->uState = new PriestState();
    this->uAttack = new MagicAttack();
    std::cout << "Priest constructor!" << std::endl;
}

Priest::~Priest() {};
