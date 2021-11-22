/**
 * works with engines and rockets
 * **/

#include "Command.h"

Command ::Command(Rocket* r)
{
    RocketReceiver = r;
    EngineReceiver = nullptr;
}

Command ::Command(Engine* e)
{
    EngineReceiver = e;
    RocketReceiver = nullptr;
}

Rocket* Command ::getRocketReceiver()
{
    return RocketReceiver;
}

Engine* Command ::getEngineReceiver()
{
    return EngineReceiver;
}