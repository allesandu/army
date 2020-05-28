#include "../units/Healer.h"
#include "../units/Soldier.h"
#include "catch.hpp"

TEST_CASE("test Healer", "[Healer]") {
    Healer* h1 = new Healer();
    Soldier* s1 = new Soldier();
    
    REQUIRE( h1->getName() == "HEALER" );
    REQUIRE( h1->getHitPoints() == 75 );
    REQUIRE( h1->getMaxHitPoints() == 75 );
    REQUIRE( h1->getDamage() == 35 );
    REQUIRE( h1->getMagicPower() == 90 );
    REQUIRE( h1->getState()->getSpellCost(2) == 35 );
    REQUIRE( h1->getState()->getSpellPower(2) == 25 );
    REQUIRE( h1->getState()->getHealIndex() == 100 );
    REQUIRE( h1->getState()->getBattleIndex() == 50 );
    
    SECTION( "Healer: no bite ability" ) {
        try {
            h1->action(s1);
        } catch ( NoSpecialAbilityBite e ) {
            
        }
    }
    
    SECTION( "Healer: no transform ability" ) {
        try {
            h1->action();
        } catch ( NoSpecialAbilityTransform e ) {
            
        }
    }
    
}
