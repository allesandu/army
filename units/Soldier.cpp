#include "Soldier.h"

Soldier::Soldier()
            : Unit(new SoldierState(), new BaseAttack()) {
}

Soldier::~Soldier() {

}
