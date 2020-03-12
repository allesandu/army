#include "Rogue.h"
#include "../attacks/RogueAttack.h"
#include "../states/RogueState.h"

Rogue::Rogue()
        : Unit(new RogueState(), new RogueAttack()) {
}

Rogue::~Rogue() {

}
