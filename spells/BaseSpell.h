#ifndef BASESPELL_H
#define BASESPELL_H
#include <iostream>

class BaseSpell {
    protected:
        int spellCost;
        int spellPower;
        std::string spellName;
        std::string spellType;
        
    public:
        BaseSpell(int spCost = 0, int spPower = 0, const std::string& spName = "noSpell", const std::string& spType = "noType");
        virtual ~BaseSpell();
        
        int getSpellCost() const;
        int getSpellPower() const;
        const std::string getSpellName() const;
        const std::string getSpellType() const;
};

std::ostream& operator<<(std::ostream& out, const BaseSpell& baseSpell);

#endif // BASESPELL_H
