/**
 * Command participant for Command Design Pattern
 * **/

#ifndef COMMAND_H
#define COMMAND_H

#include "Rocket.h"
#include "Engine.h"

class Command {
private:
    Rocket* RocketReceiver; //receiver attribute of type Rocket 
    Engine* EngineReceiver; //receiver attribute of type Engine

public:
    Command(Rocket* r); //constructor that takes Rocket type if needing to deal with a rocket
    Command(Engine* e); //constructor that takes Engine type if needing to deal with a engine
    virtual void execute()=0; //pure virtual execute 
    virtual void undo()=0;      //pure virtual undo 

    Rocket* getRocketReceiver();    //returns the receiver of type Rocket
    Engine* getEngineReceiver();//returns the receiver of type Engine
};


#endif //COMMAND_H
