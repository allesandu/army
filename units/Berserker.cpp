#include "Berserker.h"
#include "../states/BerserkerState.h"

Berserker::Berserker()
     : Unit() {
        this->uState = new BerserkerState();
        this->uAttack = new BaseAttack();
        // std::cout << "Berserker constructor!" << std::endl;
     }
     
Berserker::~Berserker() {
    // std::cout << "Berserker destructor!" << std::endl;
}
