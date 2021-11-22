/**
 * command dp
 * **/

#include "TurnOn.h"

TurnOn ::TurnOn(Rocket* r) : Command(r)
{}

TurnOn ::TurnOn(Engine* e) : Command(e)
{}

void TurnOn ::execute()
{
    if(getEngineReceiver()!= nullptr)
        getEngineReceiver()->On();
    else
        getRocketReceiver()->On();
}

void TurnOn ::undo()
{
    if(getEngineReceiver()!= nullptr)
        getEngineReceiver()->Off();
    else
        getRocketReceiver()->Off();
}