#ifndef ROCKETFACTORY_H
#define ROCKETFACTORY_H
#include "Rocket.h"

class RocketFactory //The Creator participant of the Factory Method Design Pattern.
{
    public:
        Rocket* build();
    protected:
        virtual Rocket* buildRocket() = 0; //The factory method.

};

#endif
