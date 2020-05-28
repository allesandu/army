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



TEST_CASE("test Rogue", "[Rogue]") {
    Rogue* r1 = new Rogue();
    
    Soldier* s1 = new Soldier();
    Berserker* b1 = new Berserker();
    Vampire* v1 = new Vampire();
    Demon* d1 = new Demon();
    Werewolf* ww1 = new Werewolf();
    
    Wizard* wiz1 = new Wizard();
    Healer* h1 = new Healer();
    Priest* p1 = new Priest(); 
    Warlock* wl1 = new Warlock();
    Necromancer* nm1 = new Necromancer();
    
    REQUIRE( r1->getName() == "ROGUE" );
    REQUIRE( r1->getHitPoints() == 160 );
    REQUIRE( r1->getMaxHitPoints() == 160 );
    REQUIRE( r1->getDamage() == 60 );
    REQUIRE( r1->isUndead() == false );
    REQUIRE( r1->getMagicPower() == 0);
    REQUIRE( r1->getState()->getSpellCost(4) == 0 );
    REQUIRE( r1->getState()->getSpellPower(4) == 0 );
    
    r1->attack(s1);
    r1->attack(b1);
    r1->attack(v1);
    r1->attack(d1);
    r1->attack(ww1);
    
    r1->attack(wiz1);
    r1->attack(h1);
    r1->attack(p1);
    r1->attack(wl1);
    r1->attack(nm1);
    
    SECTION("Rogue_Attack: without getting counterattack") {
    
        REQUIRE( r1->getHitPoints() == 160 );
        
        REQUIRE( s1->getHitPoints() == 90 );
        REQUIRE( b1->getHitPoints() == 80 );
        REQUIRE( v1->getHitPoints() == 140 );
        REQUIRE( d1->getHitPoints() == 95 );
        REQUIRE( ww1->getHitPoints() == 120 );
        
        REQUIRE( wiz1->getHitPoints() == 20 );
        REQUIRE( h1->getHitPoints() == 15 );
        REQUIRE( p1->getHitPoints() == 30 );
        REQUIRE( wl1->getHitPoints() == 40 );
        REQUIRE( nm1->getHitPoints() == 130 );
    }
    
    SECTION( "Rogue: no bite ability" ) {
        try {
            r1->action(s1);
        } catch ( NoSpecialAbilityBite e ) {
            REQUIRE( r1->getName() == "ROGUE" );
            REQUIRE( r1->getHitPoints() == 160 );
            REQUIRE( r1->getMaxHitPoints() == 160 );
            REQUIRE( r1->getDamage() == 60 );
            REQUIRE( r1->isUndead() == false );
            REQUIRE( r1->getMagicPower() == 0);
            REQUIRE( r1->getState()->getSpellCost(4) == 0 );
            REQUIRE( r1->getState()->getSpellPower(4) == 0 );
        }
    }
    
    SECTION( "Rogue: no transform ability" ) {
        try {
            r1->action();
        } catch ( NoSpecialAbilityTransform e ) {
            REQUIRE( r1->getName() == "ROGUE" );
            REQUIRE( r1->getHitPoints() == 160 );
            REQUIRE( r1->getMaxHitPoints() == 160 );
            REQUIRE( r1->getDamage() == 60 );
            REQUIRE( r1->isUndead() == false );
            REQUIRE( r1->getMagicPower() == 0);
            REQUIRE( r1->getState()->getSpellCost(4) == 0 );
            REQUIRE( r1->getState()->getSpellPower(4) == 0 );
        }
    }
}
