#include <iostream>
#include "State.h"

State::State(const std::string& name, int maxHP, int dmg, bool undeadStatus)
        : name(name), hitPoints(maxHP), maxHitPoints(maxHP), damage(dmg), undead(undeadStatus) {
}

State::~State() {
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

bool State::isUndead() const {
        return this->undead;
    }

int State::getMagicPower() const {
    return 0;
}

void State::useMagicPower(int spCost) {
    
}

int State::getHealIndex() const {

}

int State::getBattleIndex() const {

}

int State::getSpellCost(int spellID) const {
    return 0;
}

int State::getSpellPower(int spellID) const {
    return 0;
}

const std::string State::getSpellType(int spellID) const {

}

void State::takeDamage(int dmg) {
    this->hitPoints -= dmg;
}

void State::takeMagicDamage(int magDmg) {
    this->hitPoints -= magDmg;
}

void State::takeHitPoints(int addHP) {
    int newHP = this->hitPoints + addHP;
    
    if ( newHP > this->maxHitPoints ) {
        this->hitPoints = this->maxHitPoints;
    } else {
        this->hitPoints = newHP;
    }
}

void State::takeHitPoints(Unit* caster, int spellID, Unit* target) {

}

void State::setState(State* newState) {
    this->name = newState->name;
    this->hitPoints = newState->hitPoints;
    this->maxHitPoints = newState->maxHitPoints;
    this->damage = newState->damage;
}

std::ostream& operator<<(std::ostream& out, const State& state) {
    out << "State info: <" << state.getName() << "> ";
    out << "with life=" << state.getHitPoints();
    out << "/" << state.getMaxHitPoints();
    out << " and damage=" << state.getDamage();
    out << " [undead=" << state.isUndead() << "]" << std::endl;
    // out << "\theal koeff = " << state.getHealIndex();
    // out << " and battle koeff = " << state.getBattleIndex() << std::endl;
    return out;
}
