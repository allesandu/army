#ifndef FIREBALL_H
#define FIREBALL_H
#include "BaseSpell.h"
#include "../config.h"

class FireBall : public BaseSpell {
    public:
        FireBall(int spCost = (int)COST::FIREBALL,
                int spPower = (int)POWER::FIREBALL,
                const std::string& spName = "FireBall",
                const std::string& spType = "BATTLE");
        
        virtual ~FireBall();
};

#endif // FIREBALL
