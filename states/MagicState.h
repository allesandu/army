#ifndef MAGICSTATE_H
#define MAGICSTATE_H
#include "State.h"
#include "../spells/SpellBook.h"
#include "../config.h"

class MagicState : public State {
    protected:
        int magicPower;
        int healIndex;
        int battleIndex;
        SpellBook* spBook;
        // SpellBook spBook;
        
    public:
        MagicState(const std::string& name = "noNameSpeller",
                    int maxHp = 0,
                    int dmg = 0,
                    bool undeadStatus = false,
                    int mPower = 0,
                    int hInd = 100,
                    int bInd = 100);
        
        virtual ~MagicState();
        
        virtual int getSpellCost(int spellID) const;
        virtual int getSpellPower(int spellID) const;
        virtual const std::string getSpellName(int spellID) const;
        virtual const std::string getSpellType(int spellID) const;
        virtual void useMagicPower(int spCost);
        
        virtual int getMagicPower() const;
        virtual int getHealIndex() const;
        virtual int getBattleIndex() const;
        
        virtual void takeHitPoints(Unit* caster, int spellID, Unit* target);
        
        // virtual void summon(); remove 
};

#endif // MAGICSTATE_H
