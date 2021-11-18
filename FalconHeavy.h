#ifndef FALCONHEAVY_H
#define FALCONHEAVY_H
#include <string>
#include "Rocket.h"
using namespace std;

class FalconHeavy : public Rocket //A ConcreteProduct participant of the Factory Method design pattern.
{
    public:
        FalconHeavy(string  = "Falcon Heavy");
    protected:
        void launch();
        void build();
};

#endif
