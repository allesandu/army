#ifndef PRIESTATTACK_H
#define PRIESTATTACK_H
#include "MagicAttack.h"

class Unit;

class PriestAttack : public MagicAttack {
    public:
        PriestAttack();
        virtual ~PriestAttack();
        
        virtual void magicAttack(Unit* caster, int spellID, Unit* target);
};

#endif // PRIESTATTACK_H
