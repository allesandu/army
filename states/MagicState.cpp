#include "MagicState.h"

MagicState::MagicState(const std::string& name, int maxHp, int dmg, bool undeadStatus, int mPower, int hInd, int bInd)
                         : State(name, maxHp, dmg, undeadStatus)
                         , magicPower(mPower)
                         , healIndex(hInd)
                         , battleIndex(bInd)
                         // , spBook(new SpellBook()) {
                         , spBook(SpellBook::getSpellBook()) { // for Singleton
                            
// std::cout << "********** MagicState created" << std::endl;
}

MagicState::~MagicState() {
    // std::cout << "********** MagicState to delete" << std::endl;
    
    if ( this->spBook ) {
        delete this->spBook;
    }
    
    // std::cout << "********** MagicState IS deleted" << std::endl;
}

int MagicState::getSpellCost(int spellID) const {
    return this->spBook->getSpellCost(spellID);
}

int MagicState::getSpellPower(int spellID) const {
    return this->spBook->getSpellPower(spellID);
}

const std::string MagicState::getSpellName(int spellID) const {
    return this->spBook->getSpellName(spellID);
}

const std::string MagicState::getSpellType(int spellID) const {
    return this->spBook->getSpellType(spellID);
}

int MagicState::getMagicPower() const {
    return this->magicPower;
}

int MagicState::getHealIndex() const {
    return this->healIndex;
}

int MagicState::getBattleIndex() const {
    return this->battleIndex;
}

void MagicState::useMagicPower(int spCost) {
    if (  spCost > this->magicPower ) {
        throw OutOfMana();
    }
    this->magicPower -= spCost;
}

void MagicState::takeHitPoints(Unit* caster, int spellID, Unit* target) {
    int addHP = caster->getState()->getSpellPower(spellID);
    int hInd = caster->getState()->getHealIndex();
    int newHP = addHP * hInd / 100;
    
    target->takeHitPoints(newHP);

}

// void MagicState::summon() { // remove

// }
