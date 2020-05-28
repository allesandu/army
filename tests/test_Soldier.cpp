#include "../units/Soldier.h"
#include "catch.hpp"

TEST_CASE( "test Soldier", "[Soldier]" ) {
    Soldier* s1 = new Soldier();
    Soldier* s2 = new Soldier();
    
    REQUIRE( s1->getName() == "SOLDIER" );
    REQUIRE( s1->getHitPoints() == 150 );
    REQUIRE( s1->getMaxHitPoints() == 150);
    REQUIRE( s1->getDamage() == 50 );
    REQUIRE( s1->isUndead() == false );
    REQUIRE( s1->getMagicPower() == 0 );
    REQUIRE( s1->getState()->getSpellCost(4) == 0 );
    REQUIRE( s1->getState()->getSpellPower(4) == 0 );
    
    SECTION( "Soldier_my_test: no influence between section" ) {
        s1->attack(s2);
        REQUIRE( s1->getHitPoints() == 125 );
        REQUIRE( s2->getHitPoints() == 100 );
    }
    
    SECTION( "Soldier: no bite ability" ) {
        try {
            s1->action(s2);
        } catch ( NoSpecialAbilityBite e ) {
            REQUIRE( s2->getName() == "SOLDIER" );
            REQUIRE( s2->getHitPoints() == 150 );
            REQUIRE( s2->getMaxHitPoints() == 150);
            REQUIRE( s2->getDamage() == 50 );
            REQUIRE( s2->isUndead() == false );
            REQUIRE( s2->getMagicPower() == 0 );
            REQUIRE( s2->getState()->getSpellCost(4) == 0 );
            REQUIRE( s2->getState()->getSpellPower(4) == 0 );
        }
    }
    
    SECTION( "Soldier: no transform ability" ) {
        try {
            s2->action();
        } catch ( NoSpecialAbilityTransform e ) {
            REQUIRE( s2->getName() == "SOLDIER" );
            REQUIRE( s2->getHitPoints() == 150 );
            REQUIRE( s2->getMaxHitPoints() == 150);
            REQUIRE( s2->getDamage() == 50 );
            REQUIRE( s2->isUndead() == false );
            REQUIRE( s2->getMagicPower() == 0 );
            REQUIRE( s2->getState()->getSpellCost(4) == 0 );
            REQUIRE( s2->getState()->getSpellPower(4) == 0 );
        }
    }
    
}
