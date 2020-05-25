#include "Ability.h"

Ability::Ability() {}

Ability::~Ability() {}

void Ability::action(Unit* target) {
    throw NoSpecialAbilityBite();
}

void Ability::action() {
    throw NoSpecialAbility();
}
