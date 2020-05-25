#ifndef WARLOCKSTATE_H
#define WARLOCKSTATE_H
#include "MagicState.h"
// #include "../units/Demon.h" // remove
// #include <set>

class WarlockState : public MagicState {
    // protected: // remove
    //         std::set<Demon*>* demonArmy;
        
    public:
        WarlockState(const std::string& name = "WARLOCK",
            int maxHp = (int) HP::WARLOCK,
            int dmg = (int) DMG::WARLOCK,
            bool undeadStatus = false,
            int mPower = (int) MAGIC::WARLOCK,
            int hInd = 100,
            int bInd = 100);
        
        virtual ~WarlockState();
        
        // virtual void addDemon(); // remove
        // virtual void summon();
        
        // virtual void getDemonArmy();
};

#endif // WARLOCKSTATE_H
