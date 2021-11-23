/**
 * Invoker participant of the Command design pattern
 * **/

#ifndef BUTTON_H
#define BUTTON_H

#include "Command.h"

class Button {
private:
    Command* command;       //command attribute

public:
    Button(Command* c);     //constructor that initailises command attribute
    void press();
};


#endif //BUTTON_H
