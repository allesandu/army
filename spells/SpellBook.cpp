#include "SpellBook.h"
#include "RestoreHP.h"
#include "MagicArrow.h"
#include <iostream>
#include <map>

SpellBook::SpellBook() {
    this->spellList = new std::map<int, BaseSpell*>();  // HOW to deal with key as SpellID(int)? Maybe name???
    
    this->spellList->insert(std::pair<int, BaseSpell*>(1, new BaseSpell()));
    this->spellList->insert(std::pair<int, BaseSpell*>(2, new RestoreHP()));
    this->spellList->insert(std::pair<int, BaseSpell*>(3, new MagicArrow()));
    // std::cout << "Map list created!" << std::endl;
}

SpellBook::~SpellBook() {
    delete this->spellList;
};

int SpellBook::getSpellCount() const {
    return this->spellList->size();
}

int SpellBook::getSpellCost(int spellID) const {
    return this->spellList->find(spellID)->second->getSpellCost();
}

int SpellBook::getSpellPower(int spellID) const {
    return this->spellList->find(spellID)->second->getSpellPower();
}

const std::string SpellBook::getSpellName(int spellID) const {
    return this->spellList->find(spellID)->second->getSpellName();
}

const std::string SpellBook::getSpellType(int spellID) const {
    return this->spellList->find(spellID)->second->getSpellType();
}

void SpellBook::addSpell(int spellID, BaseSpell* bSpell) {
    this->spellList->insert(std::pair<int, BaseSpell*>(spellID, bSpell));
}

BaseSpell* SpellBook::getSpell(int spellID) {
    if ( this->spellList->find(spellID) != this->spellList->end() ) {
        return this->spellList->find(spellID)->second;
    }
}

const std::map<int, BaseSpell*>::iterator SpellBook::getBegin() const {
    return this->spellList->begin();
}

const std::map<int, BaseSpell*>::iterator SpellBook::getEnd() const{
    return this->spellList->end();
}

std::ostream& operator<<(std::ostream& out, const SpellBook& spBook) {
    std::map<int, BaseSpell*>::iterator it;
    
    out << "ooooooooooooooooooooo ========= MAGIC BOOK ====== oooooooooooooooooooo" << std::endl;
    for ( it = spBook.getBegin(); it != spBook.getEnd(); it++ ) {
        out << "SpellID = " << it->first << " : ";
        out << *(it->second) << std:: endl;
    }
    out << "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << std::endl;
    
    return out;
}
