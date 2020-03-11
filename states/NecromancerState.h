#ifndef NECROMANCERSTATES_H
#define NECROMANCERSTATES_H
#include "MagicState.h"

class NecromancerState : public MagicState {
    public:
        NecromancerState(const std::string& name = "NECROMANCER",
            int maxHp = (int) HP::NECROMANCER,
            int dmg = (int) DMG::NECROMANCER,
            bool undeadStatus = true,
            int mPower = (int) MAGIC::NECROMANCER,
            int hInd = 100,
            int bInd = 100);
        
        virtual ~NecromancerState();
};

#endif // NECROMANCERSTATES_H
