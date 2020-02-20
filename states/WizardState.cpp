#include "WizardState.h"

WizardState::WizardState() : MagicState() {
    this->name = "WIZARD";
    this->hitPoints = (int) HP::WIZARD;
    this->maxHitPoints = (int) HP::WIZARD;
    this->damage = (int) DMG::WIZARD;
    this->magicPower = (int) MAGIC::WIZARD;
    this->healIndex = 50;
    // std::cout << "WizardState constructor!" << std::endl;
}

WizardState::~WizardState() {
    std::cout << "WizardState desrtuctor!" << std::endl;
}
