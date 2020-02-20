#ifndef WEREWOLFSTATE_H
#define WEREWOLFSTATE_H
#include "State.h"
#include "../config.h"

class WerewolfState : public State {
    public:
        WerewolfState();
        virtual ~WerewolfState();
        
        virtual void transform();
};

#endif // WEREWOLFSTATE_H
