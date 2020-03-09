#include "Wizard.h"


// class WizardState;

// Wizard::Wizard() : Unit() {
//     this->uState = new WizardState();
//     this->uAttack = new MagicAttack();
//     // std::cout << "Wizard constructor" << std::endl;
// }

Wizard::Wizard(WizardState* state) : SpellCaster(state) {
    std::cout << "Wizard constructor! - with ANOTHER State|BaseAttack" << std::endl;
}

Wizard::~Wizard() {
    std::cout << "Wizard destructor!" << std::endl;
}
