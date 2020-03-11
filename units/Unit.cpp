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

// Unit::Unit(const std::string& name, int maxHp, int dmg) { // DETELE
//     this->uState = new State(name, maxHp, dmg);// DETELE
//     this->lstObserv = new std::set<IObserver*>();// DETELE
//     std::cout << "---------------------- UNIT constructor! ----------" << std::endl;// DETELE
// }

Unit::Unit(const std::string& name, int maxHp, int dmg, bool undeadStatus)
    : uState(new State(name, maxHp, dmg, undeadStatus)),
    uAttack(new BaseAttack()) {
        this->lstObserv = new std::set<IObserver*>();
        std::cout << "-------------- UNIT constructor! Caiman-temp-" << std::endl;// DETELE
}

Unit::Unit(State* state, BaseAttack* attack)
    : uState(state),// dont know hot to create proper State_constructor !!! - maybe bad idea
    uAttack(attack) {
    
    this->lstObserv = new std::set<IObserver*>();
    std::cout << "------------- UNIT constructor!  - with ANOTHER State|BaseAttack---" << std::endl;
}

Unit::~Unit() {
    std::cout << "---------------------- UNIT destructor! -----------" << std::endl;
    delete this->uState;
    delete this->uAttack;
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
    // std::cout << "Got HP !" << std::endl;
    this->uState->takeHitPoints(enemyHP);
}

void Unit::setState(State* newState) {
    delete this->uState;
    std::cout << "0000 - STATE has changed (class <Unit>)" << std::endl;
    this->uState = newState;
    // this->uState->setState(newState); // maybe dont need
}
void Unit::setAttack(BaseAttack* newAttack) {
    delete this->uAttack;
    std::cout << "0000 - ATTACK has changed (class <Unit>)" << std::endl;
    this->uAttack = newAttack;
    // this->uState->setAttack(newAttack);
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
        std::cout << "Your cast has BATTLE type +****+" << std::endl;
    }
    if ( castSpellType == "HEAL" ) {
        this->uState->takeHitPoints(this, spellID, target);
        std::cout << "You use HEAL spell - well done!" << std::endl;
    }
}

void Unit::cast() {
    if ( this->getName() == "WARLOCK" ) {
        this->castImplement(SPELL::SUMMONSPELL);
        this->uState->summon();
    }
}

void Unit::transform() {
    std::cout << "0000 - attempt to change STATE (class <Unit>)" << std::endl;
    this->uState->transform();
}

void Unit::bite(Unit* target) {
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
