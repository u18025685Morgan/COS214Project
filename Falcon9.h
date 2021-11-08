#include "Rocket.h"
#ifndef FALCON9_H
#define FALCON9_H

class Falcon9 : public Rocket //A ConcreteProduct participant of the Factory Method design pattern.
{
    protected:
        void launch();
};

#endif
