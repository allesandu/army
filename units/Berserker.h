#ifndef BERSERKER_H
#define BERSERKER_H
#include "Unit.h"
#include "../states/BerserkerState.h"
#include "../attacks/BaseAttack.h"

class Berserker : public Unit {
    public:
        Berserker();
    
    virtual ~Berserker();
};

#endif // BERSERKER_H