#include "units/Unit.h"
#include "units/Soldier.h"
#include "units/Rogue.h"
#include "units/Berserker.h"
#include "units/Vampire.h"
#include "units/Werewolf.h"
#include "units/SpellCaster.h"
#include "units/Wizard.h"
#include "units/Healer.h"
#include "units/Priest.h"
#include "units/Warlock.h"
#include "units/Necromancer.h"
#include "units/Demon.h"
#include "states/State.h"
#include "states/SoldierState.h"
// #include "states/RogueState.h"
#include "states/VampireState.h"
#include "states/WerewolfState.h"
#include "states/WolfState.h"
#include "states/MagicState.h"
#include "spells/BaseSpell.h"
#include "spells/RestoreHP.h"
#include "spells/SpellBook.h"
#include "spells/MagicArrow.h"
#include "spells/FireBall.h"
#include <iostream>

int main() {
    // =======================================================================================
    // ============================= MAGIC BOOK CHECKING =====================================
    SpellBook* spB = new SpellBook();
    // spB->addSpell(2, new RestoreHP());
    // spB->addSpell(3, new MagicArrow());
    std::cout << "Spell list contains: " << spB->getSpellCount() << " spells" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    
    // std::cout << *(spB->getSpell(SPELL::MAGICARROW)) << std::endl;
    // std::cout << *(spB->getSpell(SPELL::BASESPELL)) << std::endl;
    // std::cout << *(spB->getSpell(SPELL::RESTOREHP)) << std::endl;
    
    // std::cout << "----------------------------------------------" << std::endl;
    
    std::cout << "certaint SpellType is ---> " << spB->getSpellType(SPELL::RESTOREHP) << " <---" << std::endl;
    std::cout << "the spell costs {" << spB->getSpellCost(SPELL::RESTOREHP) << "}" << std::endl;    
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << *spB << std::endl;
    
    delete spB;
    // =======================================================================================
    // =======================================================================================
    
    // Soldier* s1 = new Soldier();
    // std::cout << *s1 << std::endl;
    // // s1->abilityInner();
    // std::cout << "==========================================================" << std::endl;
    
    // Rogue* r1 = new Rogue();
    // std::cout << *r1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    
    // Berserker* b1 = new Berserker();
    // std::cout << *b1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    
    // Vampire* v1 = new Vampire();
    // std::cout << *v1 << std::endl;
    // v1->abilityInner();
    // std::cout << "==========================================================" << std::endl;
    
    // Werewolf* ww1 = new Werewolf();
    // std::cout << *ww1 << std::endl;
    // ww1->abilityInner();
    // std::cout << *ww1 << std::endl;
    // ww1->abilityInner();
    // std::cout << *ww1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    
    // Wizard* w1 = new Wizard();
    // std::cout << *w1;
    // std::cout << "__________________________________________________________" << std::endl;
    // std::cout << *(w1->getState()) << std::endl;
    std::cout << "==========================================================" << std::endl;
    // w1->cast(3, s1);
    // w1->cast(2, s1);
    // w1->attack(s1);
    
    // MagicState* ms = new MagicState();
    // std::cout << "certain spell costs {[" << ms->getSpellCost(3) << "]} spellpoints" << std::endl;
    // delete ms;
    
    // Healer* h1 = new Healer();
    // std::cout << *h1;
    // std::cout << "__________________________________________________________" << std::endl;
    // std::cout << *(h1->getState()) << std::endl;
    // std::cout << "==========================================================" << std::endl;
    
    // Priest* p1 = new Priest();
    // std::cout << *p1;
    // std::cout << "__________________________________________________________" << std::endl;
    // std::cout << *(p1->getState()) << std::endl;
    // std::cout << "==========================================================" << std::endl;
    // h1->attack(b1);
    // w1->cast(2, s1);
    
    // std::cout << *b1 << *w1 << *h1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    
    // h1->cast(3, b1);
    
    // std::cout << *b1 << *w1 << *h1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    // Warlock* wl1 = new Warlock();
    // std::cout << *wl1;
    // std::cout << "==========================================================" << std::endl;
    
    // Necromancer* nm1 = new Necromancer();
    // std::cout << *nm1;
    // std::cout << "==========================================================" << std::endl;
    
    // SpellCaster* spW1 = new SpellCaster();
    // std::cout << *spW1 << std::endl;
    // std::cout << *(spW1->getBook()) << std::endl;
    // std::cout << "----------------------------------------------" << std::endl;
    // std::cout << "certain Spell costs - {" << spW1->getSpellCost(2) << "} spellpoints" << std::endl;
    // std::cout << "==========================================================" << std::endl;
    // r1->attack(s1);
    // s1->attack(nm1);
    // nm1->attack(s1);
    // std::cout << *s1 << *r1 << *nm1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    // r1->attack(s1);
    // w1->magicAttack(s1);
    // w1->attack(b1);
    // w1->magicAttack(b1);
    // b1->magicAttack(s1);
    // v1->attack(s1);
    
    // v1->abilityOuter(s1);
    // v1->abilityOuter(r1);
    // v1->abilityInner();
    // ww1->abilityOuter(s1);
    // ww1->abilityOuter(r1);
    // ww1->abilityOuter(v1);
    // ww1->abilityInner();
    // ww1->abilityOuter(r1);
    // v1->abilityOuter(ww1);
    // std::cout << *s1 << *r1 << *nm1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    // std::cout << "----------------- Attack has been organized! ---\n";
    // std::cout << *s1 << *r1 << *v1 << *ww1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    // std::cout << *s1 << *w1 << *v1 << *ww1 << std::endl;

    // std:: cout << "and magic=" << w1->getMagicDamage() << std::endl;
    // delete s1;
    // delete r1;
    // delete b1;
    // delete v1;
    // delete ww1;
    
    // delete w1;
    // delete h1;
    // delete p1;
    // delete wl1;
    // delete nm1;
    // delete spW1;
    
    return 0;
}
