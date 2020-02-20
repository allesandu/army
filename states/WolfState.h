#ifndef WOLFSTATE_H
#define WOLFSTATE_H
#include "State.h"

class WolfState : public State {
    public:
        WolfState();
        virtual ~WolfState();
        
        // virtual void transform(); // doesnt work with the same method TRANSFORM in bouth state
};

#endif // WOLFSTATE_H
