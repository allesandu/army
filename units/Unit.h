#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "IObserver.h"
#include "IObservable.h"
#include "../states/State.h"
#include "../attacks/BaseAttack.h"
#include "../abilities/Ability.h"
#include "../Exceptions.h"
#include "../config.h"

class BaseAttack;
class State;
class Ability;

class Unit : public IObserver, public IObservable {
    protected:
        State* uState;
        BaseAttack* uAttack;
        Ability* uAbility;
        
        void ensureIsAlive();
        
    public:
        virtual void attachObserver(IObserver* necromancer);
        virtual void detachObserver(IObserver* necromancer);
        virtual void Notify();
        virtual void Update(IObservable* victim);
        
        Unit(State* state, BaseAttack* attack, Ability* ability);
        
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
        void takeMagicDamage(int magDmg);
        void takeHitPoints(int enemyHP);
        
        void setState(State* newState);
        void setAttack(BaseAttack* newAttack);
        void setAbility(Ability* newAbility);
        
        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
        
        void castImplement(int spellID);
        void cast(int spellID, Unit* target);
        
        void action();// special for Warlock
        void action(Unit* target);
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif //UNIT_H
