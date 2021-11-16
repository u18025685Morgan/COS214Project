//
// Created by lisar on 2021/11/16.
//

#include "TurnOn.h"

TurnOn ::TurnOn(Rocket* r) : Command(r)
{}

void TurnOn ::execute()
{
    getReciever()->On();
}

void TurnOn ::undo()
{
    getReciever()->Off();
}