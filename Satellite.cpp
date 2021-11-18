//
// Created by lisar on 2021/11/09.
//

#include "Satellite.h"
#include <string>

Satellite :: Satellite(SpaceCommand* sc)    //mediator dp
{
    SC = sc;
}

void Satellite :: MessageChanged()          //mediator dp
{
    SC->notify(this);
}

string Satellite :: getMessage()              //mediator dp
{
    return message;
}

void Satellite :: setMessage(string msg)    //mediator dp
{
    message = msg;
    MessageChanged();
}
