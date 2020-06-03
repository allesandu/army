#ifndef MAGICARROW_H
#define MAGICARROW_H
#include "BaseSpell.h"
#include "../config.h"

class MagicArrow : public BaseSpell {
    public:
        MagicArrow(int spCost = (int) COST::MAGICARROW,
                int spPower = (int) POWER::MAGICARROW,
                const std::string& spName = "MagicArrow",
                const std::string& spType = "BATTLE");
        
        virtual ~MagicArrow();
};

#endif // MAGICARROW_H
