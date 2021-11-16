//
// Created by lisar on 2021/11/16.
//

#include "Button.h"

#include "Button.h"

Button :: Button(Command* c)
{
    command = c;
}

void Button ::press()
{
    command->execute();
}