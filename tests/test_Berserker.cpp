#include "../units/Berserker.h"
#include "catch.hpp"

TEST_CASE("test Berserker", "[Berserker]") {
    Berserker* b1 = new Berserker();
    
    REQUIRE( b1->getName() == "BERSERKER" );
    REQUIRE( b1->getHitPoints() == 140 );
    REQUIRE( b1->getMaxHitPoints() == 140 );
    REQUIRE( b1->getDamage() == 70 );
    REQUIRE( b1->getMagicPower() == 0 );
    REQUIRE( b1->getState()->getSpellCost(4) == 0 );
    REQUIRE( b1->getState()->getSpellPower(4) == 0 );
}
