#ifndef SPELLCASTER_H
#define SPELLCASTER_H
#include "Unit.h"
#include "../states/MagicState.h"
#include "../attacks/MagicAttack.h"
// #include "../spells/SpellBook.h"

class SpellCaster : public Unit {
    public:
        SpellCaster(MagicState* magState, MagicAttack* magAttack = new MagicAttack());
        virtual ~SpellCaster();
        
        // virtual SpellBook* getBook();
        // virtual int getSpellCost(int spellID) const;
};

#endif // SPELLCASTER_H
