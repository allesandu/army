#include "../units/Vampire.h"
#include "../units/Soldier.h"
#include "../units/Rogue.h"
#include "../units/Berserker.h"
#include "../units/Vampire.h"
#include "../units/Werewolf.h"
#include "../units/Demon.h"
#include "catch.hpp"

TEST_CASE( "test Vampire", "[Vampire]" ) {
    Vampire* v1 = new Vampire();
    
    Soldier* s1 = new Soldier();
    
    REQUIRE( v1->getName() == "VAMPIRE" );
    REQUIRE( v1->getHitPoints() == 200 );
    REQUIRE( v1->getMaxHitPoints() == 200);
    REQUIRE( v1->getDamage() == 100 );
    REQUIRE( v1->isUndead() == true );
    REQUIRE( v1->getMagicPower() == 0 );
    REQUIRE( v1->getState()->getSpellCost(4) == 0 );
    REQUIRE( v1->getState()->getSpellPower(4) == 0 );
    
    SECTION("Vampire_Attack: get some addition HP after attack/counterattack") {
        v1->takeDamage(100);
        REQUIRE( v1->getHitPoints() == 100 );
    
        v1->attack(s1);// v1_hp = {rest_hp}100+{v1_add)0.1*150 = 115 -{s1_ca}25 + {v1_add}0.1*50 = 95
        REQUIRE( v1->getHitPoints() == 95 );//v1_attack=200; v1_ca = 50(100/2)
        REQUIRE( s1->getHitPoints() == 50 );//s1_attack=150;s1_ca=25(50/2)
    }
    
    SECTION( "Vampire: no transform ability" ) {
        try {
            v1->action();
        } catch ( NoSpecialAbilityTransform e ) {
            REQUIRE( v1->getName() == "VAMPIRE" );
            REQUIRE( v1->getHitPoints() == 200 );
            REQUIRE( v1->getMaxHitPoints() == 200);
            REQUIRE( v1->getDamage() == 100 );
            REQUIRE( v1->isUndead() == true );
            REQUIRE( v1->getMagicPower() == 0 );
            REQUIRE( v1->getState()->getSpellCost(4) == 0 );
            REQUIRE( v1->getState()->getSpellPower(4) == 0 );
        }
    }
}
