#include "../units/Soldier.h"
#include "catch.hpp"

TEST_CASE( "test Soldier", "[Soldier]" ) {
    Soldier* s1 = new Soldier();
    
    REQUIRE( s1->getName() == "SOLDIER" );
    REQUIRE( s1->getHitPoints() == 150 );
    REQUIRE( s1->getMaxHitPoints() == 150);
    REQUIRE( s1->getDamage() == 50 );
    REQUIRE( s1->getMagicPower() == 0 );
    REQUIRE( s1->getState()->getSpellCost(4) == 0 );
    REQUIRE( s1->getState()->getSpellPower(4) == 0 );
}
