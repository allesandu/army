#include "../units/Berserker.h"
#include "catch.hpp"

TEST_CASE("test Berserker", "[Berserker]") {
    Berserker* r1 = new Berserker();
    
    REQUIRE( r1->getName() == "BERSERKER" );
    REQUIRE( r1->getHitPoints() == 140 );
    REQUIRE( r1->getMaxHitPoints() == 140 );
    REQUIRE( r1->getDamage() == 70 );
    REQUIRE( r1->getMagicPower() == 0);
}
