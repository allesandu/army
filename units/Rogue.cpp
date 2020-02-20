#include "Rogue.h"
#include "../attacks/RogueAttack.h"
#include "../states/RogueState.h"

Rogue::Rogue() 
     : Unit() {
        this->uState = new RogueState();
        this->uAttack = new RogueAttack();
        // std::cout << "Rogue constructor!" << std::endl;
     }
     
Rogue::~Rogue() {
    // std::cout << "Rogue destructor!" << std::endl;
}
