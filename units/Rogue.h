#ifndef ROGUE_H
#define ROGUE_H
#include "Unit.h"

class Rogue : public Unit {
    public:
        // Rogue(const std::string& name = "ROGUE",
        //             int maxHP = (int)HP::ROGUE,
        //             int dmg = (int)DMG::ROGUE,
        //             bool undeadStatus = false);
        Rogue();
        
        virtual ~Rogue();
};

#endif // ROGUE_H
