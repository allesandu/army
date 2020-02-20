#include "HealerState.h"

HealerState::HealerState() : MagicState() {
    this->name = "HEALER";
    this->hitPoints = (int)HP::HEALER;
    this->maxHitPoints = (int)HP::HEALER;
    this->damage = (int)DMG::HEALER;
    this->magicPower = (int)MAGIC::HEALER;
    this->battleIndex = 50;
    // std::cout << "HealerState constructor!" << std::endl;
}

HealerState::~HealerState() {};
