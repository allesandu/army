#include "Werewolf.h"


// Werewolf::Werewolf(const std::string& name, int maxHP, int dmg, bool undeadStatus)
//         : Unit(name, maxHP, dmg, undeadStatus) {
//             this->uState = new WerewolfState();
//             this->uAttack = new WerewolfAttack();
//     std::cout << "Werewolf constructor" << std::endl;
// }

Werewolf::Werewolf()
        : Unit(new WerewolfState(), new WerewolfAttack()) {
    std::cout << "Werewolf constructor! - with ANOTHER State|BaseAttack" << std::endl;
}

Werewolf::~Werewolf() {
    // std::cout << "Werewolf destructor" << std::endl;
}
