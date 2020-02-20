#include "WerewolfState.h"
#include "WolfState.h"

WerewolfState::WerewolfState() : State() {
    this->name = "WEREWOLF";
    this->hitPoints = (int) HP::WEREWOLF;
    this->maxHitPoints = (int) HP::WEREWOLF;
    this->damage = (int) DMG::WEREWOLF;
    // std::cout << "WerewolfState constructor!" << std::endl;
}

WerewolfState::~WerewolfState() {
    // std::cout << "WerewolfState destructor!" << std::endl;
}

void WerewolfState::transform() {
    if ( this->getName() == "WOLF" ) {
        this->setState(new WerewolfState());
    } else {
        this->setState(new WolfState());
    }
    std::cout << "0000 - STATE has changed (class <WerewolfState>)" << std::endl;
}
