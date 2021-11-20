/**
 *
 * **/

#include "Button.h"

Button :: Button(Command* c)
{
    command = c;
}

void Button ::press()
{
    command->execute();
}