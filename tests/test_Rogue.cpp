#include "../units/Rogue.h"
#include "catch.hpp"

TEST_CASE("test Rogue", "[Rogue]") {
    Rogue* r1 = new Rogue();
    
    REQUIRE( r1->getName() == "ROGUE" );
    REQUIRE( r1->getHitPoints() == 160 );
    REQUIRE( r1->getMaxHitPoints() == 160 );
    REQUIRE( r1->getDamage() == 60 );
    REQUIRE( r1->isUndead() == false );
    REQUIRE( r1->getMagicPower() == 0);
    REQUIRE( r1->getState()->getSpellCost(4) == 0 );
    REQUIRE( r1->getState()->getSpellPower(4) == 0 );
}
