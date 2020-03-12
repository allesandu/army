#include "PriestAttack.h"

PriestAttack::PriestAttack() : MagicAttack() {
    std::cout << "PriestAttack constructor!" << std::endl;;
}

PriestAttack::~PriestAttack() {
    // std::cout << "PriestAttack destructor!" << std::endl;
}
void PriestAttack::magicAttack(Unit* caster, int spellID, Unit* target) {
    std::cout << "(@-@-@-@-@)* - PriestAttack - (@-@-@-@-@)" << std::endl;
    std::cout << "x2 for Undead " << std::endl;
    
    int dmg = caster->getState()->getSpellPower(spellID);
    int bInd = caster->getState()->getBattleIndex();;
    int priestInd;
    
    if ( target->isUndead() ) {
        priestInd = 2;
    }
    
    target->takeDamage(priestInd*dmg*bInd/100);
}
