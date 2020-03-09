#include "Rogue.h"
#include "../attacks/RogueAttack.h"
#include "../states/RogueState.h"

// Rogue::Rogue(const std::string& name, int maxHP, int dmg, bool undeadStatus)
//         : Unit(name, maxHP, dmg, undeadStatus) {
//         this->uAttack = new RogueAttack();
//         std::cout << "Rogue constructor!" << std::endl;
// }

Rogue::Rogue()
        : Unit(new RogueState(), new RogueAttack()) {
        std::cout << "Rogue constructor! - with ANOTHER State|BaseAttack" << std::endl;
}

Rogue::~Rogue() {
    // std::cout << "Rogue destructor!" << std::endl;
}
