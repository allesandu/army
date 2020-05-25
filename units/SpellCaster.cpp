#include "SpellCaster.h"

SpellCaster::SpellCaster(MagicState* magState, MagicAttack* magAttack, Ability* ability)
         : Unit(magState, magAttack, ability) {
}

SpellCaster::~SpellCaster() {

}
