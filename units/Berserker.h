#ifndef BERSERKER_H
#define BERSERKER_H
#include "Unit.h"
#include "../states/BerserkerState.h"
#include "../attacks/BaseAttack.h"

class Berserker : public Unit {
    public:
    // Berserker(const std::string& name = "BERSERKER",
    //                 int maxHP = (int)HP::BERSERKER,
    //                 int dmg = (int)DMG::BERSERKER,
    //                 bool undeadStatus = false);
    Berserker();
    
    virtual ~Berserker();
};

#endif // BERSERKER_H