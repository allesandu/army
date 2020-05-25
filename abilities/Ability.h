#ifndef ABILITY_H
#define ABILITY_H
#include "../units/Unit.h"
#include "../Exceptions.h"

class Unit;

class Ability {
    public:
        Ability();
        virtual ~Ability();
        
        virtual void action(Unit* target);
        virtual void action();
};

#endif // ABILITY_H
