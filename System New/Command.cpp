/**
 * works with engines and rockets
 * **/

#include "Command.h"

Command ::Command(Rocket* r) //constructor that initialises RocketReceiver with @param r
{
    RocketReceiver = r;
    EngineReceiver = nullptr;
}

Command ::Command(Engine* e) //constructor that initialises RocketReceiver with @ param e
{
    EngineReceiver = e;
    RocketReceiver = nullptr;
}

Rocket* Command ::getRocketReceiver() // @return Rocket object 
{
    return RocketReceiver;
}

Engine* Command ::getEngineReceiver() //@return Engine object 
{
    return EngineReceiver;
}
