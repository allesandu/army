#ifndef BASEATTACK_H
#define BASEATTACK_H
#include "../units/Unit.h"
#include "../states/State.h"

class Unit;

class BaseAttack {
    public:
        BaseAttack();
        virtual ~BaseAttack();
        
        virtual void attack(Unit* fighter, Unit* enemy);
        virtual void counterAttack(Unit* fighter, Unit* emeny);
        
        virtual void magicAttack(Unit* caster, int spellID, Unit* enemy);
        virtual void bite(Unit* target);
};

#endif // BASEATTACK_H
