#ifndef PRIESTSTATE_H
#define PRIESTSTATE_H
#include "MagicState.h"

class PriestState : public MagicState {
    public:
        PriestState(const std::string& name = "PRIEST",
            int maxHp = (int) HP::PRIEST,
            int dmg = (int) DMG::PRIEST,
            bool undeadStatus = false,
            int mPower = (int) MAGIC::PRIEST,
            int hInd = 100,
            int bInd = 50);
        
        virtual ~PriestState();
};

#endif // PRIESTSTATE_H
