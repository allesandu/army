#include "Werewolf.h"

Werewolf::Werewolf()
        : Unit(new WerewolfState(), new WerewolfAttack(), new WerewolfAbility()) {
}

Werewolf::~Werewolf() {

}
