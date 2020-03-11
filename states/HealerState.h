#ifndef HEALERSTATE_H
#define HEALERSTATE_H
#include "MagicState.h"

class HealerState : public MagicState {
    public:
        HealerState(const std::string& name = "HEALER",
            int maxHp = (int) HP::HEALER,
            int dmg = (int) DMG::HEALER,
            bool undeadStatus = false,
            int mPower = (int) MAGIC::HEALER,
            int hInd = 100,
            int bInd = 50);
        
        virtual ~HealerState();
};

#endif // HEALERSTATE_H
