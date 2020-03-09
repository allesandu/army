#ifndef WOLFSTATE_H
#define WOLFSTATE_H
#include "State.h"

class WolfState : public State {
    public:
        WolfState(const std::string& name = "WOLF",
                    int maxHP = (int)HP::WOLF,
                    int dmg = (int)DMG::WOLF,
                    bool undeadStatus = false);
        
        virtual ~WolfState();
        
        // virtual void transform(); // doesnt work with the same method TRANSFORM in bouth state
};

#endif // WOLFSTATE_H
