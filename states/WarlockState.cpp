#include "WarlockState.h"

WarlockState::WarlockState(const std::string& name, int maxHp, int dmg, bool undeadStatus, int mPower, int hInd, int bInd)
        : MagicState(name, maxHp, dmg, undeadStatus, mPower, hInd, bInd) {
            this->demonArmy = new std::set<Demon*>();
    // std::cout << "WarlockState constructor!  - 032020" << std::endl;
}

WarlockState::~WarlockState() {
    std::set<Demon*>::iterator it = this->demonArmy->begin();
    
    if ( it != this->demonArmy->end() ) {
        for ( ; it != this->demonArmy->end(); it++ ) {
            this->demonArmy->erase(it);
            std::cout << "demon are DELETED!" << std::endl;
        }
        // this->demonArmy->clear();
    }
    delete this->demonArmy;
    std::cout << "demonArmy container are DELETED!" << std::endl;
};

void WarlockState::addDemon() {
    this->demonArmy->insert(new Demon());
}

void WarlockState::summon() {
    this->addDemon();
    std::cout << "Demon has been summoned correctly" << std::endl;
}

void WarlockState::getDemonArmy() {
    std::set<Demon*>::iterator it = this->demonArmy->begin();
    
    if ( it != this->demonArmy->end() ) {
        for ( ; it != this->demonArmy->end(); it++ ) {
            std::cout << **it << std::endl;
        }
    }
}