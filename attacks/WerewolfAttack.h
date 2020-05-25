#ifndef WEREWOLFATTACK_H
#define WEREWOLFATTACK_H
#include "../attacks/BaseAttack.h"

class WerewolfAttack : public BaseAttack {
    public:
        WerewolfAttack();
        virtual ~WerewolfAttack();
        
        // virtual void bite(Unit* target); // remove
};

#endif // WEREWOLFATTACK_H
