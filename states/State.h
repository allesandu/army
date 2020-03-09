#ifndef STATE_H
#define STATE_H
#include <iostream>
#include "../units/Unit.h"

class Unit;

class State {
    protected:
        std::string name;
        int maxHitPoints;
        int hitPoints;
        int damage;
        bool undead;
    
    public:
        State(const std::string& name = "noOne", int maxHP = 0, int dmg = 0, bool undeadStatus = false);
        State();
        
        virtual ~State();
        
        const std::string& getName() const;
        int getHitPoints() const;
        int getMaxHitPoints() const;
        int getDamage() const;
        bool isUndead() const;
        
        virtual int getMagicPower() const;
        virtual int getHealIndex() const;
        virtual int getBattleIndex() const;
        virtual void useMagicPower(int spCost);
        
        virtual int getSpellCost(int spellID) const;
        virtual int getSpellPower(int spellID) const;
        virtual const std::string getSpellType(int spellID) const;
        
        void takeDamage(int stateDmg);
        void takeHitPoints(int addHP);
        virtual void takeHitPoints(Unit* caster, int spellID, Unit* target);
        
        void setState(State* newState);
        
        virtual void transform();
        virtual void summon();
        
};

std::ostream& operator<<(std::ostream& out, const State& state);

#endif // STATE_H
