#include "WarlockAbility.h"

WarlockAbility::WarlockAbility() : Ability() {
    this->demonArmy = new std::set<Demon*>();
}

WarlockAbility::~WarlockAbility() {
    std::set<Demon*>::iterator it = this->demonArmy->begin();
    
    if ( it != this->demonArmy->end() ) {
        for ( ; it != this->demonArmy->end(); it++ ) {
            this->demonArmy->erase(it);
        }
    }
    
    delete this->demonArmy;
}

void WarlockAbility::action() {
    this->summon();
    
    std::cout << "Demon has been summoned <WarlockAbility class>" << std::endl;
}

void WarlockAbility::summon() {
    this->addDemon();
}

void WarlockAbility::addDemon() {
    this->demonArmy->insert(new Demon());
}

void WarlockAbility::getDemonArmy() {
    std::set<Demon*>::iterator it = this->demonArmy->begin();
    
    if ( it != this->demonArmy->end() ) {
        for ( ; it != this->demonArmy->end(); it++ ) {
            std::cout << **it << std::endl;
        }
    }
}
