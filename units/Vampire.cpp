#include "Vampire.h"
#include "../attacks/VampireAttack.h"
#include "../states/VampireState.h"

Vampire::Vampire() : Unit() {
        this->uState = new VampireState();
        this->uAttack = new VampireAttack();
        // std::cout << "Vampire constructor!" << std::endl;
     }

Vampire::~Vampire() {
    // std::cout << "Vampire destructor!" << std::endl;
}

// void Vampire::bite(Unit* enemy) {//remove after reconsidering
//     std::cout << "BITE from Vampire" << std::endl;
//     enemy->abilityToChange(new VampireState(), new VampireAttack());
// }
