#include "Demon.h"

Demon::Demon() : Soldier() {
    this->uState = new DemonState();
}

Demon::~Demon() {
};
