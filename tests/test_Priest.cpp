#include "../units/Priest.h"
#include "catch.hpp"

TEST_CASE("test Priest", "[Priest]") {
    Priest* p1 = new Priest();
    
    REQUIRE( p1->getName() == "PRIEST" );
    REQUIRE( p1->getHitPoints() == 90 );
    REQUIRE( p1->getMaxHitPoints() == 90 );
    REQUIRE( p1->getDamage() == 25 );
    REQUIRE( p1->getMagicPower() == 80 );
    REQUIRE( p1->getState()->getHealIndex() == 100 );
    REQUIRE( p1->getState()->getBattleIndex() == 50 );
}
