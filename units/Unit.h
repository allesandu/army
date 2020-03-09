#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "IObserver.h"
#include "IObservable.h"
#include "../states/State.h"
#include "../attacks/BaseAttack.h"
#include "../Exceptions.h"
#include "../config.h"

class BaseAttack;
class State;

class Unit : public IObserver, public IObservable {
// class Unit {
    protected:
        State* uState;
        BaseAttack* uAttack;
        
    public:
        virtual void attachObserver(IObserver* necromancer);
        virtual void detachObserver(IObserver* necromancer);
        virtual void Notify();
        virtual void Update(IObservable* victim);
        
        bool isAlive();
        
        Unit(const std::string& name = "noOne", int maxHP = 0, int dmg = 0, bool undeadStatus = false);
        Unit(State* state, BaseAttack* attack); // maybe bad idea
        
        virtual ~Unit();
        
        const std::string& getName() const;
        int getHitPoints() const;
        virtual int getMaxHitPoints() const;
        int getDamage() const;
        bool isUndead();
        virtual int getMagicPower() const;
        
        State* getState() const;
        BaseAttack* getAttack() const;
        
        void takeDamage(int uStateDmg);
        void takeHitPoints(int enemyHP);
        
        void setState(State* newState);
        void setAttack(BaseAttack* newAttack);
        
        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
        
        void castImplement(int spellID);
        void cast(int spellID, Unit* target);
        void cast();// special for Warlock
        void transform();
        void bite(Unit* target);
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif //UNIT_H
