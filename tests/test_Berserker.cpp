#include "../units/Berserker.h"
#include "../units/Wizard.h"
#include "../units/Healer.h"
#include "../units/Priest.h"
#include "../units/Warlock.h"
#include "../units/Necromancer.h"
#include "../config.h"
#include "../Exceptions.h"
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
    
    
    SECTION("Berserker_MagicAttack: without getting magicdamage") {
        try {
            wiz1->cast(SPELL::MAGICARROW, b1);
        } catch ( EnemyMagicResistant e ) {
            REQUIRE( b1->getHitPoints() == 140 );
            REQUIRE( wiz1->getHitPoints() == 80 );
            REQUIRE( wiz1->getMagicPower() == 100 );
        }
        
        try {
            h1->cast(SPELL::MAGICARROW, b1);
        } catch ( EnemyMagicResistant e ) {
        REQUIRE( b1->getHitPoints() == 140 );
        REQUIRE( h1->getHitPoints() == 75 );
        REQUIRE( h1->getMagicPower() == 90 );
        }
        
        try {
            p1->cast(SPELL::MAGICARROW, b1);
        } catch ( EnemyMagicResistant e ) {
        REQUIRE( b1->getHitPoints() == 140 );
        REQUIRE( p1->getHitPoints() == 90 );
        REQUIRE( p1->getMagicPower() == 80 );
        }
        
        try {
            wl1->cast(SPELL::MAGICARROW, b1);
        } catch ( EnemyMagicResistant e ) {
        REQUIRE( b1->getHitPoints() == 140 );
        REQUIRE( wl1->getHitPoints() == 100 );
        REQUIRE( wl1->getMagicPower() == 75 );
        }
        
        try {
            nm1->cast(SPELL::MAGICARROW, b1);
        } catch ( EnemyMagicResistant e ) {
        REQUIRE( b1->getHitPoints() == 140 );
        REQUIRE( nm1->getHitPoints() == 190 );
        REQUIRE( nm1->getMagicPower() == 130 );
        }
    }
}
