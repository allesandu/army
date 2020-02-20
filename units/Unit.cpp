#include <iostream>
#include "Unit.h"
#include "../states/VampireState.h"

void Unit::attachObserver(IObserver* necromancer) {
    this->lstObserv->insert(necromancer);
    std::cout << "\t <-> attachment has been done <->" << std::endl;
}

void Unit::detachObserver(IObserver* necromancer) {
    this->lstObserv->erase(necromancer);
    std::cout << "\t <-> detachment has been done <->" << std::endl;
}

void Unit::Notify() {
    std::set<IObserver*>::iterator it;
    
    for ( it = lstObserv->begin(); it != lstObserv->end(); it++ ) {
        (*it)->Update(this);
    }
}

void Unit::Update(IObservable* victim) {
    int hpIndex = 10;
    this->takeHitPoints(victim->getMaxHitPoints()*hpIndex/100);
    // this->takeHitPoints(hpIndex);
    std::cout << "\ts t a t u s || VICTIM WAS BITTEN BY _ " << this->getName() << std::endl;
}

bool Unit::isAlive() {
    return this->getHitPoints() > 0;
}

Unit::Unit(const std::string& name, int maxHp, int dmg) {
    this->uState = new State(name, maxHp, dmg);
    this->lstObserv = new std::set<IObserver*>();
    std::cout << "---------------------- UNIT constructor! ----------" << std::endl;
}

Unit::~Unit() {
    std::cout << "---------------------- UNIT destructor! -----------" << std::endl;
    delete this->uState;
    delete this->uAttack;
}

const std::string Unit::getName() const {
    return this->uState->getName();
}

int Unit::getHitPoints() const {
    return this->uState->getHitPoints();
}

int Unit::getMaxHitPoints() const {
    return this->uState->getMaxHitPoints();
}

int Unit::getDamage() const {
    return this->uState->getDamage();
}

int Unit::getMagicPower() const {
    return this->uState->getMagicPower();
}

State* Unit::getState(){
    return this->uState;
}

void Unit::takeDamage(int uDmg) {
    int finalHP = this->getHitPoints() - uDmg;
    
    if ( finalHP < 1 ) {
        this->Notify();
        
        // delete this; // HOW to deal with Unit death ???????????!!!!!!!!!!!!!1
    } else {
        this->uState->takeDamage(uDmg);
    }
}

void Unit::takeHitPoints(int enemyHP) {
    // std::cout << "Got HP !" << std::endl;
    this->uState->takeHitPoints(enemyHP);
}

void Unit::setState(State* newState) {
    delete this->uState;
    std::cout << "0000 - STATE has changed (class <Unit>)" << std::endl;
    this->uState = newState;
}
void Unit::setAttack(BaseAttack* newAttack) {
    delete this->uAttack;
    std::cout << "0000 - ATTACK has changed (class <Unit>)" << std::endl;
    this->uAttack = newAttack;
}

void Unit::attack(Unit* enemy) {
    // std::cout << "Got unit attack!" << std::endl;
    this->uAttack->attack(this, enemy);
}

void Unit::counterAttack(Unit* enemy) {
    // std::cout << "Got it!" << std::endl;
    this->uAttack->counterAttack(this, enemy);
}

void Unit::cast(int spellID, Unit* target) {
    if ( target->getName() != "BERSERKER" ) {
        const std::string castSpellType = this->getState()->getSpellType(spellID);
        
        if ( castSpellType == "BATTLE" ) {
            this->uAttack->magicAttack(this, spellID, target);
            std::cout << "Your cast has BATTLE type +****+" << std::endl;
        }
        if ( castSpellType == "HEAL" ) {
            this->uState->takeHitPoints(this, spellID, target);
            std::cout << "You use HEAL spell - well done!" << std::endl;
        }
    } else {
            std::cout << "Ha-ha-ha... You are foolish... I AM BERSERKER :)" << std::endl;
    }
}

void Unit::abilityInner() {
    std::cout << "0000 - attempt to change STATE (class <Unit>)" << std::endl;
    this->uState->transform();
}

void Unit::abilityOuter(Unit* target) {
    std::cout << "0000 - attempt to change UNIT (class <Unit>)" << std::endl;
    this->uAttack->bite(target);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << "Unit <";
    out << unit.getName();
    out << "> with: life=" << unit.getHitPoints();
    out << "/" << unit.getMaxHitPoints();
    out << "; and hitPower=" << unit.getDamage();// << std::endl;
    out << "; and magicPower=" << unit.getMagicPower() << std::endl;
    
    return out;
}
