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
        
    public:
        MagicState(const std::string name = "noNameSpeller",
                    int maxHp = 0,
                    int dmg = 0,
                    int mPower = 0,
                    int hInd = 100,
                    int bInd = 100);
        virtual ~MagicState();
        
        virtual int getSpellCost(int spellID) const;
        virtual int getSpellPower(int spellID) const;
        virtual const std::string getSpellName(int spellID) const;
        virtual const std::string getSpellType(int spellID) const;
        
        virtual int getMagicPower() const;
        virtual int getHealIndex() const;
        virtual int getBattleIndex() const;
        
        virtual void takeHitPoints(Unit* caster, int spellID, Unit* target);
};

#endif // MAGICSTATE_H
