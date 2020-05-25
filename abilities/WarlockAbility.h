#ifndef WARLOCKABILITY_H
#define WARLOCKABILITY_H
#include "../units/Unit.h"
#include "../units/Demon.h"
#include "../Exceptions.h"
#include "Ability.h"
#include <set>

class Unit;

class WarlockAbility : public Ability {
    protected:
            std::set<Demon*>* demonArmy;
            
    public:
        WarlockAbility();
        virtual ~WarlockAbility();
        
        virtual void action();
        void summon();
        
        void addDemon();
        void getDemonArmy();
};

#endif // WARLOCKABILITY_H
