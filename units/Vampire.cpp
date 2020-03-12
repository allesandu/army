#include "Vampire.h"

Vampire::Vampire()
        : Unit(new VampireState(), new VampireAttack()) {
}

Vampire::~Vampire() {

}
