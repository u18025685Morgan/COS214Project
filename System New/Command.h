/**
 * Command participant for Command Design Pattern
 * **/

#ifndef COMMAND_H
#define COMMAND_H

#include "Rocket.h"
#include "Engine.h"

class Command {
private:
    Rocket* RocketReceiver;
    Engine* EngineReceiver;

public:
    Command(Rocket* r);
    Command(Engine* e);
    virtual void execute()=0;
    virtual void undo()=0;

    Rocket* getRocketReceiver();
    Engine* getEngineReceiver();
};


#endif //COMMAND_H
