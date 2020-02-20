#ifndef RESTOREHP_H
#define RESTOREHP_H
#include "BaseSpell.h"
#include "../config.h"

class RestoreHP : public BaseSpell {
    public:
        RestoreHP(int cost = (int) COST::RESTORE, int spPower = (int) POWER::RESTORE,
            const std::string spName = "RestoreHP", const std::string spType = "HEAL");
        virtual ~RestoreHP();
};

#endif // RESTOREHP_H
