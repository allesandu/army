#ifndef SOLDIER_H
#define SOLDIER_H
#include "Unit.h"

class Soldier : public Unit {
    public:
        Soldier();
        // // Soldier(const std::string& name = "SOLDIER", int maxHP = (int) HP::SOLDIER, int dmg = (int) DMG::SOLDIER);
        // Soldier(const std::string& name, int maxHP, int dmg);// to DELETE as unnecessary
        // Soldier(State* state);// to DELETE as unnecessary
        virtual ~Soldier();
};

#endif // SOLDIER_H
