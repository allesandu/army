#include "../units/Wizard.h"
#include "../units/Soldier.h"
#include "../units/Berserker.h"
#include "../units/Werewolf.h"
#include "../units/Necromancer.h"
#include "../config.h"
#include "catch.hpp"

TEST_CASE("test Wizard", "[Wizard]") {
    Wizard* wiz1 = new Wizard();
    Soldier* s1 = new Soldier();
    
    Berserker* b1 = new Berserker();
    Werewolf* ww1 = new Werewolf();
    Necromancer* nm1 = new Necromancer();
    
    REQUIRE( wiz1->getName() == "WIZARD" );
    REQUIRE( wiz1->getHitPoints() == 80 );
    REQUIRE( wiz1->getMaxHitPoints() == 80 );
    REQUIRE( wiz1->getDamage() == 30 );
    REQUIRE( wiz1->getMagicPower() == 100 );
    REQUIRE( wiz1->getState()->getSpellCost(SPELL::RESTOREHP) == 30 );
    REQUIRE( wiz1->getState()->getSpellPower(SPELL::RESTOREHP) == 20 );
    REQUIRE( wiz1->getState()->getSpellCost(SPELL::MAGICARROW) == 35 );
    REQUIRE( wiz1->getState()->getSpellPower(SPELL::MAGICARROW) == 25 );
    REQUIRE( wiz1->getState()->getSpellCost(SPELL::FIREBALL) == 40 );
    REQUIRE( wiz1->getState()->getSpellPower(SPELL::FIREBALL) == 35 );
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
            REQUIRE( wiz1->getState()->getSpellCost(SPELL::RESTOREHP) == 30 );
            REQUIRE( wiz1->getState()->getSpellPower(SPELL::RESTOREHP) == 20 );
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
            REQUIRE( wiz1->getState()->getSpellCost(SPELL::RESTOREHP) == 30 );
            REQUIRE( wiz1->getState()->getSpellPower(SPELL::RESTOREHP) == 20 );
            REQUIRE( wiz1->getState()->getHealIndex() == 50 );
            REQUIRE( wiz1->getState()->getBattleIndex() == 100 );
        }
    }
    
    SECTION( "Wizard: cast test" ) {
        wiz1->cast(SPELL::MAGICARROW, s1);
        // wiz1->attack(s1); // for attack
        
        REQUIRE( wiz1->getHitPoints() == 80 ); // 55 for attack
        REQUIRE( wiz1->getMagicPower() == 65 ); // 100 for attack
        REQUIRE( s1->getHitPoints() == 125 );// 120 for attack
        
        wiz1->cast(SPELL::RESTOREHP, s1);
        
        REQUIRE( wiz1->getHitPoints() == 80 );
        REQUIRE( wiz1->getMagicPower() == 35 );
        REQUIRE( s1->getHitPoints() == 135 ); // healSpell only 1/2 power!
        
        try {
            wiz1->cast(SPELL::FIREBALL, s1);
        } catch ( OutOfMana e ) {
            REQUIRE( wiz1->getHitPoints() == 80 );
            REQUIRE( wiz1->getMagicPower() ==35 );
            REQUIRE( s1->getHitPoints() == 135 );
        }
    }
    
}