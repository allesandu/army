#include "PriestState.h"

PriestState::PriestState() : MagicState() {
    this->name = "PRIEST";
    this->hitPoints = (int)HP::PRIEST;
    this->maxHitPoints = (int)HP::PRIEST;
    this->damage = (int)DMG::PRIEST;
    this->magicPower = (int)MAGIC::PRIEST;
    this->battleIndex = 50;
    std::cout << "PriestState constructor!" << std::endl;
}

PriestState::~PriestState() {};
