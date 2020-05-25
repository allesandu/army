#ifndef WEREWOLFSTATE_H
#define WEREWOLFSTATE_H
#include "State.h"
// #include "WolfState.h"// remove
#include "../config.h"

class WerewolfState : public State {
    public:
        WerewolfState(const std::string& name = "WEREWOLF",
                    int maxHP = (int)HP::WEREWOLF,
                    int dmg = (int)DMG::WEREWOLF,
                    bool undeadStatus = false);
        
        virtual ~WerewolfState();
        
        // virtual void transform(); // remove
};

#endif // WEREWOLFSTATE_H
