#include "../spells/SummonSpell.h"
#include "../spells/BaseSpell.h"
#include "catch.hpp"

TEST_CASE ("test SummonSpell", "[SummonSpell]") {
    SummonSpell* ss1 = new SummonSpell();
    
    REQUIRE( ss1->getSpellCost() == 20 );
    REQUIRE( ss1->getSpellPower() == 20 );
    REQUIRE( ss1->getSpellName() == "SUMMONSPELL" );
    REQUIRE( ss1->getSpellType() == "SPECIAL" );
    
}
