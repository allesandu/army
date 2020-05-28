#include "../units/Wizard.h"
#include "../units/Soldier.h"
#include "catch.hpp"

TEST_CASE("test Wizard", "[Wizard]") {
    Wizard* wiz1 = new Wizard();
    Soldier* s1 = new Soldier();
    
    REQUIRE( wiz1->getName() == "WIZARD" );
    REQUIRE( wiz1->getHitPoints() == 80 );
    REQUIRE( wiz1->getMaxHitPoints() == 80 );
    REQUIRE( wiz1->getDamage() == 30 );
    REQUIRE( wiz1->getMagicPower() == 100 );
    REQUIRE( wiz1->getState()->getSpellCost(1) == 30 );
    REQUIRE( wiz1->getState()->getSpellPower(1) == 20 );
    REQUIRE( wiz1->getState()->getHealIndex() == 50 );
    REQUIRE( wiz1->getState()->getBattleIndex() == 100 );
    
    SECTION( "Wizard: no bite ability" ) {
        try {
            wiz1->action(s1);
        } catch ( NoSpecialAbilityBite e ) {
            REQUIRE( wiz1->getName() == "WIZARD" );
            REQUIRE( wiz1->getHitPoints() == 80 );
            REQUIRE( wiz1->getMaxHitPoints() == 80 );
            REQUIRE( wiz1->getDamage() == 30 );
            REQUIRE( wiz1->getMagicPower() == 100 );
            REQUIRE( wiz1->getState()->getSpellCost(1) == 30 );
            REQUIRE( wiz1->getState()->getSpellPower(1) == 20 );
            REQUIRE( wiz1->getState()->getHealIndex() == 50 );
            REQUIRE( wiz1->getState()->getBattleIndex() == 100 );
        }
    }
    
    SECTION( "Wizard: no transform ability" ) {
        try {
            wiz1->action();
        } catch ( NoSpecialAbilityTransform e ) {
            REQUIRE( wiz1->getName() == "WIZARD" );
            REQUIRE( wiz1->getHitPoints() == 80 );
            REQUIRE( wiz1->getMaxHitPoints() == 80 );
            REQUIRE( wiz1->getDamage() == 30 );
            REQUIRE( wiz1->getMagicPower() == 100 );
            REQUIRE( wiz1->getState()->getSpellCost(1) == 30 );
            REQUIRE( wiz1->getState()->getSpellPower(1) == 20 );
            REQUIRE( wiz1->getState()->getHealIndex() == 50 );
            REQUIRE( wiz1->getState()->getBattleIndex() == 100 );
        }
    }
    
}