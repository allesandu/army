#include "Berserker.h"

Berserker::Berserker()
            : Unit(new BerserkerState(), new BaseAttack(), new Ability()) {
}

Berserker::~Berserker() {
}
