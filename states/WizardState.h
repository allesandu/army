#ifndef WIZARDSTATE_H
#define WIZARDSTATE_H
#include "MagicState.h"
#include "../spells/SpellBook.h"

class WizardState : public MagicState {
    public:
        WizardState();
        virtual ~WizardState();
};

#endif // WIZARDSTATE_H
