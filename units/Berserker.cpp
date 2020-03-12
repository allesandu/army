#include "Berserker.h"

Berserker::Berserker()
            : Unit(new BerserkerState(), new BaseAttack()) {
}

Berserker::~Berserker() {
}
