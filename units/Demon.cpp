#include "Demon.h"

Demon::Demon() : Soldier() {
    this->uState = new DemonState();
}

Demon::~Demon() {
    std::cout << "Demon destructor!" << std::endl;
};
