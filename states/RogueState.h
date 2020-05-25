#ifndef ROGUESTATE_H
#define ROGUESTATE_H
#include "State.h"
#include "../config.h"

class RogueState : public State {
    public:
        RogueState(const std::string& name = "ROGUE",
                    int maxHP = (int)HP::ROGUE,
                    int dmg = (int)DMG::ROGUE,
                    bool undeadStatus = false);
        
        virtual ~RogueState();
};

#endif // ROGUESTATE_H
