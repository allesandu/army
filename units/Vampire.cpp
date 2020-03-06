#include "Vampire.h"


// Vampire::Vampire() : Unit() {
//     this->uState = new VampireState();
//     this->uAttack = new VampireAttack();
//     // std::cout << "Vampire constructor!" << std::endl;
// }

// Vampire::Vampire() : Unit(new VampireState(), new VampireAttack()) {
//     std::cout << "Vampire constructor! - 032020 " << std::endl;
// }

Vampire::Vampire(const std::string& name, int maxHP, int dmg)
        : Unit(name, maxHP, dmg) {
        this->uAttack = new VampireAttack();
    std::cout << "Vampire constuctor!  - Caiman temp " << std::endl;
}

Vampire::~Vampire() {
    // std::cout << "Vampire destructor!" << std::endl;
}
