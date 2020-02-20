#include "NecromancerState.h"

NecromancerState::NecromancerState() : MagicState() {
    this->name = "NECROMANCER";
    this->hitPoints = (int)HP::NECROMANCER;
    this->maxHitPoints = (int)HP::NECROMANCER;
    this->damage = (int)DMG::NECROMANCER;
    this->magicPower = (int)MAGIC::NECROMANCER;
    // std::cout << "NecromancerState constructor!" << std::endl;
}

NecromancerState::~NecromancerState() {
    // std::cout << "NecromancerState destructor!" << std::endl;
}
