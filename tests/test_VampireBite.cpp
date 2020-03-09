#include "../units/Soldier.h"
#include "../units/Rogue.h"
#include "../units/Berserker.h"
#include "../units/Vampire.h"
#include "../units/Werewolf.h"
// #include "../units/Wolf.h"
#include "catch.hpp"

TEST_CASE("test Vampire_bite", "[bite]") {
    Vampire* v1 = new Vampire();
    
    Soldier* s1 = new Soldier();
    Soldier* s2 = new Soldier();
    Rogue* r1 = new Rogue();
    Rogue* r2 = new Rogue();
    Berserker* b1 = new Berserker();
    Berserker* b2 = new Berserker();
    Werewolf* ww1 = new Werewolf();
    
    SECTION("Vampire_bite: transformation from Soldier") {
        v1->bite(s1);
        s1->bite(s2);
        
        REQUIRE( s1->getName() == "VAMPIRE" );
        REQUIRE( s1->getHitPoints() == 200 );
        REQUIRE( s1->getMaxHitPoints() == 200);
        REQUIRE( s1->getDamage() == 100 );
        REQUIRE( s1->isUndead() == true );
        REQUIRE( s1->getMagicPower() == 0 );
        REQUIRE( s1->getState()->getSpellCost(4) == 0 );
        REQUIRE( s1->getState()->getSpellPower(4) == 0 );
    
        REQUIRE( s2->getName() == "VAMPIRE" );
        REQUIRE( s2->getHitPoints() == 200 );
        REQUIRE( s2->getMaxHitPoints() == 200);
        REQUIRE( s2->getDamage() == 100 );
        REQUIRE( s2->isUndead() == true );
        REQUIRE( s2->getMagicPower() == 0 );
        REQUIRE( s2->getState()->getSpellCost(4) == 0 );
        REQUIRE( s2->getState()->getSpellPower(4) == 0 );
    
    }
    
    SECTION("Vampire_bite: transformation from Rogue") {
        v1->bite(r1);
        r1->bite(r2);
        
        REQUIRE( r1->getName() == "VAMPIRE" );
        REQUIRE( r1->getHitPoints() == 200 );
        REQUIRE( r1->getMaxHitPoints() == 200);
        REQUIRE( r1->getDamage() == 100 );
        REQUIRE( r1->isUndead() == true );
        REQUIRE( r1->getMagicPower() == 0 );
        REQUIRE( r1->getState()->getSpellCost(4) == 0 );
        REQUIRE( r1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( r2->getName() == "VAMPIRE" );
        REQUIRE( r2->getHitPoints() == 200 );
        REQUIRE( r2->getMaxHitPoints() == 200);
        REQUIRE( r2->getDamage() == 100 );
        REQUIRE( r2->isUndead() == true );
        REQUIRE( r2->getMagicPower() == 0 );
        REQUIRE( r2->getState()->getSpellCost(4) == 0 );
        REQUIRE( r2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Vampire_bite: transformation from Berserker") {
        v1->bite(b1);
        b1->bite(b2);
        
        REQUIRE( b1->getName() == "VAMPIRE" );
        REQUIRE( b1->getHitPoints() == 200 );
        REQUIRE( b1->getMaxHitPoints() == 200);
        REQUIRE( b1->getDamage() == 100 );
        REQUIRE( b1->isUndead() == true );
        REQUIRE( b1->getMagicPower() == 0 );
        REQUIRE( b1->getState()->getSpellCost(4) == 0 );
        REQUIRE( b1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( b2->getName() == "VAMPIRE" );
        REQUIRE( b2->getHitPoints() == 200 );
        REQUIRE( b2->getMaxHitPoints() == 200);
        REQUIRE( b2->getDamage() == 100 );
        REQUIRE( b2->isUndead() == true );
        REQUIRE( b2->getMagicPower() == 0 );
        REQUIRE( b2->getState()->getSpellCost(4) == 0 );
        REQUIRE( b2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Vampire_bite: transformation from Werewolf") {
        v1->bite(ww1);
        
        
        REQUIRE( ww1->getName() == "WEREWOLF" );
        REQUIRE( ww1->getHitPoints() == 180 );
        REQUIRE( ww1->getMaxHitPoints() == 180);
        REQUIRE( ww1->getDamage() == 90 );
        REQUIRE( ww1->isUndead() == false );
        REQUIRE( ww1->getMagicPower() == 0 );
        REQUIRE( ww1->getState()->getSpellCost(4) == 0 );
        REQUIRE( ww1->getState()->getSpellPower(4) == 0 );
        
        ww1->transform();
        v1->bite(ww1);
        
        REQUIRE( ww1->getName() == "WOLF" );
        REQUIRE( ww1->getHitPoints() == 230 );
        REQUIRE( ww1->getMaxHitPoints() == 230);
        REQUIRE( ww1->getDamage() == 120 );
        REQUIRE( ww1->isUndead() == false );
        REQUIRE( ww1->getMagicPower() == 0 );
        REQUIRE( ww1->getState()->getSpellCost(4) == 0 );
        REQUIRE( ww1->getState()->getSpellPower(4) == 0 );
    }
}
