#ifndef SPELLBOOK_H
#define SPELLBOOK_H
#include <map>
#include "BaseSpell.h"

class SpellBook { // HOW to deal with key as SpellID(int)? Maybe name???
    protected:
        std::map<int, BaseSpell*>* spellList;
        
    public:
        SpellBook();
        ~SpellBook();
        
        int getSpellCount() const;
        
        int getSpellCost(int spellID) const;
        int getSpellPower(int spellID) const;
        const std::string getSpellName(int spellID) const;
        const std::string getSpellType(int spellID) const;
        
        BaseSpell* getSpell(int spellID);
        
        void addSpell(int spellID, BaseSpell* bSpell);
        
        const std::map<int, BaseSpell*>::iterator getBegin() const;
        const std::map<int, BaseSpell*>::iterator getEnd() const;
};

std::ostream& operator<<(std::ostream& out, const SpellBook& spBook);

#endif // SPELLBOOK_H
