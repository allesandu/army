#ifndef NECROMANCER_H
#define NECROMANCER_H
#include "Unit.h"

class Necromancer : public Unit {
    public:
        Necromancer();
        virtual ~Necromancer();
        
        virtual void attack(Unit* enemy);
};

#endif // NECROMANCER_H
