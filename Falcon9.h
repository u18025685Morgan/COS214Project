#ifndef FALCON9_H
#define FALCON9_H
#include "Rocket.h"
#include <string>
using namespace std;
class Falcon9 : public Rocket //A ConcreteProduct participant of the Factory Method design pattern.
{
    public:
        Falcon9(string = "Falcon 9"); //Added by Yane at 16:30
    protected:
        void launch();
        void build(); //Added by Yane at 16:28
};

#endif
