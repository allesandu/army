#ifndef DEMON_H
#define DEMON_H
#include "Soldier.h"
#include "../states/DemonState.h"
#include "../config.h"

class Demon : public Soldier {
    public:
        Demon();
        
        virtual ~Demon();
};

#endif // DEMON_H
