#include "../units/Necromancer.h"
#include "catch.hpp"

TEST_CASE("test Necromancer", "[Necromancer]") {
    Necromancer* nm1 = new Necromancer();
    
    REQUIRE( nm1->getName() == "NECROMANCER" );
    REQUIRE( nm1->getHitPoints() == 190 );
    REQUIRE( nm1->getMaxHitPoints() == 190 );
    REQUIRE( nm1->getDamage() == 110 );
    REQUIRE( nm1->getMagicPower() == 130 );
    REQUIRE( nm1->getState()->getSpellCost(4) == 20 );
    REQUIRE( nm1->getState()->getSpellPower(4) == 20 );
    REQUIRE( nm1->getState()->getHealIndex() == 100 );
    REQUIRE( nm1->getState()->getBattleIndex() == 100 );
}
