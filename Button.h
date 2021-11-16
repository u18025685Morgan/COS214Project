//
// Created by lisar on 2021/11/16.
//

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


#endif //COS214PROJECT_MAIN_BUTTON_H
