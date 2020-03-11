#ifndef WIZARDSTATE_H
#define WIZARDSTATE_H
#include "MagicState.h"
#include "../spells/SpellBook.h"

class WizardState : public MagicState {
    public:
        WizardState(const std::string& name = "WIZARD",
            int maxHp = (int) HP::WIZARD,
            int dmg = (int) DMG::WIZARD,
            bool undeadStatus = false,
            int mPower = (int) MAGIC::WIZARD,
            int hInd = 50,
            int bInd = 100);
        
        virtual ~WizardState();
};

#endif // WIZARDSTATE_H
