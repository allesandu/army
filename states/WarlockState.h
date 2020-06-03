#ifndef WARLOCKSTATE_H
#define WARLOCKSTATE_H
#include "MagicState.h"

class WarlockState : public MagicState {
    public:
        WarlockState(const std::string& name = "WARLOCK",
            int maxHp = (int) HP::WARLOCK,
            int dmg = (int) DMG::WARLOCK,
            bool undeadStatus = false,
            int mPower = (int) MAGIC::WARLOCK,
            int hInd = 100,
            int bInd = 100);
        
        virtual ~WarlockState();
};

#endif // WARLOCKSTATE_H
