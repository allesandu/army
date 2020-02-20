#include "Wizard.h"
#include "../attacks/MagicAttack.h"
#include "../states/WizardState.h"

class WizardState;

Wizard::Wizard() : Unit() {
    this->uState = new WizardState();
    this->uAttack = new MagicAttack();
    // std::cout << "Wizard constructor" << std::endl;
}

Wizard::~Wizard() {
    std::cout << "Wizard destructor!" << std::endl;
}
