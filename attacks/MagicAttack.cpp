#include "MagicAttack.h"

MagicAttack::MagicAttack() : BaseAttack() {
    // std::cout << "MagicAttack constructor!" << std::endl;;
}

MagicAttack::~MagicAttack() {
    // std::cout << "MagicAttack destructor!" << std::endl;
}

void MagicAttack::magicAttack(Unit* caster, int spellID, Unit* target) {
    std::cout << "(@-@-@-@-@)* - MagicAttack - (@-@-@-@-@)" << std::endl;
    // std::cout << "\tbattleInd = " << caster->getState()->getBattleIndex() << std::endl;// delete at all
    int dmg = caster->getState()->getSpellPower(spellID);
    int bInd;
    
    if ( target->isUndead() ) {
        bInd = 200;
    } else {
        bInd = caster->getState()->getBattleIndex();
    }
    
    target->takeDamage(dmg*bInd/100);
}
