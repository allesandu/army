#ifndef WIZARD_H
#define WIZARD_H
#include "SpellCaster.h"
#include "../states/WizardState.h"

class Wizard : public SpellCaster {
    public:
        Wizard(WizardState* state = new WizardState());
        
        virtual ~Wizard();
};

#endif // WIZARD_H
