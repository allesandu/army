#include "../units/Soldier.h"
#include "../units/Rogue.h"
#include "../units/Berserker.h"
#include "../units/Vampire.h"
#include "../units/Werewolf.h"
#include "../units/Demon.h"
#include "../units/Wizard.h"
#include "../units/Healer.h"
#include "../units/Priest.h"
#include "../units/Warlock.h"
#include "../units/Necromancer.h"
#include "catch.hpp"

TEST_CASE("test Werewolf_bite", "[bite]") {
    
    Werewolf* ww1 = new Werewolf();
    
    Soldier* s1 = new Soldier();
    Soldier* s2 = new Soldier();
    Rogue* r1 = new Rogue();
    Rogue* r2 = new Rogue();
    Berserker* b1 = new Berserker();
    Berserker* b2 = new Berserker();
    
    Vampire* v1 = new Vampire();
    Vampire* v2 = new Vampire();
    
    Demon* d1 = new Demon();
    Demon* d2 = new Demon();
    
    Wizard* wiz1 = new Wizard();
    Wizard* wiz2 = new Wizard();
    Healer* h1 = new Healer();
    Healer* h2 = new Healer();
    Priest* p1 = new Priest();
    Priest* p2 = new Priest();
    Warlock* wl1 = new Warlock();
    Warlock* wl2 = new Warlock();
    Necromancer* nm1 = new Necromancer();
    Necromancer* nm2 = new Necromancer();
    
    SECTION("Werewolf_bite: transformation from Soldier") {
        ww1->action(s1);
        s1->action(s2);
        
        REQUIRE( s1->getName() == "WEREWOLF" );
        REQUIRE( s1->getHitPoints() == 180 );
        REQUIRE( s1->getMaxHitPoints() == 180);
        REQUIRE( s1->getDamage() == 90 );
        REQUIRE( s1->isUndead() == false );
        REQUIRE( s1->getMagicPower() == 0 );
        REQUIRE( s1->getState()->getSpellCost(4) == 0 );
        REQUIRE( s1->getState()->getSpellPower(4) == 0 );
    
        REQUIRE( s2->getName() == "WEREWOLF" );
        REQUIRE( s2->getHitPoints() == 180 );
        REQUIRE( s2->getMaxHitPoints() == 180);
        REQUIRE( s2->getDamage() == 90 );
        REQUIRE( s2->isUndead() == false );
        REQUIRE( s2->getMagicPower() == 0 );
        REQUIRE( s2->getState()->getSpellCost(4) == 0 );
        REQUIRE( s2->getState()->getSpellPower(4) == 0 );
    
    }
    
    SECTION("Werewolf_bite: transformation from Soldier with hpLegacy") {
        s2->attack(s1);
        int ind = 100 * ( s1->getMaxHitPoints() - s2->getDamage() ) / s1->getMaxHitPoints();
        
        ww1->action(s1);
        int newHp = ind * s1->getMaxHitPoints() / 100; // s1 is already Werewolf
        
        REQUIRE( s1->getName() == "WEREWOLF" );
        REQUIRE( s1->getHitPoints() == newHp );
        REQUIRE( s1->getMaxHitPoints() == 180);
        REQUIRE( s1->getDamage() == 90 );
        REQUIRE( s1->isUndead() == false );
        REQUIRE( s1->getMagicPower() == 0 );
        REQUIRE( s1->getState()->getSpellCost(4) == 0 );
        REQUIRE( s1->getState()->getSpellPower(4) == 0 );
    
    }
    
    SECTION("Werewolf_bite: transformation from Rogue") {
        ww1->action(r1);
        r1->action(r2);
        
        REQUIRE( r1->getName() == "WEREWOLF" );
        REQUIRE( r1->getHitPoints() == 180 );
        REQUIRE( r1->getMaxHitPoints() == 180);
        REQUIRE( r1->getDamage() == 90 );
        REQUIRE( r1->isUndead() == false );
        REQUIRE( r1->getMagicPower() == 0 );
        REQUIRE( r1->getState()->getSpellCost(4) == 0 );
        REQUIRE( r1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( r2->getName() == "WEREWOLF" );
        REQUIRE( r2->getHitPoints() == 180 );
        REQUIRE( r2->getMaxHitPoints() == 180);
        REQUIRE( r2->getDamage() == 90 );
        REQUIRE( r2->isUndead() == false );
        REQUIRE( r2->getMagicPower() == 0 );
        REQUIRE( r2->getState()->getSpellCost(4) == 0 );
        REQUIRE( r2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Rogue with hpLegacy") {
        r2->attack(r1);
        int ind = 100 * ( r1->getMaxHitPoints() - r2->getDamage() ) / r1->getMaxHitPoints();
        
        ww1->action(r1);
        int newHp = ind * r1->getMaxHitPoints() / 100;
            
        REQUIRE( r1->getName() == "WEREWOLF" );
        REQUIRE( r1->getHitPoints() == newHp );
        REQUIRE( r1->getMaxHitPoints() == 180);
        REQUIRE( r1->getDamage() == 90 );
        REQUIRE( r1->isUndead() == false );
        REQUIRE( r1->getMagicPower() == 0 );
        REQUIRE( r1->getState()->getSpellCost(4) == 0 );
        REQUIRE( r1->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Berserker") {
        ww1->action(b1);
        b1->action(b2);
        
        REQUIRE( b1->getName() == "WEREWOLF" );
        REQUIRE( b1->getHitPoints() == 180 );
        REQUIRE( b1->getMaxHitPoints() == 180);
        REQUIRE( b1->getDamage() == 90 );
        REQUIRE( b1->isUndead() == false );
        REQUIRE( b1->getMagicPower() == 0 );
        REQUIRE( b1->getState()->getSpellCost(4) == 0 );
        REQUIRE( b1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( b2->getName() == "WEREWOLF" );
        REQUIRE( b2->getHitPoints() == 180 );
        REQUIRE( b2->getMaxHitPoints() == 180);
        REQUIRE( b2->getDamage() == 90 );
        REQUIRE( b2->isUndead() == false );
        REQUIRE( b2->getMagicPower() == 0 );
        REQUIRE( b2->getState()->getSpellCost(4) == 0 );
        REQUIRE( b2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Berserker with hpLegacy") {
        b2->attack(b1);
        int ind = 100 * ( b1->getMaxHitPoints() - b2->getDamage() ) / b1->getMaxHitPoints();
        
        ww1->action(b1);
        int newHp = ind * b1->getMaxHitPoints() / 100;
        
        REQUIRE( b1->getName() == "WEREWOLF" );
        REQUIRE( b1->getHitPoints() == newHp);
        REQUIRE( b1->getMaxHitPoints() == 180);
        REQUIRE( b1->getDamage() == 90 );
        REQUIRE( b1->isUndead() == false );
        REQUIRE( b1->getMagicPower() == 0 );
        REQUIRE( b1->getState()->getSpellCost(4) == 0 );
        REQUIRE( b1->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Vampire") {
        ww1->action(v1);
        
        
        REQUIRE( v1->getName() == "VAMPIRE" );
        REQUIRE( v1->getHitPoints() == 200 );
        REQUIRE( v1->getMaxHitPoints() == 200);
        REQUIRE( v1->getDamage() ==100 );
        REQUIRE( v1->isUndead() == true );
        REQUIRE( v1->getMagicPower() == 0 );
        REQUIRE( v1->getState()->getSpellCost(4) == 0 );
        REQUIRE( v1->getState()->getSpellPower(4) == 0 );
        
        ww1->action();
        ww1->action(v2);
        
        REQUIRE( v2->getName() == "VAMPIRE" );
        REQUIRE( v2->getHitPoints() == 200 );
        REQUIRE( v2->getMaxHitPoints() == 200);
        REQUIRE( v2->getDamage() == 100 );
        REQUIRE( v2->isUndead() == true );
        REQUIRE( v2->getMagicPower() == 0 );
        REQUIRE( v2->getState()->getSpellCost(4) == 0 );
        REQUIRE( v2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Vampire with hpLegacy") {
        v2->attack(v1);
        int ind = 100 * ( v1->getMaxHitPoints() - v2->getDamage() ) / v1->getMaxHitPoints();
        
        ww1->action(v1);
        int newHp = ind * v1->getMaxHitPoints() / 100;
        
        
        REQUIRE( v1->getName() == "VAMPIRE" );
        REQUIRE( v1->getHitPoints() == newHp );
        REQUIRE( v1->getMaxHitPoints() == 200);
        REQUIRE( v1->getDamage() ==100 );
        REQUIRE( v1->isUndead() == true );
        REQUIRE( v1->getMagicPower() == 0 );
        REQUIRE( v1->getState()->getSpellCost(4) == 0 );
        REQUIRE( v1->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Demon") {
        ww1->action(d1);
        d1->action(d2);
        
        REQUIRE( d1->getName() == "WEREWOLF" );
        REQUIRE( d1->getHitPoints() == 180 );
        REQUIRE( d1->getMaxHitPoints() == 180);
        REQUIRE( d1->getDamage() == 90 );
        REQUIRE( d1->isUndead() == false );
        REQUIRE( d1->getMagicPower() == 0 );
        REQUIRE( d1->getState()->getSpellCost(4) == 0 );
        REQUIRE( d1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( d2->getName() == "WEREWOLF" );
        REQUIRE( d2->getHitPoints() == 180 );
        REQUIRE( d2->getMaxHitPoints() == 180);
        REQUIRE( d2->getDamage() == 90 );
        REQUIRE( d2->isUndead() == false );
        REQUIRE( d2->getMagicPower() == 0 );
        REQUIRE( d2->getState()->getSpellCost(4) == 0 );
        REQUIRE( d2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Demon with hpLegacy") {
        d2->attack(d1);
        int ind = 100 * ( d1->getMaxHitPoints() - d2->getDamage() ) / d1->getMaxHitPoints();
        
        ww1->action(d1);
        int newHp = ind * d1->getMaxHitPoints() / 100;
        
        REQUIRE( d1->getName() == "WEREWOLF" );
        REQUIRE( d1->getHitPoints() == newHp );
        REQUIRE( d1->getMaxHitPoints() == 180);
        REQUIRE( d1->getDamage() == 90 );
        REQUIRE( d1->isUndead() == false );
        REQUIRE( d1->getMagicPower() == 0 );
        REQUIRE( d1->getState()->getSpellCost(4) == 0 );
        REQUIRE( d1->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Wizard") {
        ww1->action(wiz1);
        wiz1->action(wiz2);
        
        REQUIRE( wiz1->getName() == "WEREWOLF" );
        REQUIRE( wiz1->getHitPoints() == 180 );
        REQUIRE( wiz1->getMaxHitPoints() == 180);
        REQUIRE( wiz1->getDamage() == 90 );
        REQUIRE( wiz1->isUndead() == false );
        REQUIRE( wiz1->getMagicPower() == 0 );
        REQUIRE( wiz1->getState()->getSpellCost(4) == 0 );
        REQUIRE( wiz1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( wiz2->getName() == "WEREWOLF" );
        REQUIRE( wiz2->getHitPoints() == 180 );
        REQUIRE( wiz2->getMaxHitPoints() == 180);
        REQUIRE( wiz2->getDamage() == 90 );
        REQUIRE( wiz2->isUndead() == false );
        REQUIRE( wiz2->getMagicPower() == 0 );
        REQUIRE( wiz2->getState()->getSpellCost(4) == 0 );
        REQUIRE( wiz2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Wizard with hpLegacy") {
        wiz2->attack(wiz1);
        int ind = 100 * ( wiz1->getMaxHitPoints() - wiz2->getDamage() ) / wiz1->getMaxHitPoints();
        
        ww1->action(wiz1);
        int newHp = ind * wiz1->getMaxHitPoints() / 100;
        
        REQUIRE( wiz1->getName() == "WEREWOLF" );
        REQUIRE( wiz1->getHitPoints() == newHp );
        REQUIRE( wiz1->getMaxHitPoints() == 180);
        REQUIRE( wiz1->getDamage() == 90 );
        REQUIRE( wiz1->isUndead() == false );
        REQUIRE( wiz1->getMagicPower() == 0 );
        REQUIRE( wiz1->getState()->getSpellCost(4) == 0 );
        REQUIRE( wiz1->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Healer") {
        ww1->action(h1);
        h1->action(h2);
        
        REQUIRE( h1->getName() == "WEREWOLF" );
        REQUIRE( h1->getHitPoints() == 180 );
        REQUIRE( h1->getMaxHitPoints() == 180);
        REQUIRE( h1->getDamage() == 90 );
        REQUIRE( h1->isUndead() == false );
        REQUIRE( h1->getMagicPower() == 0 );
        REQUIRE( h1->getState()->getSpellCost(4) == 0 );
        REQUIRE( h1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( h2->getName() == "WEREWOLF" );
        REQUIRE( h2->getHitPoints() == 180 );
        REQUIRE( h2->getMaxHitPoints() == 180);
        REQUIRE( h2->getDamage() == 90 );
        REQUIRE( h2->isUndead() == false );
        REQUIRE( h2->getMagicPower() == 0 );
        REQUIRE( h2->getState()->getSpellCost(4) == 0 );
        REQUIRE( h2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Healer with hpLegacy") {
        h2->attack(h1);
        int ind = 100 * ( h1->getMaxHitPoints() - h2->getDamage() ) / h1->getMaxHitPoints();
        
        ww1->action(h1);
        int newHp = ind * h1->getMaxHitPoints() / 100;
        
        REQUIRE( h1->getName() == "WEREWOLF" );
        REQUIRE( h1->getHitPoints() == newHp );
        REQUIRE( h1->getMaxHitPoints() == 180);
        REQUIRE( h1->getDamage() == 90 );
        REQUIRE( h1->isUndead() == false );
        REQUIRE( h1->getMagicPower() == 0 );
        REQUIRE( h1->getState()->getSpellCost(4) == 0 );
        REQUIRE( h1->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Priest") {
        ww1->action(p1);
        p1->action(p2);
        
        REQUIRE( p1->getName() == "WEREWOLF" );
        REQUIRE( p1->getHitPoints() == 180 );
        REQUIRE( p1->getMaxHitPoints() == 180);
        REQUIRE( p1->getDamage() == 90 );
        REQUIRE( p1->isUndead() == false );
        REQUIRE( p1->getMagicPower() == 0 );
        REQUIRE( p1->getState()->getSpellCost(4) == 0 );
        REQUIRE( p1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( p2->getName() == "WEREWOLF" );
        REQUIRE( p2->getHitPoints() == 180 );
        REQUIRE( p2->getMaxHitPoints() == 180);
        REQUIRE( p2->getDamage() == 90 );
        REQUIRE( p2->isUndead() == false );
        REQUIRE( p2->getMagicPower() == 0 );
        REQUIRE( p2->getState()->getSpellCost(4) == 0 );
        REQUIRE( p2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Priest with hpLegacy") {
        p2->attack(p1);
        int ind = 100 * ( p1->getMaxHitPoints() - p2->getDamage() ) / p1->getMaxHitPoints();
        
        ww1->action(p1);
        int newHp = ind * p1->getMaxHitPoints() / 100;
        
        REQUIRE( p1->getName() == "WEREWOLF" );
        REQUIRE( p1->getHitPoints() == newHp );
        REQUIRE( p1->getMaxHitPoints() == 180);
        REQUIRE( p1->getDamage() == 90 );
        REQUIRE( p1->isUndead() == false );
        REQUIRE( p1->getMagicPower() == 0 );
        REQUIRE( p1->getState()->getSpellCost(4) == 0 );
        REQUIRE( p1->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Warlock") {
        ww1->action(wl1);
        wl1->action(wl2);
        
        REQUIRE( wl1->getName() == "WEREWOLF" );
        REQUIRE( wl1->getHitPoints() == 180 );
        REQUIRE( wl1->getMaxHitPoints() == 180);
        REQUIRE( wl1->getDamage() == 90 );
        REQUIRE( wl1->isUndead() == false );
        REQUIRE( wl1->getMagicPower() == 0 );
        REQUIRE( wl1->getState()->getSpellCost(4) == 0 );
        REQUIRE( wl1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( wl2->getName() == "WEREWOLF" );
        REQUIRE( wl2->getHitPoints() == 180 );
        REQUIRE( wl2->getMaxHitPoints() == 180);
        REQUIRE( wl2->getDamage() == 90 );
        REQUIRE( wl2->isUndead() == false );
        REQUIRE( wl2->getMagicPower() == 0 );
        REQUIRE( wl2->getState()->getSpellCost(4) == 0 );
        REQUIRE( wl2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Warlock wirh hpLegacy") {
        wl2->attack(wl1);
        int ind = 100 * ( wl1->getMaxHitPoints() - wl2->getDamage() ) / wl1->getMaxHitPoints();
        
        ww1->action(wl1);
        int newHp = ind * wl1->getMaxHitPoints() / 100;
        
        REQUIRE( wl1->getName() == "WEREWOLF" );
        REQUIRE( wl1->getHitPoints() == newHp );
        REQUIRE( wl1->getMaxHitPoints() == 180);
        REQUIRE( wl1->getDamage() == 90 );
        REQUIRE( wl1->isUndead() == false );
        REQUIRE( wl1->getMagicPower() == 0 );
        REQUIRE( wl1->getState()->getSpellCost(4) == 0 );
        REQUIRE( wl1->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Necromancer") {
        ww1->action(nm1);
        nm1->action(nm2);
        
        REQUIRE( nm1->getName() == "WEREWOLF" );
        REQUIRE( nm1->getHitPoints() == 180 );
        REQUIRE( nm1->getMaxHitPoints() == 180);
        REQUIRE( nm1->getDamage() == 90 );
        REQUIRE( nm1->isUndead() == false );
        REQUIRE( nm1->getMagicPower() == 0 );
        REQUIRE( nm1->getState()->getSpellCost(4) == 0 );
        REQUIRE( nm1->getState()->getSpellPower(4) == 0 );
        
        REQUIRE( nm2->getName() == "WEREWOLF" );
        REQUIRE( nm2->getHitPoints() == 180 );
        REQUIRE( nm2->getMaxHitPoints() == 180);
        REQUIRE( nm2->getDamage() == 90 );
        REQUIRE( nm2->isUndead() == false );
        REQUIRE( nm2->getMagicPower() == 0 );
        REQUIRE( nm2->getState()->getSpellCost(4) == 0 );
        REQUIRE( nm2->getState()->getSpellPower(4) == 0 );
    }
    
    SECTION("Werewolf_bite: transformation from Necromancer with hpLegacy") {
        nm2->attack(nm1);
        int ind = 100 * ( nm1->getMaxHitPoints() - nm2->getDamage() ) / nm1->getMaxHitPoints();
        
        ww1->action(nm1);
        int newHp = ind * nm1->getMaxHitPoints() / 100;
        
        REQUIRE( nm1->getName() == "WEREWOLF" );
        REQUIRE( nm1->getHitPoints() == newHp );
        REQUIRE( nm1->getMaxHitPoints() == 180);
        REQUIRE( nm1->getDamage() == 90 );
        REQUIRE( nm1->isUndead() == false );
        REQUIRE( nm1->getMagicPower() == 0 );
        REQUIRE( nm1->getState()->getSpellCost(4) == 0 );
        REQUIRE( nm1->getState()->getSpellPower(4) == 0 );
    }
}