#include "Rogue.h"

Rogue::Rogue()
        : Unit(new RogueState(), new RogueAttack(), new Ability()) {
}

Rogue::~Rogue() {

}
