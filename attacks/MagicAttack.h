#ifndef MAGICATTACK_H
#define MAGICATTACK_H
#include "BaseAttack.h"

class Unit;

class MagicAttack : public BaseAttack {
    public:
        MagicAttack();
        virtual ~MagicAttack();
        
        virtual void magicAttack(Unit* caster, int spellID, Unit* target);
};

#endif // MAGICATTACK_H
