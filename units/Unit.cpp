#include "Unit.h"

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

// bool Unit::isAlive() {
//     return this->getHitPoints() > 0;
// }

void Unit::ensureIsAlive() {
    if ( this->getHitPoints() == 0 ) {
        throw UnitIsDead();
    }
}

// Unit::Unit(State* state, BaseAttack* attack)
//     : uState(state),
//     uAttack(attack) {
    
//     this->lstObserv = new std::set<IObserver*>();
// }

Unit::Unit(State* state, BaseAttack* attack, Ability* ability)
    : uState(state),
    uAttack(attack),
    uAbility(ability) {
    
    this->lstObserv = new std::set<IObserver*>();
}

Unit::~Unit() {
    delete this->uState;
    delete this->uAttack;
    delete this->uAbility;
}

const std::string& Unit::getName() const {
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

bool Unit::isUndead() {
    this->uState->isUndead();
}

int Unit::getMagicPower() const {
    return this->uState->getMagicPower();
}

State* Unit::getState() const {
    return this->uState;
}

BaseAttack* Unit::getAttack() const {
    return this->uAttack;
}

void Unit::takeDamage(int uDmg) {
    ensureIsAlive();

    int finalDmg = this->getHitPoints();
    int finalHP = finalDmg - uDmg;
    
    if ( finalHP <= 0 ) {
        this->Notify();
    } else {
        finalDmg = uDmg;
        // this->uState->takeDamage(uDmg);
    }
    
    this->uState->takeDamage(finalDmg);
}

void Unit::takeHitPoints(int enemyHP) {
    this->uState->takeHitPoints(enemyHP);
}

void Unit::setState(State* newState) {
    delete this->uState;

    this->uState = newState;

}

void Unit::setAttack(BaseAttack* newAttack) {
    delete this->uAttack;

    this->uAttack = newAttack;

}

void Unit::setAbility(Ability* newAbility) {
    delete this->uAbility;
    
    this->uAbility = newAbility;
}

void Unit::attack(Unit* enemy) {
    ensureIsAlive();
    // std::cout << "Got unit attack!" << std::endl;
    this->uAttack->attack(this, enemy);
}

void Unit::counterAttack(Unit* enemy) {
    // std::cout << "Got it!" << std::endl;
    this->uAttack->counterAttack(this, enemy);
}

void Unit::castImplement(int spellID) {
    int mana = this->getMagicPower();
    int spCost = this->getState()->getSpellCost(spellID);
    
    if ( spCost > mana ) {
        throw OutOfMana();
    }
    
    this->uState->useMagicPower(spCost);
}

void Unit::cast(int spellID, Unit* target) {
    if ( target->getName() == "BERSERKER" ) {
        throw EnemyMagicResistant();
    }
    
    const std::string& castSpellType = this->getState()->getSpellType(spellID);
    
    this->castImplement(spellID);
    
    if ( castSpellType == "BATTLE" ) {
        this->uAttack->magicAttack(this, spellID, target);
    }
    if ( castSpellType == "HEAL" ) {
        this->uState->takeHitPoints(this, spellID, target);
    }
}

// void Unit::cast() { // remove
//     if ( this->getName() == "WARLOCK" ) {
//         this->castImplement(SPELL::SUMMONSPELL);
//         this->uAbility->action();
//     }
// }

// void Unit::transform() {
//     this->uState->transform();
// }

// void Unit::bite(Unit* target) { // remove
//     this->uAttack->bite(target);
// }

void Unit::action() {
    if ( this->getName() == "WARLOCK" ) {
        this->castImplement(SPELL::SUMMONSPELL);
        this->uAbility->action();
    }
    
    this->uAbility->transform(this);
}

void Unit::action(Unit* target) {
    this->uAbility->action(target);
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
