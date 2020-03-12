#ifndef BERSERKERSTATE_H
#define BERSERKERSTATE_H
#include "State.h"

class BerserkerState : public State {
    public:
        BerserkerState(const std::string& name = "BERSERKER",
                    int maxHP = (int)HP::BERSERKER,
                    int dmg = (int)DMG::BERSERKER,
                    bool undeadStatus = false);
        
        virtual ~BerserkerState();
};

#endif // BERSERKERSTATE_H
