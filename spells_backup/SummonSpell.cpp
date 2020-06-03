#include "SummonSpell.h"

SummonSpell::SummonSpell(int spCost, int spPower, const std::string& spName, const std::string& spType)
        : BaseSpell(spCost, spPower, spName, spType) {
    
}

SummonSpell::~SummonSpell() {}

