#include "SpellCaster.h"
#include "../states/MagicState.h"
#include "../attacks/MagicAttack.h"

SpellCaster::SpellCaster() : Unit() {
    this->uState = new MagicState();
    this->uAttack = new MagicAttack();
    this->spBook = new SpellBook();
    // std::cout << "SpellCaster constructor!" << std::endl;
}

SpellCaster::~SpellCaster() {
    delete this->spBook;
    // std::cout << "SpellCaster destructor!" << std::endl;
}

SpellBook* SpellCaster::getBook() {
    return this->spBook;
}

int SpellCaster::getSpellCost(int spellID) const {
    return this->spBook->getSpellCost(spellID);
}
