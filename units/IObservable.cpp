#include "IObservable.h"
// #include "Unit.h"
// class Unit;

// void IObservable::attachObserver(Unit* necromancer) {};
// void IObservable::detachObserver(Unit* necromancer) {};

void IObservable::attachObserver(IObserver* necromancer) {};
void IObservable::detachObserver(IObserver* necromancer) {};
void IObservable::Notify() {};
int IObservable::getMaxHitPoints() const {};

IObservable::~IObservable() {};
