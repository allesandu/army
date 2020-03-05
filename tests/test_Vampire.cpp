#include "../units/Vampire.h"
#include "catch.hpp"

TEST_CASE( "test Vampire", "[Vampire]" ) {
    Vampire* v1 = new Vampire();
    
    REQUIRE( v1->getName() == "VAMPIRE" );
    REQUIRE( v1->getHitPoints() == 200 );
    REQUIRE( v1->getMaxHitPoints() == 200);
    REQUIRE( v1->getDamage() == 100 );
    REQUIRE( v1->isUndead() == true );
    REQUIRE( v1->getMagicPower() == 0 );
    REQUIRE( v1->getState()->getSpellCost(4) == 0 );
    REQUIRE( v1->getState()->getSpellPower(4) == 0 );
}
