#include "Werewolf.h"
#include "../attacks/WerewolfAttack.h"
#include "../states/WerewolfState.h"

Werewolf::Werewolf() : Unit() {
    this->uState = new WerewolfState();
    this->uAttack = new WerewolfAttack();
    // std::cout << "Werewolf constructor" << std::endl;
}

Werewolf::~Werewolf() {
    // std::cout << "Werewolf destructor" << std::endl;
}
