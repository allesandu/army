#include "../units/Soldier.h"
#include "../units/Rogue.h"
#include "../units/Berserker.h"
#include "../units/Vampire.h"
#include "../units/Werewolf.h"
#include "../units/Demon.h"
#include "../units/Wizard.h"
#include "../units/Healer.h"
#include "../units/Priest.h"
#include "../units/Warlock.h"
#include "../units/Necromancer.h"
#include "catch.hpp"

TEST_CASE("test Vampire_bite", "[bite]") {
    Vampire* v1 = new Vampire();
    
    Soldier* s1 = new Soldier();
    Soldier* s2 = new Soldier();
    Rogue* r1 = new Rogue();
    Rogue* r2 = new Rogue();
    Berserker* b1 = new Berserker();
    Berserker* b2 = new Berserker();
    Werewolf* ww1 = new Werewolf();
    Demon* d1 = new Demon();
    Demon* d2 = new Demon();
    
    Wizard* wiz1 = new Wizard();
    Wizard* wiz2 = new Wizard();
    Healer* h1 = new Healer();
    Healer* h2 = new Healer();
    Priest* p1 = new Priest();
    Priest* p2 = new Priest();
    Warlock* wl1 = new Warlock();
    Warlock* wl2 = new Warlock();
    Necromancer* nm1 = new Necromancer();
    Necromancer* nm2 = new Necromancer();
    
    SECTION("Vampire_bite: transformation from Soldier") {
        v1->action(s1);
        s1->action(s2);
        
        REQUIRE( s1->getName() == "VAMPIRE" );
        REQUIRE( s1->getHitPoints() == 200 );
        REQUIRE( s1->getMaxHitPoints() == 200);
        REQUIRE( s1->getDamage() == 100 );
        REQUIRE( s1->isUndead() == true );
        REQUIRE( s1->getMagicPower() == 0 );
        REQUIRE( s1->getState()->getSpellCost(4) == 0 );
        REQUIRE( s1->getState()->getSpellPower(4) == 0 );
    
        REQUIRE( s2->getName() == "VAMPIRE" );
        REQUIRE( s2->getHitPoints() == 200 );
        REQUIRE( s2->getMaxHitPoints() == 200);
        REQUIRE( s2->getDamage() == 100 );
        REQUIRE( s2->isUndead() == true );
        REQUIRE( s2->getMagicPower() == 0 );
        REQUIRE( s2->getState()->getSpellCost(4) == 0 );
        REQUIRE( s2->getState()->getSpellPower(4) == 0 );
    
    }
    
    SECTION("Vampire_bite: transformation from Rogue") {
        v1->action(r1);
        r1->action(r2);
        
        REQUIRE( r1->getName() == "VAMPIRE" );
        REQUIRE( r1->getHitPoints() == 200 );
        REQUIRE( r1->getMaxHitPoints() == 200);
        REQUIRE( r1->getDamage() == 100 );
        REQUIRE( r1->isUndead() == true );
        REQUIRE( r1->getMagicPower() == 0 );
        REQUIRE( r1->getState()->getSpellCost(4) == 0 );
        REQUIRE( r1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( r2->getName() == "VAMPIRE" );
        REQUIRE( r2->getHitPoints() == 200 );
        REQUIRE( r2->getMaxHitPoints() == 200);
        REQUIRE( r2->getDamage() == 100 );
        REQUIRE( r2->isUndead() == true );
        REQUIRE( r2->getMagicPower() == 0 );
        REQUIRE( r2->getState()->getSpellCost(4) == 0 );
        REQUIRE( r2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Vampire_bite: transformation from Berserker") {
        v1->action(b1);
        b1->action(b2);
        
        REQUIRE( b1->getName() == "VAMPIRE" );
        REQUIRE( b1->getHitPoints() == 200 );
        REQUIRE( b1->getMaxHitPoints() == 200);
        REQUIRE( b1->getDamage() == 100 );
        REQUIRE( b1->isUndead() == true );
        REQUIRE( b1->getMagicPower() == 0 );
        REQUIRE( b1->getState()->getSpellCost(4) == 0 );
        REQUIRE( b1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( b2->getName() == "VAMPIRE" );
        REQUIRE( b2->getHitPoints() == 200 );
        REQUIRE( b2->getMaxHitPoints() == 200);
        REQUIRE( b2->getDamage() == 100 );
        REQUIRE( b2->isUndead() == true );
        REQUIRE( b2->getMagicPower() == 0 );
        REQUIRE( b2->getState()->getSpellCost(4) == 0 );
        REQUIRE( b2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Vampire_bite: transformation from Werewolf") {
        v1->action(ww1);
        
        
        REQUIRE( ww1->getName() == "WEREWOLF" );
        REQUIRE( ww1->getHitPoints() == 180 );
        REQUIRE( ww1->getMaxHitPoints() == 180);
        REQUIRE( ww1->getDamage() == 90 );
        REQUIRE( ww1->isUndead() == false );
        REQUIRE( ww1->getMagicPower() == 0 );
        REQUIRE( ww1->getState()->getSpellCost(4) == 0 );
        REQUIRE( ww1->getState()->getSpellPower(4) == 0 );
        
        ww1->action();
        v1->action(ww1);
        
        REQUIRE( ww1->getName() == "WOLF" );
        REQUIRE( ww1->getHitPoints() == 230 );
        REQUIRE( ww1->getMaxHitPoints() == 230);
        REQUIRE( ww1->getDamage() == 120 );
        REQUIRE( ww1->isUndead() == false );
        REQUIRE( ww1->getMagicPower() == 0 );
        REQUIRE( ww1->getState()->getSpellCost(4) == 0 );
        REQUIRE( ww1->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Vampire_bite: transformation from Demon") {
        v1->action(d1);
        d1->action(d2);
        
        REQUIRE( d1->getName() == "VAMPIRE" );
        REQUIRE( d1->getHitPoints() == 200 );
        REQUIRE( d1->getMaxHitPoints() == 200);
        REQUIRE( d1->getDamage() == 100 );
        REQUIRE( d1->isUndead() == true );
        REQUIRE( d1->getMagicPower() == 0 );
        REQUIRE( d1->getState()->getSpellCost(4) == 0 );
        REQUIRE( d1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( d2->getName() == "VAMPIRE" );
        REQUIRE( d2->getHitPoints() == 200 );
        REQUIRE( d2->getMaxHitPoints() == 200);
        REQUIRE( d2->getDamage() == 100 );
        REQUIRE( d2->isUndead() == true );
        REQUIRE( d2->getMagicPower() == 0 );
        REQUIRE( d2->getState()->getSpellCost(4) == 0 );
        REQUIRE( d2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Vampire_bite: transformation from Wizard") {
        v1->action(wiz1);
        wiz1->action(wiz2);
        
        REQUIRE( wiz1->getName() == "VAMPIRE" );
        REQUIRE( wiz1->getHitPoints() == 200 );
        REQUIRE( wiz1->getMaxHitPoints() == 200);
        REQUIRE( wiz1->getDamage() == 100 );
        REQUIRE( wiz1->isUndead() == true );
        REQUIRE( wiz1->getMagicPower() == 0 );
        REQUIRE( wiz1->getState()->getSpellCost(4) == 0 );
        REQUIRE( wiz1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( wiz2->getName() == "VAMPIRE" );
        REQUIRE( wiz2->getHitPoints() == 200 );
        REQUIRE( wiz2->getMaxHitPoints() == 200);
        REQUIRE( wiz2->getDamage() == 100 );
        REQUIRE( wiz2->isUndead() == true );
        REQUIRE( wiz2->getMagicPower() == 0 );
        REQUIRE( wiz2->getState()->getSpellCost(4) == 0 );
        REQUIRE( wiz2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Vampire_bite: transformation from Healer") {
        v1->action(h1);
        h1->action(h2);
        
        REQUIRE( h1->getName() == "VAMPIRE" );
        REQUIRE( h1->getHitPoints() == 200 );
        REQUIRE( h1->getMaxHitPoints() == 200);
        REQUIRE( h1->getDamage() == 100 );
        REQUIRE( h1->isUndead() == true );
        REQUIRE( h1->getMagicPower() == 0 );
        REQUIRE( h1->getState()->getSpellCost(4) == 0 );
        REQUIRE( h1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( h2->getName() == "VAMPIRE" );
        REQUIRE( h2->getHitPoints() == 200 );
        REQUIRE( h2->getMaxHitPoints() == 200);
        REQUIRE( h2->getDamage() == 100 );
        REQUIRE( h2->isUndead() == true );
        REQUIRE( h2->getMagicPower() == 0 );
        REQUIRE( h2->getState()->getSpellCost(4) == 0 );
        REQUIRE( h2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Vampire_bite: transformation from Priest") {
        v1->action(p1);
        p1->action(p2);
        
        REQUIRE( p1->getName() == "VAMPIRE" );
        REQUIRE( p1->getHitPoints() == 200 );
        REQUIRE( p1->getMaxHitPoints() == 200);
        REQUIRE( p1->getDamage() == 100 );
        REQUIRE( p1->isUndead() == true );
        REQUIRE( p1->getMagicPower() == 0 );
        REQUIRE( p1->getState()->getSpellCost(4) == 0 );
        REQUIRE( p1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( p2->getName() == "VAMPIRE" );
        REQUIRE( p2->getHitPoints() == 200 );
        REQUIRE( p2->getMaxHitPoints() == 200);
        REQUIRE( p2->getDamage() == 100 );
        REQUIRE( p2->isUndead() == true );
        REQUIRE( p2->getMagicPower() == 0 );
        REQUIRE( p2->getState()->getSpellCost(4) == 0 );
        REQUIRE( p2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Vampire_bite: transformation from Warlock") {
        v1->action(wl1);
        wl1->action(wl2);
        
        REQUIRE( wl1->getName() == "VAMPIRE" );
        REQUIRE( wl1->getHitPoints() == 200 );
        REQUIRE( wl1->getMaxHitPoints() == 200);
        REQUIRE( wl1->getDamage() == 100 );
        REQUIRE( wl1->isUndead() == true );
        REQUIRE( wl1->getMagicPower() == 0 );
        REQUIRE( wl1->getState()->getSpellCost(4) == 0 );
        REQUIRE( wl1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( wl2->getName() == "VAMPIRE" );
        REQUIRE( wl2->getHitPoints() == 200 );
        REQUIRE( wl2->getMaxHitPoints() == 200);
        REQUIRE( wl2->getDamage() == 100 );
        REQUIRE( wl2->isUndead() == true );
        REQUIRE( wl2->getMagicPower() == 0 );
        REQUIRE( wl2->getState()->getSpellCost(4) == 0 );
        REQUIRE( wl2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Vampire_bite: transformation from Necromancer") {
        v1->action(nm1);
        nm1->action(nm2);
        
        REQUIRE( nm1->getName() == "VAMPIRE" );
        REQUIRE( nm1->getHitPoints() == 200 );
        REQUIRE( nm1->getMaxHitPoints() == 200);
        REQUIRE( nm1->getDamage() == 100 );
        REQUIRE( nm1->isUndead() == true );
        REQUIRE( nm1->getMagicPower() == 0 );
        REQUIRE( nm1->getState()->getSpellCost(4) == 0 );
        REQUIRE( nm1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( nm2->getName() == "VAMPIRE" );
        REQUIRE( nm2->getHitPoints() == 200 );
        REQUIRE( nm2->getMaxHitPoints() == 200);
        REQUIRE( nm2->getDamage() == 100 );
        REQUIRE( nm2->isUndead() == true );
        REQUIRE( nm2->getMagicPower() == 0 );
        REQUIRE( nm2->getState()->getSpellCost(4) == 0 );
        REQUIRE( nm2->getState()->getSpellPower(4) == 0 );
    }
}
