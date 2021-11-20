/**
 * Invoker participant of the Command design pattern
 * **/

#ifndef BUTTON_H
#define BUTTON_H

#include "Command.h"

class Button {
    private:
        Command* command;

    public:
        Button(Command* c);
        void press();
};


#endif //BUTTON_H
