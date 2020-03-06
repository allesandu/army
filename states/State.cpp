#include <iostream>
#include "State.h"

// State::State(const std::string& name, int maxHP, int dmg, bool undeadStatus) {
//     this->name = name;
//     this->hitPoints = maxHP;
//     this->maxHitPoints = maxHP;
//     this->damage = dmg;
//     this->undead = undeadStatus;
//     std::cout << "State condtructor!" << std::endl;
// }

State::State(const std::string& name, int maxHP, int dmg, bool undeadStatus)
        : name(name), hitPoints(maxHP), maxHitPoints(maxHP), damage(dmg), undead(undeadStatus) {
    std::cout << "State condtructor!  - Caiman templ" << std::endl;
}

State::~State() {
    // std::cout << "Destructor done!" << std::endl;// WHY few times!!
}

const std::string& State::getName() const {
    return this->name;
}

int State::getHitPoints() const {
    return this->hitPoints;
}

int State::getMaxHitPoints() const {
    return this->maxHitPoints;
}

int State::getDamage() const {
    return this->damage;
}

bool State::isUndead() {
        return this->undead;
    }

int State::getMagicPower() const {
    return 0;
    // std::cout << "0000 - no magicPower (class <State>)" << std::endl;
}

void State::useMagicPower(int spCost) {
    
}

int State::getHealIndex() const {
    std::cout << "0000 - no healIndex (class <State>)" << std::endl;
}

int State::getBattleIndex() const {
    std::cout << "0000 - no battleIndex (class <State>)" << std::endl;
}

int State::getSpellCost(int spellID) const {
    std::cout << "0000 - no Spell ability (class <State>)" << std::endl;
    return 0;
}

int State::getSpellPower(int spellID) const {
    std::cout << "0000 - no magicAttack ability (class <State>)" << std::endl;
    return 0;
}

const std::string State::getSpellType(int spellID) const {
    std::cout << "0000 - no Magic ability (class <State>)" << std::endl;
}

void State::takeDamage(int dmg) {
    this->hitPoints -= dmg;
}

void State::takeHitPoints(int addHP) {
    std::cout << "WE ARE HERE --- class <State>" << std::endl;
    int newHP = this->hitPoints + addHP;
    
    std::cout << "\tNew HP must be : " << newHP << std::endl;
    
    if ( newHP > this->maxHitPoints ) {
        this->hitPoints = this->maxHitPoints;
        std::cout << "Please, no cheat :)" << std::endl;
    } else {
        this->hitPoints = newHP;
    }
}

void State::takeHitPoints(Unit* caster, int spellID, Unit* target) {
    std::cout << "0000 - no ability  to HP increase [takeHP] (class <State>)" << std::endl;
}

void State::setState(State* newState) {
    this->name = newState->name;
    this->hitPoints = newState->hitPoints;
    this->maxHitPoints = newState->maxHitPoints;
    this->damage = newState->damage;
}

void State::transform() {
    std::cout << "0000 - no STATE changing (class <State>)" << std::endl;
}

void State::summon() {
    std::cout << "0000 - you are NOT WARLOCK (class <State>)" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const State& state) {
    out << "State info: <" << state.getName() << "> ";
    out << "with life =" << state.getHitPoints();
    out << "/" << state.getMaxHitPoints();
    out << " and damage =" << state.getDamage() << std::endl;
    out << "\theal koeff = " << state.getHealIndex();// perhaps ADD info for checking
    out << " and battle koeff = " << state.getBattleIndex() << std::endl;// perhaps ADD info for checking
    return out;
}
