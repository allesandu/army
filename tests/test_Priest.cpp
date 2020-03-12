#include "../units/Priest.h"
#include "../units/Werewolf.h"
#include "../units/Wizard.h"
#include "../units/Healer.h"
#include "../units/Priest.h"
#include "../units/Warlock.h"
#include "../units/Necromancer.h"
#include "../config.h"
#include "../Exceptions.h"
#include "catch.hpp"

TEST_CASE("test Priest", "[Priest]") {
    Priest* p1 = new Priest();
    Priest* p2 = new Priest();
    
    // Wizard* wiz1 = new Wizard();
    // Healer* h1 = new Healer();
    // Priest* p1 = new Priest(); 
    Warlock* wl1 = new Warlock();
    Necromancer* nm1 = new Necromancer();
    
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
        int damage = 10;
        int iteration = p1->getHitPoints() / damage;
        
        for ( int i = 0; i < iteration; i++ ) {
            p1->takeDamage(damage);
        }
        REQUIRE( p1->getHitPoints() == 0 );
        
        try {
            p1->takeDamage(damage);
        } catch ( UnitIsDead e ) {
            REQUIRE( p1->getHitPoints() == 0 );
        }
        
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
    
    SECTION("Priest_MagicAttack_1: heal-100%, battle- 50%, x2 for Undead") {
        
        p1->cast(SPELL::MAGICARROW,nm1);//25; 35
        
        REQUIRE( nm1->getHitPoints() == 165 );//battle- 50%, x2 for Undead
        REQUIRE( p1->getHitPoints() == 90 );
        REQUIRE( p1->getMagicPower() == 45 );
        
        p1->cast(SPELL::RESTOREHP,nm1);//20, 30
        
        REQUIRE( nm1->getHitPoints() == 185 );
        REQUIRE( p1->getHitPoints() == 90 );
        REQUIRE( p1->getMagicPower() == 15 );
        
        try {
            p1->cast(SPELL::MAGICARROW,nm1);//25, 35
        } catch ( OutOfMana e ) {
        REQUIRE( nm1->getHitPoints() == 185 );
        REQUIRE( p1->getHitPoints() == 90 );
        REQUIRE( p1->getMagicPower() == 15 );
        }
    }
    
        SECTION("Priest_MagicAttack_2: heal-100%") {
        
        p2->cast(SPELL::FIREBALL,wl1);//35; 40
        
        REQUIRE( wl1->getHitPoints() == 83 );//battle- 50%
        REQUIRE( p2->getHitPoints() == 90 );
        REQUIRE( p2->getMagicPower() == 40 );
        
        p2->cast(SPELL::RESTOREHP,wl1);//20, 30
        
        REQUIRE( wl1->getHitPoints() == 100 );
        REQUIRE( p2->getHitPoints() == 90 );
        REQUIRE( p2->getMagicPower() == 10 );
        
        try {
            p2->cast(SPELL::MAGICARROW,wl1);//25, 35
        } catch ( OutOfMana e ) {
        REQUIRE( wl1->getHitPoints() == 100 );
        REQUIRE( p2->getHitPoints() == 90 );
        REQUIRE( p2->getMagicPower() == 10 );
        }
    }
}