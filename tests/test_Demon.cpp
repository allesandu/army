#include "../units/Demon.h"
#include "catch.hpp"

TEST_CASE( "test Demon", "[Demon]" ) {
    Demon* s1 = new Demon();
    
    REQUIRE( s1->getName() == "DEMON" );
    REQUIRE( s1->getHitPoints() == 155 );
    REQUIRE( s1->getMaxHitPoints() == 155);
    REQUIRE( s1->getDamage() == 55 );
    REQUIRE( s1->getMagicPower() == 0 );
}
