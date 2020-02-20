#ifndef SPELLCASTER_H
#define SPELLCASTER_H
#include "Unit.h"
#include "../spells/SpellBook.h"

class SpellCaster : public Unit {
    protected:
        SpellBook* spBook;
    
    public:
        SpellCaster();
        virtual ~SpellCaster();
        
        virtual SpellBook* getBook();
        virtual int getSpellCost(int spellID) const;
};

#endif // SPELLCASTER_H
