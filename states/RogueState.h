#ifndef ROGUESTATE_H
#define ROGUESTATE_H
#include "State.h"

class RogueState : public State {
    public:
        RogueState(const std::string& name = "ROGUE",
                    int maxHP = (int)HP::ROGUE,
                    int dmg = (int)DMG::ROGUE,
                    bool undeadStatus = false);
        
        // RogueState();
        virtual ~RogueState();
};

#endif // ROGUESTATE_H
