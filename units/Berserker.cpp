#include "Berserker.h"


// Berserker::Berserker(const std::string& name, int maxHP, int dmg, bool undeadStatus)
//             : Unit(name, maxHP, dmg, undeadStatus) {
//     std::cout << "Berserker constructor!" << std::endl;
// }

Berserker::Berserker()
            : Unit(new BerserkerState(), new BaseAttack()) {
        std::cout << "Berserker constructor! - with ANOTHER State|BaseAttack" << std::endl;
}

Berserker::~Berserker() {
    // std::cout << "Berserker destructor!" << std::endl;
}
