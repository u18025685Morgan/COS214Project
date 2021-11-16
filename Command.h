//
// Created by lisar on 2021/11/16.
//

#ifndef COMMAND_H
#define COMMAND_H

#include "Rocket.h"

class Command {
private:
    Rocket* reciever;

public:
    Command(Rocket* r);
    virtual void execute()=0;
    virtual void undo()=0;

    Rocket* getReciever();
};


#endif //COS214PROJECT_MAIN_COMMAND_H
