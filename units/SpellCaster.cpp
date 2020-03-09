#include "SpellCaster.h"


// SpellCaster::SpellCaster() : Unit() {
//     this->uState = new MagicState();
//     this->uAttack = new MagicAttack();
//     this->spBook = new SpellBook();
//     // std::cout << "SpellCaster constructor!" << std::endl;
// }

SpellCaster::SpellCaster(MagicState* magState, MagicAttack* magAttack)
         : Unit(magState, magAttack) {
    std::cout << "SpellCaster constructor! - with ANOTHER State|BaseAttack " << std::endl;
}

SpellCaster::~SpellCaster() {
    // delete this->spBook;
    // std::cout << "SpellCaster destructor!" << std::endl;
}

// SpellBook* SpellCaster::getBook() {
//     return this->spBook;
// }

// int SpellCaster::getSpellCost(int spellID) const {
//     return this->spBook->getSpellCost(spellID);
// }
