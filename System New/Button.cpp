/**
 *
 * **/

#include "Button.h"

Button :: Button(Command* c)        //constructor that takes @param c
{
    command = c;
}

void Button ::press()               //executes the command attributes execute function
{
    command->execute();
}
