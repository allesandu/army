#include "WizardState.h"

WizardState::WizardState(const std::string& name, int maxHp, int dmg, bool undeadStatus, int mPower, int hInd, int bInd)
        : MagicState(name, maxHp, dmg, undeadStatus, mPower, hInd, bInd) {
}

WizardState::~WizardState() {

}
