#include "DemonState.h"

DemonState::DemonState(): State() {
    this->name = "DEMON";
    this->hitPoints = (int) HP::DEMON;
    this->maxHitPoints = (int) HP::DEMON;
    this->damage = (int) DMG::DEMON;
}

DemonState::~DemonState() {};
