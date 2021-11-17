#ifndef FALCONHEAVY_H
#define FALCONHEAVY_H
#include "Rocket.h"

class FalconHeavy : public Rocket //A ConcreteProduct participant of the Factory Method design pattern.
{
    protected:
        void launch();
};

#endif
