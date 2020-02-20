#include "WarlockState.h"

WarlockState::WarlockState() : MagicState() {
    this->name = "WARLOCK";
    this->hitPoints = (int)HP::WARLOCK;
    this->maxHitPoints = (int)HP::WARLOCK;
    this->damage = (int)DMG::WARLOCK;
    this->magicPower = (int)MAGIC::WARLOCK;
    std::cout << "WarlockState constructor!" << std::endl;
}

WarlockState::~WarlockState() {};
