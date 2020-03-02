#include "../units/Demon.h"
#include "catch.hpp"

TEST_CASE( "test Demon", "[Demon]" ) {
    Demon* d1 = new Demon();
    
    REQUIRE( d1->getName() == "DEMON" );
    REQUIRE( d1->getHitPoints() == 155 );
    REQUIRE( d1->getMaxHitPoints() == 155);
    REQUIRE( d1->getDamage() == 55 );
    REQUIRE( d1->getMagicPower() == 0 );
    REQUIRE( d1->getState()->getSpellCost(4) == 0 );
    REQUIRE( d1->getState()->getSpellPower(4) == 0 );
}
