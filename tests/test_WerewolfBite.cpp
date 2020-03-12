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

TEST_CASE("test Werewolf_bite", "[bite]") {
    
    Werewolf* ww1 = new Werewolf();
    
    Soldier* s1 = new Soldier();
    Soldier* s2 = new Soldier();
    Rogue* r1 = new Rogue();
    Rogue* r2 = new Rogue();
    Berserker* b1 = new Berserker();
    Berserker* b2 = new Berserker();
    
    Vampire* v1 = new Vampire();
    Vampire* v2 = new Vampire();
    
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
    
    SECTION("Werewolf_bite: transformation from Soldier") {
        ww1->bite(s1);
        s1->bite(s2);
        
        REQUIRE( s1->getName() == "WEREWOLF" );
        REQUIRE( s1->getHitPoints() == 180 );
        REQUIRE( s1->getMaxHitPoints() == 180);
        REQUIRE( s1->getDamage() == 90 );
        REQUIRE( s1->isUndead() == false );
        REQUIRE( s1->getMagicPower() == 0 );
        REQUIRE( s1->getState()->getSpellCost(4) == 0 );
        REQUIRE( s1->getState()->getSpellPower(4) == 0 );
    
        REQUIRE( s2->getName() == "WEREWOLF" );
        REQUIRE( s2->getHitPoints() == 180 );
        REQUIRE( s2->getMaxHitPoints() == 180);
        REQUIRE( s2->getDamage() == 90 );
        REQUIRE( s2->isUndead() == false );
        REQUIRE( s2->getMagicPower() == 0 );
        REQUIRE( s2->getState()->getSpellCost(4) == 0 );
        REQUIRE( s2->getState()->getSpellPower(4) == 0 );
    
    }
    
    SECTION("Werewolf_bite: transformation from Rogue") {
        ww1->bite(r1);
        r1->bite(r2);
        
        REQUIRE( r1->getName() == "WEREWOLF" );
        REQUIRE( r1->getHitPoints() == 180 );
        REQUIRE( r1->getMaxHitPoints() == 180);
        REQUIRE( r1->getDamage() == 90 );
        REQUIRE( r1->isUndead() == false );
        REQUIRE( r1->getMagicPower() == 0 );
        REQUIRE( r1->getState()->getSpellCost(4) == 0 );
        REQUIRE( r1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( r2->getName() == "WEREWOLF" );
        REQUIRE( r2->getHitPoints() == 180 );
        REQUIRE( r2->getMaxHitPoints() == 180);
        REQUIRE( r2->getDamage() == 90 );
        REQUIRE( r2->isUndead() == false );
        REQUIRE( r2->getMagicPower() == 0 );
        REQUIRE( r2->getState()->getSpellCost(4) == 0 );
        REQUIRE( r2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Berserker") {
        ww1->bite(b1);
        b1->bite(b2);
        
        REQUIRE( b1->getName() == "WEREWOLF" );
        REQUIRE( b1->getHitPoints() == 180 );
        REQUIRE( b1->getMaxHitPoints() == 180);
        REQUIRE( b1->getDamage() == 90 );
        REQUIRE( b1->isUndead() == false );
        REQUIRE( b1->getMagicPower() == 0 );
        REQUIRE( b1->getState()->getSpellCost(4) == 0 );
        REQUIRE( b1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( b2->getName() == "WEREWOLF" );
        REQUIRE( b2->getHitPoints() == 180 );
        REQUIRE( b2->getMaxHitPoints() == 180);
        REQUIRE( b2->getDamage() == 90 );
        REQUIRE( b2->isUndead() == false );
        REQUIRE( b2->getMagicPower() == 0 );
        REQUIRE( b2->getState()->getSpellCost(4) == 0 );
        REQUIRE( b2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Vampire") {
        ww1->bite(v1);
        
        
        REQUIRE( v1->getName() == "VAMPIRE" );
        REQUIRE( v1->getHitPoints() == 200 );
        REQUIRE( v1->getMaxHitPoints() == 200);
        REQUIRE( v1->getDamage() ==100 );
        REQUIRE( v1->isUndead() == true );
        REQUIRE( v1->getMagicPower() == 0 );
        REQUIRE( v1->getState()->getSpellCost(4) == 0 );
        REQUIRE( v1->getState()->getSpellPower(4) == 0 );
        
        ww1->transform();
        ww1->bite(v2);
        
        REQUIRE( v2->getName() == "VAMPIRE" );
        REQUIRE( v2->getHitPoints() == 200 );
        REQUIRE( v2->getMaxHitPoints() == 200);
        REQUIRE( v2->getDamage() == 100 );
        REQUIRE( v2->isUndead() == true );
        REQUIRE( v2->getMagicPower() == 0 );
        REQUIRE( v2->getState()->getSpellCost(4) == 0 );
        REQUIRE( v2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Demon") {
        ww1->bite(d1);
        d1->bite(d2);
        
        REQUIRE( d1->getName() == "WEREWOLF" );
        REQUIRE( d1->getHitPoints() == 180 );
        REQUIRE( d1->getMaxHitPoints() == 180);
        REQUIRE( d1->getDamage() == 90 );
        REQUIRE( d1->isUndead() == false );
        REQUIRE( d1->getMagicPower() == 0 );
        REQUIRE( d1->getState()->getSpellCost(4) == 0 );
        REQUIRE( d1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( d2->getName() == "WEREWOLF" );
        REQUIRE( d2->getHitPoints() == 180 );
        REQUIRE( d2->getMaxHitPoints() == 180);
        REQUIRE( d2->getDamage() == 90 );
        REQUIRE( d2->isUndead() == false );
        REQUIRE( d2->getMagicPower() == 0 );
        REQUIRE( d2->getState()->getSpellCost(4) == 0 );
        REQUIRE( d2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Wizard") {
        ww1->bite(wiz1);
        wiz1->bite(wiz2);
        
        REQUIRE( wiz1->getName() == "WEREWOLF" );
        REQUIRE( wiz1->getHitPoints() == 180 );
        REQUIRE( wiz1->getMaxHitPoints() == 180);
        REQUIRE( wiz1->getDamage() == 90 );
        REQUIRE( wiz1->isUndead() == false );
        REQUIRE( wiz1->getMagicPower() == 0 );
        REQUIRE( wiz1->getState()->getSpellCost(4) == 0 );
        REQUIRE( wiz1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( wiz2->getName() == "WEREWOLF" );
        REQUIRE( wiz2->getHitPoints() == 180 );
        REQUIRE( wiz2->getMaxHitPoints() == 180);
        REQUIRE( wiz2->getDamage() == 90 );
        REQUIRE( wiz2->isUndead() == false );
        REQUIRE( wiz2->getMagicPower() == 0 );
        REQUIRE( wiz2->getState()->getSpellCost(4) == 0 );
        REQUIRE( wiz2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Healer") {
        ww1->bite(h1);
        h1->bite(h2);
        
        REQUIRE( h1->getName() == "WEREWOLF" );
        REQUIRE( h1->getHitPoints() == 180 );
        REQUIRE( h1->getMaxHitPoints() == 180);
        REQUIRE( h1->getDamage() == 90 );
        REQUIRE( h1->isUndead() == false );
        REQUIRE( h1->getMagicPower() == 0 );
        REQUIRE( h1->getState()->getSpellCost(4) == 0 );
        REQUIRE( h1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( h2->getName() == "WEREWOLF" );
        REQUIRE( h2->getHitPoints() == 180 );
        REQUIRE( h2->getMaxHitPoints() == 180);
        REQUIRE( h2->getDamage() == 90 );
        REQUIRE( h2->isUndead() == false );
        REQUIRE( h2->getMagicPower() == 0 );
        REQUIRE( h2->getState()->getSpellCost(4) == 0 );
        REQUIRE( h2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Priest") {
        ww1->bite(p1);
        p1->bite(p2);
        
        REQUIRE( p1->getName() == "WEREWOLF" );
        REQUIRE( p1->getHitPoints() == 180 );
        REQUIRE( p1->getMaxHitPoints() == 180);
        REQUIRE( p1->getDamage() == 90 );
        REQUIRE( p1->isUndead() == false );
        REQUIRE( p1->getMagicPower() == 0 );
        REQUIRE( p1->getState()->getSpellCost(4) == 0 );
        REQUIRE( p1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( p2->getName() == "WEREWOLF" );
        REQUIRE( p2->getHitPoints() == 180 );
        REQUIRE( p2->getMaxHitPoints() == 180);
        REQUIRE( p2->getDamage() == 90 );
        REQUIRE( p2->isUndead() == false );
        REQUIRE( p2->getMagicPower() == 0 );
        REQUIRE( p2->getState()->getSpellCost(4) == 0 );
        REQUIRE( p2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Warlock") {
        ww1->bite(wl1);
        wl1->bite(wl2);
        
        REQUIRE( wl1->getName() == "WEREWOLF" );
        REQUIRE( wl1->getHitPoints() == 180 );
        REQUIRE( wl1->getMaxHitPoints() == 180);
        REQUIRE( wl1->getDamage() == 90 );
        REQUIRE( wl1->isUndead() == false );
        REQUIRE( wl1->getMagicPower() == 0 );
        REQUIRE( wl1->getState()->getSpellCost(4) == 0 );
        REQUIRE( wl1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( wl2->getName() == "WEREWOLF" );
        REQUIRE( wl2->getHitPoints() == 180 );
        REQUIRE( wl2->getMaxHitPoints() == 180);
        REQUIRE( wl2->getDamage() == 90 );
        REQUIRE( wl2->isUndead() == false );
        REQUIRE( wl2->getMagicPower() == 0 );
        REQUIRE( wl2->getState()->getSpellCost(4) == 0 );
        REQUIRE( wl2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Necromancer") {
        ww1->bite(nm1);
        nm1->bite(nm2);
        
        REQUIRE( nm1->getName() == "WEREWOLF" );
        REQUIRE( nm1->getHitPoints() == 180 );
        REQUIRE( nm1->getMaxHitPoints() == 180);
        REQUIRE( nm1->getDamage() == 90 );
        REQUIRE( nm1->isUndead() == false );
        REQUIRE( nm1->getMagicPower() == 0 );
        REQUIRE( nm1->getState()->getSpellCost(4) == 0 );
        REQUIRE( nm1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( nm2->getName() == "WEREWOLF" );
        REQUIRE( nm2->getHitPoints() == 180 );
        REQUIRE( nm2->getMaxHitPoints() == 180);
        REQUIRE( nm2->getDamage() == 90 );
        REQUIRE( nm2->isUndead() == false );
        REQUIRE( nm2->getMagicPower() == 0 );
        REQUIRE( nm2->getState()->getSpellCost(4) == 0 );
        REQUIRE( nm2->getState()->getSpellPower(4) == 0 );
    }
}