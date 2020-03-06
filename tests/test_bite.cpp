#include "../units/Soldier.h"
#include "../units/Vampire.h"
#include "catch.hpp"

TEST_CASE("test Vampire_bite", "[bite]") {
    Soldier* s1 = new Soldier("SOLDIER", 150, 60);
    Soldier* s2 = new Soldier("SOLDIER", 150, 50);
    Vampire* v1 = new Vampire("VAMPIRE", 200, 100);
    
    SECTION("Vampire_bite: transformation into Vampire") {
        v1->abilityOuter(s1);
        
    REQUIRE( s1->getName() == "VAMPIRE" );
    REQUIRE( s1->getHitPoints() == 200 );
    REQUIRE( s1->getMaxHitPoints() == 200);
    REQUIRE( s1->getDamage() == 100 );
    REQUIRE( s1->isUndead() == true );
    REQUIRE( s1->getMagicPower() == 0 );
    REQUIRE( s1->getState()->getSpellCost(4) == 0 );
    REQUIRE( s1->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Vampire_bite: transformation into Vampire, after been bitten") {
        s1->abilityOuter(s2);
        
    REQUIRE( s2->getState()->getName() == "VAMPIRE" );
    REQUIRE( s2->getHitPoints() == 200 );
    REQUIRE( s2->getMaxHitPoints() == 200);
    REQUIRE( s2->getDamage() == 100 );
    REQUIRE( s2->isUndead() == true );
    REQUIRE( s2->getMagicPower() == 0 );
    REQUIRE( s2->getState()->getSpellCost(4) == 0 );
    REQUIRE( s2->getState()->getSpellPower(4) == 0 );
    }
}