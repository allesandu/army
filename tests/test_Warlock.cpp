#include "../units/Warlock.h"
#include "catch.hpp"

TEST_CASE("test Warlock", "[Warlock]") {
    Warlock* wl1 = new Warlock();
    
    REQUIRE( wl1->getName() == "WARLOCK" );
    REQUIRE( wl1->getHitPoints() == 100 );
    REQUIRE( wl1->getMaxHitPoints() == 100 );
    REQUIRE( wl1->getDamage() == 40 );
    REQUIRE( wl1->getMagicPower() == 75 );
    REQUIRE( wl1->getState()->getHealIndex() == 100 );
    REQUIRE( wl1->getState()->getBattleIndex() == 100 );
}
