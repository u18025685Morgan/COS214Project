//
// Created by lisar on 2021/11/16.
//

#include "TurnOff.h"

TurnOff ::TurnOff(Rocket* r) : Command(r)
{}

void TurnOff ::execute()
{
    //if (reciever== nullptr)
    //  return;
    getReciever()->Off();
}

void TurnOff ::undo()
{
    getReciever()->On();
}