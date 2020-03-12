#include "Werewolf.h"

Werewolf::Werewolf()
        : Unit(new WerewolfState(), new WerewolfAttack()) {
}

Werewolf::~Werewolf() {

}
