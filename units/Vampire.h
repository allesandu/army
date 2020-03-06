#ifndef VAMPIRE_H
#define VAMPIRE_H
#include "Unit.h"
#include "../attacks/VampireAttack.h"
#include "../states/VampireState.h"
#include "../config.h"

class Vampire : public Unit {
    public:
        Vampire(const std::string& name = "VAMPIRE", int maxHP = (int)HP::VAMPIRE, int dmg = (int)DMG::VAMPIRE);
        virtual ~Vampire();
        
};

#endif // VAMPIRE_H
