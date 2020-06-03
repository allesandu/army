#ifndef ABILITY_H
#define ABILITY_H
#include "../units/Unit.h"
#include "../Exceptions.h"

class Unit;

class Ability {
    public:
        Ability();
        virtual ~Ability();
        
        virtual void bite(Unit* target);
        virtual void action();
        virtual void transform(Unit* werewolf);
};

#endif // ABILITY_H
