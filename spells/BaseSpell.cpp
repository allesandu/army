#include "BaseSpell.h"
#include <iostream>

BaseSpell::BaseSpell(int cost, int spPower, const std::string spName, const std::string spType) {
    this->spellCost = cost;
    this->spellPower = spPower;
    this->spellName = spName;
    this->spellType = spType;
    // std::cout << "BaseSpell constructor!" << std::endl;
}

BaseSpell::~BaseSpell() {
    std::cout << "BaseSpell destructor!" << std::endl;
}

int BaseSpell::getSpellCost() const {
    return this->spellCost;
}

int BaseSpell::getSpellPower() const {
    return this->spellPower;
}
const std::string BaseSpell::getSpellName() const {
    return this->spellName;
}

const std::string BaseSpell::getSpellType() const {
    return this->spellType;
}

std::ostream& operator<<(std::ostream& out, const BaseSpell& baseSpell) {
    out << "Spell <" << baseSpell.getSpellName() << ">";
    out << " costs " << baseSpell.getSpellCost() << " mana";
    out << " with power=" << baseSpell.getSpellPower();
    out << " (type=" << baseSpell.getSpellType() << ")";
    return out;
}
