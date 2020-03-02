#ifndef SUMMONSPELL_H
#define SUMMONSPELL_H
#include "BaseSpell.h"
#include "../config.h"

class SummonSpell : public BaseSpell {
    public:
        SummonSpell(int spCost = (int) COST::SUMMONSPELL,
                int spPower = (int) POWER::SUMMONSPELL,
                const std::string& spName = "SUMMONSPELL",
                const std::string& spType = "SPECIAL");
        
        ~SummonSpell();
};

#endif // SUMMONSPELL_H
