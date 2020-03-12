#include "PriestAttack.h"

PriestAttack::PriestAttack() : MagicAttack() {

}

PriestAttack::~PriestAttack() {

}
void PriestAttack::magicAttack(Unit* caster, int spellID, Unit* target) {
    int dmg = caster->getState()->getSpellPower(spellID);
    int bInd = caster->getState()->getBattleIndex();;
    int priestInd;
    
    if ( target->isUndead() ) {
        priestInd = 2;
    }
    
    target->takeDamage(priestInd*dmg*bInd/100);
}
