#include "Soldier.h"

Soldier::Soldier()
            : Unit(new SoldierState(), new BaseAttack(), new Ability()) {
}

Soldier::~Soldier() {

}
