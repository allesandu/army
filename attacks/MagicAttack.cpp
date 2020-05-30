#include "MagicAttack.h"

MagicAttack::MagicAttack() : BaseAttack() {

}

MagicAttack::~MagicAttack() {

}

void MagicAttack::magicAttack(Unit* caster, int spellID, Unit* target) {
    int wolfInd = 100;
    int dmg = caster->getState()->getSpellPower(spellID);
    int bInd = caster->getState()->getBattleIndex();
    
    if ( target->getName() == "WOLF" ) {
        wolfInd = 120;
    }
    
    target->takeMagicDamage(dmg*bInd*wolfInd/100/100);
}
