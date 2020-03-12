#include "../units/Werewolf.h"
#include "../units/Berserker.h"
#include "../units/Wizard.h"
#include "../units/Healer.h"
#include "../units/Priest.h"
#include "../units/Warlock.h"
#include "../units/Necromancer.h"
#include "../config.h"
#include "../Exceptions.h"
#include "catch.hpp"

TEST_CASE( "test Werewolf", "[Werewolf]" ) {
    Werewolf* ww1 = new Werewolf();
    
    Wizard* wiz1 = new Wizard();
    // Healer* h1 = new Healer();
    // Priest* p1 = new Priest(); 
    // Warlock* wl1 = new Warlock();
    // Necromancer* nm1 = new Necromancer();
    
    REQUIRE( ww1->getName() == "WEREWOLF" );
    REQUIRE( ww1->getHitPoints() == 180 );
    REQUIRE( ww1->getMaxHitPoints() == 180);
    REQUIRE( ww1->getDamage() == 90 );
    REQUIRE( ww1->isUndead() == false );
    REQUIRE( ww1->getMagicPower() == 0 );
    REQUIRE( ww1->getState()->getSpellCost(4) == 0 );
    REQUIRE( ww1->getState()->getSpellPower(4) == 0 );
    
    SECTION( "Werewolf: tranformation test Werewolf-Wolf" ) {
        ww1->transform();
        
        REQUIRE( ww1->getName() == "WOLF" );
        REQUIRE( ww1->getHitPoints() == 230 );
        REQUIRE( ww1->getMaxHitPoints() == 230);
        REQUIRE( ww1->getDamage() == 120 );
        REQUIRE( ww1->isUndead() == false );
        REQUIRE( ww1->getMagicPower() == 0 );
        REQUIRE( ww1->getState()->getSpellCost(4) == 0 );
        REQUIRE( ww1->getState()->getSpellPower(4) == 0 );
        
        ww1->transform();
        
        REQUIRE( ww1->getName() == "WEREWOLF" );
        REQUIRE( ww1->getHitPoints() == 180 );
        REQUIRE( ww1->getMaxHitPoints() == 180);
        REQUIRE( ww1->getDamage() == 90 );
        REQUIRE( ww1->isUndead() == false );
        REQUIRE( ww1->getMagicPower() == 0 );
        REQUIRE( ww1->getState()->getSpellCost(4) == 0 );
        REQUIRE( ww1->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Wolf_MagicAttack: taking more magicdamage") {
        
        wiz1->cast(SPELL::MAGICARROW,ww1);//25; 35
        
        REQUIRE( ww1->getHitPoints() == 155 );
        REQUIRE( wiz1->getHitPoints() == 80 );
        REQUIRE( wiz1->getMagicPower() == 65 );
        
        ww1->transform();
        
        wiz1->cast(SPELL::MAGICARROW,ww1);//25, 35
        
        REQUIRE( ww1->getHitPoints() == 200 );
        REQUIRE( wiz1->getHitPoints() == 80 );
        REQUIRE( wiz1->getMagicPower() == 30 );
        
        
        try {
            wiz1->cast(SPELL::RESTOREHP,ww1);//20, 30
        } catch ( OutOfMana e ) {
        REQUIRE( ww1->getHitPoints() == 210 );// Wizard only half power to Heal
        REQUIRE( wiz1->getHitPoints() == 80 );
        REQUIRE( wiz1->getMagicPower() == 0 );
        }
    }
}
