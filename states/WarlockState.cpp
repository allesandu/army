#include "WarlockState.h"

WarlockState::WarlockState() : MagicState() {
    this->name = "WARLOCK";
    this->hitPoints = (int)HP::WARLOCK;
    this->maxHitPoints = (int)HP::WARLOCK;
    this->damage = (int)DMG::WARLOCK;
    this->magicPower = (int)MAGIC::WARLOCK;
    
    this->demonArmy = new std::set<Demon*>();
    
    std::cout << "WarlockState constructor!" << std::endl;
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