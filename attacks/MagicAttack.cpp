#include "MagicAttack.h"

MagicAttack::MagicAttack() : BaseAttack() {

}

MagicAttack::~MagicAttack() {

}

void MagicAttack::magicAttack(Unit* caster, int spellID, Unit* target) {
    int dmg = caster->getState()->getSpellPower(spellID);
    int bInd = caster->getState()->getBattleIndex();
    
    target->takeDamage(dmg*bInd/100);
}
