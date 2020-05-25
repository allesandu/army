#include "Warlock.h"

Warlock::Warlock(WarlockState* state, MagicAttack* magAttack, WarlockAbility* ability)
        : SpellCaster(state, magAttack, ability) {

}

Warlock::~Warlock() {};
