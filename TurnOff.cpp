/**
 * command dp
 * **/

#include "TurnOff.h"

TurnOff ::TurnOff(Rocket* r) : Command(r)
{}

TurnOff ::TurnOff(Engine* e) : Command(e)
{}

void TurnOff ::execute()
{
    if(getEngineReceiver()!= nullptr)
        getEngineReceiver()->Off();
    else
        getRocketReceiver()->Off();
}

void TurnOff ::undo()
{
    if(getEngineReceiver()!= nullptr)
        getEngineReceiver()->On();
    else
        getRocketReceiver()->On();
}