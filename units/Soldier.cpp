#include "Soldier.h"

// Soldier::Soldier() : Unit() {
//     this->uState = new SoldierState();
//     this->uAttack = new BaseAttack();
//     // std::cout << "Soldier constuctor!" << std::endl;
// }


// Soldier::Soldier() : Unit(new SoldierState(), new BaseAttack()) {
//     std::cout << "Soldier constuctor!  - 032020 " << std::endl;
// }

// Soldier::Soldier(const std::string& name, int maxHP, int dmg, bool undeadStatus)
//             : Unit(name, maxHP, dmg, undeadStatus) {
//     std::cout << "Soldier constuctor!  - Caiman temp " << std::endl;
// }

Soldier::Soldier()
            : Unit(new SoldierState(), new BaseAttack()) {
    std::cout << "Soldier constuctor! - with ANOTHER State|BaseAttack " << std::endl;
}

// Soldier::Soldier() {
//     Soldier(new SoldierState(), new BaseAttack());
//     std::cout << "Soldier constuctor!  - NEWEST - 032020 " << std::endl;
// }



Soldier::~Soldier() {
    // std::cout << "Soldier Destructor!" << std::endl;
}
