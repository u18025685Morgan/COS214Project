/**
 * works with engines and rockets
 * **/

#include "Command.h"

Command ::Command(Rocket* r)
{
    RocketReceiver = r;
}

Command ::Command(Engine* e)
{
    EngineReceiver = e;
}

Rocket* Command ::getRocketReceiver()
{
    return RocketReceiver;
}

Engine* Command ::getEngineReceiver()
{
    return EngineReceiver;
}