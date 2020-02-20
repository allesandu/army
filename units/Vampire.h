#ifndef VAMPIRE_H
#define VAMPIRE_H
#include "Unit.h"

class Vampire : public Unit {
    public:
        Vampire();
        virtual ~Vampire();
        
        // void bite(Unit* enemy); // remove after reconsidering
};

#endif // VAMPIRE_H
