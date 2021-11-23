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
    /**
        @brief constructor to initialses commad attribute 
        @param Command object 
        @return none, its a void
    */
    Button(Command* c); 
    
    /**
        @brief function to call Command attribute's execute function 
        @param none 
        @return none, its a void
    */
    void press();
};


#endif //BUTTON_H
