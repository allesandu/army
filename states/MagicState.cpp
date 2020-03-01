#include "MagicState.h"

MagicState::MagicState(const std::string name, int maxHp, int dmg, int mPower, int hInd, int bInd)
     : State(name, maxHp, dmg), magicPower(mPower), healIndex(hInd), battleIndex(bInd), spBook(new SpellBook()) {
        // std::cout << "Another Magic_State constructor!" << std::endl;
}

MagicState::~MagicState() {
    delete this->spBook;
    // std::cout << "MagicState destructor with Book deletion!" << std::endl;
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

void MagicState::takeHitPoints(Unit* caster, int spellID, Unit* target) {
    std::cout << "WE ARE HERE --- MagicState" << std::endl;
    
    int addHP = caster->getState()->getSpellPower(spellID);
    int hInd = caster->getState()->getHealIndex();
    int newHP = addHP * hInd / 100;
    
    target->takeHitPoints(newHP);
    
    // std::cout << "\tNew HP must be : " << newHP << std::endl;
    
    // if ( newHP > this->maxHitPoints ) {
    //     this->hitPoints = this->maxHitPoints;
    //     std::cout << "Please, no cheat :)" << std::endl;
    // } else {
    //     this->hitPoints = newHP;
    // }
}

void MagicState::summon() {
    std::cout << "0000 - you are NOT WARLOCK (class <MagicState>)" << std::endl;
}
