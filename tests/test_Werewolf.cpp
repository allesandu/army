#include "../units/Werewolf.h"
#include "catch.hpp"

TEST_CASE( "test Werewolf", "[Werewolf]" ) {
    Werewolf* ww1 = new Werewolf();
    
    REQUIRE( ww1->getName() == "WEREWOLF" );
    REQUIRE( ww1->getHitPoints() == 180 );
    REQUIRE( ww1->getMaxHitPoints() == 180);
    REQUIRE( ww1->getDamage() == 90 );
    REQUIRE( ww1->getMagicPower() == 0 );
    
    SECTION( "Werewolf: tranformation test Werewolf-Wolf" ) {
        // Werewolf* ww2 = new Werewolf();        
        // !!! reconsider HP value after transformation
        
        ww1->abilityInner();
        REQUIRE( ww1->getName() == "WOLF" );
        REQUIRE( ww1->getHitPoints() == 230 );
        REQUIRE( ww1->getMaxHitPoints() == 230);
        REQUIRE( ww1->getDamage() == 120 );
        REQUIRE( ww1->getMagicPower() == 0 );
        
        ww1->abilityInner();
        REQUIRE( ww1->getName() == "WEREWOLF" );
        REQUIRE( ww1->getHitPoints() == 180 );
        REQUIRE( ww1->getMaxHitPoints() == 180);
        REQUIRE( ww1->getDamage() == 90 );
        REQUIRE( ww1->getMagicPower() == 0 );
    }
}
