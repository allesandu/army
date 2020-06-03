#ifndef RESTOREHP_H
#define RESTOREHP_H
#include "BaseSpell.h"
#include "../config.h"

class RestoreHP : public BaseSpell {
    public:
        RestoreHP(int spCost = (int) COST::RESTOREHP,
                int spPower = (int) POWER::RESTOREHP,
                const std::string& spName = "RestoreHP",
                const std::string& spType = "HEAL");
        
        virtual ~RestoreHP();
};

#endif // RESTOREHP_H
