#include "Vampire.h"

Vampire::Vampire()
        : Unit(new VampireState(), new VampireAttack(), new VampireAbility()) {
}

Vampire::~Vampire() {

}
