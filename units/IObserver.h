#ifndef IOBSERVER_H
#define IOBSERVER_H
#include "IObservable.h"

class IObservable;

class IObserver {
    public:
        virtual void Update(IObservable* victim) = 0;
        virtual ~IObserver();
};

#endif // IOBSERVER_H
