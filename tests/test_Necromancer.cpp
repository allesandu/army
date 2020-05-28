#include "../units/Necromancer.h"
#include "../units/Soldier.h"
#include "catch.hpp"

TEST_CASE("test Necromancer", "[Necromancer]") {
    Necromancer* nm1 = new Necromancer();
    Soldier* s1 = new Soldier();
    
    REQUIRE( nm1->getName() == "NECROMANCER" );
    REQUIRE( nm1->getHitPoints() == 190 );
    REQUIRE( nm1->getMaxHitPoints() == 190 );
    REQUIRE( nm1->getDamage() == 110 );
    REQUIRE( nm1->isUndead() == true );
    REQUIRE( nm1->getMagicPower() == 130 );
    REQUIRE( nm1->getState()->getSpellCost(4) == 20 );
    REQUIRE( nm1->getState()->getSpellPower(4) == 20 );
    REQUIRE( nm1->getState()->getHealIndex() == 100 );
    REQUIRE( nm1->getState()->getBattleIndex() == 100 );
    
    SECTION( "Necromancer: no bite ability" ) {
        try {
            nm1->action(s1);
        } catch ( NoSpecialAbilityBite e ) {
            REQUIRE( nm1->getName() == "NECROMANCER" );
            REQUIRE( nm1->getHitPoints() == 190 );
            REQUIRE( nm1->getMaxHitPoints() == 190 );
            REQUIRE( nm1->getDamage() == 110 );
            REQUIRE( nm1->isUndead() == true );
            REQUIRE( nm1->getMagicPower() == 130 );
            REQUIRE( nm1->getState()->getSpellCost(4) == 20 );
            REQUIRE( nm1->getState()->getSpellPower(4) == 20 );
            REQUIRE( nm1->getState()->getHealIndex() == 100 );
            REQUIRE( nm1->getState()->getBattleIndex() == 100 );
        }
    }
    
    SECTION( "Necromancer: no transform ability" ) {
        try {
            nm1->action();
        } catch ( NoSpecialAbilityTransform e ) {
            REQUIRE( nm1->getName() == "NECROMANCER" );
            REQUIRE( nm1->getHitPoints() == 190 );
            REQUIRE( nm1->getMaxHitPoints() == 190 );
            REQUIRE( nm1->getDamage() == 110 );
            REQUIRE( nm1->isUndead() == true );
            REQUIRE( nm1->getMagicPower() == 130 );
            REQUIRE( nm1->getState()->getSpellCost(4) == 20 );
            REQUIRE( nm1->getState()->getSpellPower(4) == 20 );
            REQUIRE( nm1->getState()->getHealIndex() == 100 );
            REQUIRE( nm1->getState()->getBattleIndex() == 100 );
        }
    }
    
}
