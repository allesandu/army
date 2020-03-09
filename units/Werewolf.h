#ifndef WEREWOLF_H
#define WEREWOLF_H
#include "Unit.h"
#include "../attacks/WerewolfAttack.h"
#include "../states/WerewolfState.h"

class Werewolf : public Unit {
    public:
        // Werewolf(const std::string& name = "WEREWOLF",
        //             int maxHP = (int)HP::WEREWOLF,
        //             int dmg = (int)DMG::WEREWOLF,
        //             bool undeadStatus = false);
        Werewolf();
        
        virtual ~Werewolf();
};

#endif // WEREWOLF_H