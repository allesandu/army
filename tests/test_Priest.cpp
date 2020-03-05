#include "../units/Priest.h"
#include "catch.hpp"

TEST_CASE("test Priest", "[Priest]") {
    Priest* p1 = new Priest();
    Priest* p2 = new Priest();
    
    REQUIRE( p1->getName() == "PRIEST" );
    REQUIRE( p1->getHitPoints() == 90 );
    REQUIRE( p1->getMaxHitPoints() == 90 );
    REQUIRE( p1->getDamage() == 25 );
    REQUIRE( p1->isUndead() == false );
    REQUIRE( p1->getMagicPower() == 80 );
    REQUIRE( p1->getState()->getSpellCost(3) == 40 );
    REQUIRE( p1->getState()->getSpellPower(3) == 35 );
    REQUIRE( p1->getState()->getHealIndex() == 100 );
    REQUIRE( p1->getState()->getBattleIndex() == 50 );
    
    SECTION("Priest: taking damage and points test") {
        for ( int i = 0; i < 10; i++ ) {
            p1->takeDamage(10);
        }
        REQUIRE( p1->getHitPoints() == 0 );
        
        for ( int i = 0; i < 10; i++ ) {
            p1->takeHitPoints(10);
        }
        REQUIRE( p1->getHitPoints() == 90 );
        
    }
    
    SECTION("Priest: BaseAttack test") {
        p1->attack(p2);
        
        REQUIRE( p1->getHitPoints() == 78 );
        REQUIRE( p2->getHitPoints() == 65 );
    }
}
