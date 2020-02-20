#ifndef IOBSERVABLE_H
#define IOBSERVABLE_H
#include <set>
#include "IObserver.h"

class IObserver;

class IObservable {
    protected:
        std::set<IObserver*>* lstObserv;
        
    public:
        virtual void attachObserver(IObserver* necromancer) = 0;
        virtual void detachObserver(IObserver* necromancer) = 0;
        virtual void Notify() = 0;
        
        virtual int getMaxHitPoints() const;
        
        virtual ~IObservable();
};

#endif //IOBSERVABLE_H
