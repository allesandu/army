#include "../units/Wizard.h"
#include "catch.hpp"

TEST_CASE("test Wizard", "[Wizard]") {
    Wizard* wiz1 = new Wizard();
    
    REQUIRE( wiz1->getName() == "WIZARD" );
    REQUIRE( wiz1->getHitPoints() == 80 );
    REQUIRE( wiz1->getMaxHitPoints() == 80 );
    REQUIRE( wiz1->getDamage() == 30 );
    REQUIRE( wiz1->getMagicPower() == 100 );
    REQUIRE( wiz1->getState()->getHealIndex() == 50 );
    REQUIRE( wiz1->getState()->getBattleIndex() == 100 );
}