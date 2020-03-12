#include "../units/Berserker.h"
#include "../units/Wizard.h"
#include "../units/Healer.h"
#include "../units/Priest.h"
#include "../units/Warlock.h"
#include "../units/Necromancer.h"
#include "../congig.h"
#include "catch.hpp"

TEST_CASE("test Berserker", "[Berserker]") {
    Berserker* b1 = new Berserker();
    
    Wizard* wiz1 = new Wizard();
    Healer* h1 = new Healer();
    Priest* p1 = new Priest(); 
    Warlock* wl1 = new Warlock();
    Necromancer* nm1 = new Necromancer();
    
    REQUIRE( b1->getName() == "BERSERKER" );
    REQUIRE( b1->getHitPoints() == 140 );
    REQUIRE( b1->getMaxHitPoints() == 140 );
    REQUIRE( b1->getDamage() == 70 );
    REQUIRE( b1->isUndead() == false );
    REQUIRE( b1->getMagicPower() == 0 );
    REQUIRE( b1->getState()->getSpellCost(4) == 0 );
    REQUIRE( b1->getState()->getSpellPower(4) == 0 );
    
    wiz1->cast(SPELL::MAGICARROW, b1);// dmg25, cost35
    h1->cast(SPELL::MAGICARROW, b1);
    p1->cast(SPELL::MAGICARROW, b1);
    wl1->cast(SPELL::MAGICARROW, b1);
    nm1->cast(SPELL::MAGICARROW, b1);
    
    h1->cast(SPELL::RESTOREHP, b1);cost20
    
    SECTION("Berserker_MagicAttack: without getting magicdamage") {
    
        REQUIRE( b1->getHitPoints() == 140 );
        
        REQUIRE( wiz1->getHitPoints() == 80 );
        REQUIRE( wiz1->getMagicPower() == 65 );
        
        REQUIRE( h1->getHitPoints() == 75 );
        REQUIRE( h1->getMagicPower() == 35 );
        
        REQUIRE( p1->getHitPoints() == 90 );
        REQUIRE( p1->getMagicPower() == 45 );
        
        REQUIRE( wl1->getHitPoints() == 100 );
        REQUIRE( wl1->getMagicPower() == 40 );
        
        REQUIRE( nm1->getHitPoints() == 190 );
        REQUIRE( nm1->getMagicPower() == 95 );
    }
}
