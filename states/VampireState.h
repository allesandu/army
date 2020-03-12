#ifndef VAMPIRESTATE_H
#define VAMPIRESTATE_H
#include "State.h"
#include "../config.h"

class VampireState : public State {
    public:
        VampireState(const std::string& name = "VAMPIRE",
                    int maxHP = (int)HP::VAMPIRE,
                    int dmg = (int)DMG::VAMPIRE,
                    bool undeadStatus = true);
        
        virtual ~VampireState();
};

#endif // VAMPIRESTATE_H