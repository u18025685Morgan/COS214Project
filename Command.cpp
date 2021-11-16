//
// Created by lisar on 2021/11/16.
//

#include "Command.h"

Command ::Command(Rocket* r)
{
    reciever = r;
}

Rocket* Command ::getReciever()
{
    return reciever;
}
