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
#include "states/RogueState.h"
#include "states/VampireState.h"
#include "states/WerewolfState.h"
#include "states/WolfState.h"
#include "states/MagicState.h"
#include "states/WarlockState.h"
#include "attacks/BaseAttack.h"
#include "attacks/VampireAttack.h"
#include "attacks/RogueAttack.h"
#include "spells/BaseSpell.h"
#include "spells/RestoreHP.h"
#include "spells/SpellBook.h"
#include "spells/MagicArrow.h"
#include "spells/FireBall.h"
#include "abilities/Ability.h"
#include "abilities/VampireAbility.h"
#include "abilities/WarlockAbility.h"
#include "config.h"
#include "Exceptions.h"
#include <iostream>

int main() {
    // =======================================================================================
    // ============================= MAGIC BOOK CHECKING =====================================
    // SpellBook* spB = new SpellBook();
    // spB->addSpell(2, new RestoreHP());
    // spB->addSpell(3, new MagicArrow());
    // std::cout << "Spell list contains: " << spB->getSpellCount() << " spells" << std::endl;
    // std::cout << "----------------------------------------------" << std::endl;
    
    // std::cout << *(spB->getSpell(SPELL::MAGICARROW)) << std::endl;
    // std::cout << *(spB->getSpell(SPELL::BASESPELL)) << std::endl;
    // std::cout << *(spB->getSpell(SPELL::RESTOREHP)) << std::endl;
    // std::cout << "----------------------------------------------" << std::endl;
    // std::cout << "certaint SpellType is ---> " << spB->getSpellType(SPELL::RESTOREHP) << " <---" << std::endl;
    // std::cout << "the spell costs {" << spB->getSpellCost(SPELL::RESTOREHP) << "}" << std::endl;    
    // std::cout << "----------------------------------------------" << std::endl;
    // std::cout << *spB << std::endl;
    
    // delete spB;
    // =======================================================================================
    // =======================================================================================
    
    // =======================================================================================
    // ============================= STATE CHECKING ==========================================
    // std::cout << "_____________________STATE " << std::endl;
    // State* st = new State();
    // std::cout << "obj_value = " << st;
    // std::cout << "  adress = " << &st << std::endl;
    // std::cout << *st << std::endl;
    // std::cout << "__________________________________________________________" << std::endl;
    
    // std::cout << "_____________________Sold1 STATE " << std::endl;
    // SoldierState* sold1 = new SoldierState();
    // std::cout << "obj_value = " << sold1;
    // std::cout << "  adress = " << &sold1 << std::endl;
    // std::cout << *sold1 << std::endl;
    // std::cout << "__________________________________________________________" << std::endl;
    
    // std::cout << "_____________________Sold2 STATE " << std::endl;
    // SoldierState* sold2 = new SoldierState("SOLDIER",(int)HP::SOLDIER, (int)DMG::SOLDIER, false);
    // std::cout << "obj_value = " << sold2;
    // std::cout << "  adress = " << &sold2 << std::endl;
    // std::cout << *sold2 << std::endl;
    // std::cout << "__________________________________________________________" << std::endl;
    
    // std::cout << "_____________________Vamp STATE " << std::endl;
    // VampireState* vamp_st1 = new VampireState();
    // std::cout << "obj_value = " << vamp_st1;
    // std::cout << "  adress = " << &vamp_st1 << std::endl;
    // std::cout << *vamp_st1 << std::endl;
    // std::cout << "__________________________________________________________" << std::endl;
    
    // st = vamp_st1;
    
    // std::cout << "_____________________new STATE " << std::endl;
   
    // std::cout << "obj_value = " << st;
    // std::cout << "  adress = " << &st << std::endl;
    // std::cout << *st << std::endl;
    // std::cout << "__________________________________________________________" << std::endl;
    
    
    // =======================================================================================
    // =======================================================================================
    
    // =======================================================================================
    // ============================= ATTACK CHECKING ==========================================
    // std::cout << "_____________________BASEATTACK " << std::endl;
    // BaseAttack* ba1 = new BaseAttack();
    // std::cout << "obj_value = " << ba1;
    // std::cout << "  adress = " << &ba1 << std::endl;
    // // std::cout << *ba1 << std::endl;
    // std::cout << "__________________________________________________________" << std::endl;
    
    // std::cout << "_____________________Vamp ATTACK " << std::endl;
    // VampireAttack* vatt = new VampireAttack();
    // std::cout << "obj_value = " << vatt;
    // std::cout << "  adress = " << &vatt << std::endl;
    // // std::cout << *vatt << std::endl;
    // std::cout << "__________________________________________________________" << std::endl;
    
    // ba1 = vatt;
    
    // std::cout << "_____________________new ATTACK (Base = Vampire) " << std::endl;
   
    // std::cout << "obj_value = " << ba1;
    // std::cout << "  adress = " << &ba1 << std::endl;
    // // std::cout << *ba1 << std::endl;
    // std::cout << "__________________________________________________________" << std::endl;
    
    // =======================================================================================
    // =======================================================================================
    
    
    // =======================================================================================
    // ============================= SOLDIER  CHECKING =======================================
    // std::cout << "_____________________SOLDIER " << std::endl;
    // Soldier* s1 = new Soldier();
    // std::cout << "obj_value = " << s1;
    // std::cout << "  adress = " << &s1 << std::endl;
    // std::cout << *s1 << std::endl;
    // std::cout << "_____________________info " << std::endl;
    // std::cout << "            s1->getName() = " << s1->getName() << std::endl;
    // // std::cout << "s1->getState() " << &(s1->getState()) << std::endl;
    
    // State* soldState = s1->getState();
    // BaseAttack* soldAt = s1->getAttack();
    // std::cout<< "SoldierState: obj_value = " << soldState << "  adress = " << &soldState << std::endl;
    // std::cout<< "SoldierAttac: obj_value = " << soldAt << "  adress = " << &soldAt << std::endl;
    // s1->setState(vamp_st1);
    // // s1->setState(new VampireState());
    // // s1->setAttack(new VampireAttack());
    // s1->setAttack(vatt);
    // State* soldStateNew = s1->getState();
    // BaseAttack* soldAtNew = s1->getAttack();
    // std::cout << "_____________________new info " << std::endl;
    // std::cout << "            s1->getName() = " << s1->getName() << std::endl;
    // std::cout<< "SoldierState: obj_value = " << soldStateNew << "  adress = " << &soldStateNew << std::endl;
    // std::cout<< "SoldierAttac: obj_value = " << soldAtNew << "  adress = " << &soldAtNew << std::endl;
    
    // std::cout << "__________________________________________________________" << std::endl;
    // =======================================================================================
    // =================================Summon  Warlock-Demon check ==========================
    Warlock* wl1 = new Warlock();
    std::cout << *wl1 << std::endl;
    std::cout << "==========================================================" << std::endl;
    
    wl1->cast();
    // wl1->cast();
    std::cout << *wl1 << std::endl;
    std::cout << "__________________________________________________________" << std::endl;
    
    WarlockAbility* wlAbil = new WarlockAbility();
    std::cout << wlAbil << std::endl;
    std::cout << "__________________________________________________________" << std::endl;
    // wlAbil->addDemon();
    // wlAbil->addDemon();
    // wlAbil->addDemon();
    
    wlAbil->getDemonArmy();
    // delete wlAbil;
    // std::cout << *wl1 << std::endl;
    // std::cout << "__________________________________________________________" << std::endl;
    
    // =======================================================================================
    // ============================= BITE  CHECK =======================================
    Soldier* s1 = new Soldier();
    Soldier* s2 = new Soldier();
    Vampire* v1 = new Vampire();
    Werewolf* ww1 = new Werewolf();
    
    std::cout << *s1 << *s2 << *v1 << *ww1 << std::endl;
    std::cout << "==========================================================" << std::endl;
    
    // v1->action(s1);
    // s1->attack(s2);
    ww1->action(s2);
    std::cout << "----------------- Bites trial 1 ---\n";
    std::cout << *s1 << *s2 << *v1 << *ww1 << std::endl;
    std::cout << "==========================================================" << std::endl;
    
    // s2->action(s1);
    s1->action(ww1);
    std::cout << "----------------- Bite 2 has been organized! ---\n";
    std::cout << *s1 << *s2 << *v1 << *ww1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    
    // Rogue* r1 = new Rogue();
    // std::cout << *r1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    
    // s1->action(r1); // s1 has been turn into Vampire <line 192>
    // std::cout << "----------------- Bite 3 has been organized! ---\n";
    // std::cout << *s1 << *s2 << *v1 << *r1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    // =======================================================================================
    // =======================================================================================

// =======================================================================================
    // ============================= NEW ACTION CHECK =======================================
    // try {
    //     r1->action(s1);
    // } catch ( NoSpecialAbility ) {
    //     std::cout << "No Special Ability!!!\n";
    //     std::cout << *s1 << *s2 << *v1 << *r1 << std::endl;
    //     std::cout << "__________________________________________________________" << std::endl;
    // }
    
    // std::cout << "==========================================================" << std::endl;
    
    // =======================================================================================
    // =======================================================================================
    // Wizard* w1 = new Wizard();
    // std::cout << *w1;
    // std::cout << "__________________________________________________________" << std::endl;
    // std::cout << *(w1->getState()) << std::endl;
    // std::cout << "==========================================================" << std::endl;
    // w1->cast(3, s1);
    // w1->cast(2, s1);
    // w1->attack(s1);
    
    // MagicState* ms = new MagicState();
    // std::cout << "certain spell costs {[" << ms->getSpellCost(3) << "]} spellpoints" << std::endl;
    // delete ms;
    
    // Soldier* s1 = new Soldier();
    // std::cout << *s1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    
    
    // Demon* d1 = new Demon();
    // std::cout << *d1 << std::endl;
    // delete d1;
    // std::cout << "__________________________________________________________" << std::endl;
    // Vampire* v1 = new Vampire();
    // std::cout << *v1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    
    // Rogue* r2 = new Rogue();
    // std::cout << *r2 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    
    // Berserker* b1 = new Berserker();
    // std::cout << *b1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
        
    // Werewolf* ww1 = new Werewolf();
    // std::cout << *ww1 << std::endl;
    // // ww1->transform();
    // std::cout << "__________________________________" << std::endl;
    // // std::cout << *ww1 << std::endl;
    // // ww1->transform();
    // // std::cout << "__________________________________" << std::endl;
    // // std::cout << *ww1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    
    // Wizard* wiz1 = new Wizard();
    // std::cout << *wiz1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    
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
    
    // w1->cast(2, s1);
    
    // std::cout << *w1 << *h1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    // h1->attack(w1);
    
    // Warlock* wl1 = new Warlock();
    // std::cout << *wl1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    
    // std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
    // wl1->cast(SPELL::FIREBALL, s1);
    // std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
    
    // std::cout << *wl1 << *s1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    
    // Necromancer* nm1 = new Necromancer();
    // std::cout << *nm1;
    // std::cout << "==========================================================" << std::endl;
    
    // wl1->cast(SPELL::MAGICARROW, s1);
    // std::cout << *wl1 << *s1 << std::endl;
    // std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
    
    // wl1->cast(SPELL::MAGICARROW, s1);
    // std::cout << "=== t e s t ======" << std::endl;
    // s1->cast();
    // std::cout << "------------------" << std::endl;
    // wl1->cast();
    // std::cout << "==================" << std::endl;
    
    // std::cout << *wl1 << *s1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    // h1->attack(w1);
    
    // std::cout << *w1 << *h1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    // h1->attack(w1);
    // h1->attack(w1);
    
    // std::cout << *w1 << *h1 << std::endl;

    // r1->attack(s1);
    // s1->attack(nm1);
    // nm1->attack(s1);
    // std::cout << *s1 << *r1 << *nm1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    // r1->attack(s1);
    // v1->action(s1);
    // v1->action(r1);
    // v1->transform();
    // ww1->action(s1);
    // ww1->action(r1);
    // ww1->action(v1);
    // ww1->transform();
    // ww1->action(r1);
    
    // std::cout << *s1 << *v1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    // s1->action(b1);
    // std::cout << "----------------- Attack has been organized! ---\n";
    // std::cout << *s1 << *v1 << *b1 << std::endl;
    // std::cout << "==========================================================" << std::endl;
    // std::cout << *s1 << *w1 << *v1 << *ww1 << std::endl;
    // delete s1;
    // delete r1;
    // delete r2;
    // delete b1;
    // delete v1;
    // delete ww1;
    
    // delete wiz1;
    // delete h1;
    // delete p1;
    // delete wl1;
    // delete nm1;
    // delete spW1;
    
    return 0;
}
