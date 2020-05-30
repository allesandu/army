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
    
    SECTION( "Werewolf: tranformation test with hpLegacy" ) {
        int dmg = 50;
        int ind = 100 * ( ww1->getHitPoints() - dmg ) / ww1->getMaxHitPoints();
        
        ww1->takeDamage(dmg);
        ww1->action();
        
        int newHp = ind * ww1->getMaxHitPoints() / 100;
        
        REQUIRE( ww1->getName() == "WOLF" );
        REQUIRE( ww1->getHitPoints() == newHp ); // 165
        REQUIRE( ww1->getMaxHitPoints() == 230 );
        REQUIRE( ww1->getDamage() == 120 );
        REQUIRE( ww1->isUndead() == false );
        REQUIRE( ww1->getMagicPower() == 0 );
        REQUIRE( ww1->getState()->getSpellCost(4) == 0 );
        REQUIRE( ww1->getState()->getSpellPower(4) == 0 );
        
        ww1->action();
        
        REQUIRE( ww1->getName() == "WEREWOLF" );
        REQUIRE( ww1->getHitPoints() == 127 ); // 127 = (int)((int)(165*100/230) * 180 / 100)
        REQUIRE( ww1->getMaxHitPoints() == 180 );
        REQUIRE( ww1->getDamage() == 90 );
        REQUIRE( ww1->isUndead() == false );
        REQUIRE( ww1->getMagicPower() == 0 );
        REQUIRE( ww1->getState()->getSpellCost(4) == 0 );
        REQUIRE( ww1->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Wolf_MagicAttack: taking more magicdamage") {
        
        wiz1->cast(SPELL::MAGICARROW,ww1);//25; 35
        
        REQUIRE( ww1->getName() == "WEREWOLF" );
        REQUIRE( ww1->getHitPoints() == 155 );
        REQUIRE( wiz1->getHitPoints() == 80 );
        REQUIRE( wiz1->getMagicPower() == 65 );
        
        ww1->action();
        
        REQUIRE( ww1->getHitPoints() == 197 ); // 197 = (int)((int)(155*100/230) * 180 / 100)
        
        wiz1->cast(SPELL::MAGICARROW,ww1);//25, 35
        
        REQUIRE( ww1->getName() == "WOLF" );
        REQUIRE( ww1->getHitPoints() == 167 ); // 167 - (int) 25*1,2 = 197 - 30
        REQUIRE( wiz1->getHitPoints() == 80 );
        REQUIRE( wiz1->getMagicPower() == 30 );
        
        
        try {
            wiz1->cast(SPELL::RESTOREHP,ww1);//20, 30
        } catch ( OutOfMana e ) {
        REQUIRE( ww1->getHitPoints() == 177 );// Wizard only half power to Heal
        REQUIRE( wiz1->getHitPoints() == 80 );
        REQUIRE( wiz1->getMagicPower() == 0 );
        }
    }
}
