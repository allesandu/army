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
    // Berserker* b1 = new Berserker();
    // Vampire* v1 = new Vampire();
    // Demon* d1 = new Demon();
    // Werewolf* ww1 = new Werewolf();
    
    REQUIRE( v1->getName() == "VAMPIRE" );
    REQUIRE( v1->getHitPoints() == 200 );
    REQUIRE( v1->getMaxHitPoints() == 200);
    REQUIRE( v1->getDamage() == 100 );
    REQUIRE( v1->isUndead() == true );
    REQUIRE( v1->getMagicPower() == 0 );
    REQUIRE( v1->getState()->getSpellCost(4) == 0 );
    REQUIRE( v1->getState()->getSpellPower(4) == 0 );
    
    v1->takeDamage(100);
    REQUIRE( v1->getHitPoints() == 100 );
    
    v1->attack(s1);
    // r1->attack(b1);
    // r1->attack(v1);
    // r1->attack(d1);
    // r1->attack(ww1);
    
    SECTION("Vampire_Attack: get some addition HP after attack/counterattack") {
    
        REQUIRE( v1->getHitPoints() == 95 );//a=200; ca = 50(100/2)
        REQUIRE( s1->getHitPoints() == 50 );//a=150;ca=25(50/2)
        
        // REQUIRE( b1->getHitPoints() == 80 );
        // REQUIRE( v1->getHitPoints() == 140 );
        // REQUIRE( d1->getHitPoints() == 95 );
        // REQUIRE( ww1->getHitPoints() == 120 );
    }
}
