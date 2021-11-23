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
    /**
        @brief constructor to initialses RocketReceiver attribute 
        @param Rocket object 
        @return none, its a void
    */
    Command(Rocket* r); 
    
    /**
        @brief constructor to initialses EngineReceiver attribute 
        @param Engine object 
        @return none, its a void
    */
    Command(Engine* e); 
    
    /**
        @brief pure virtual function that will call object's turnOn or turnOff functions 
        @param none 
        @return none, its a void
    */
    virtual void execute()=0;
    
    /**
        @brief pure virtual function that will call object's turnOn or turnOff functions opposite of execute
        @param none 
        @return none, its a void
    */
    virtual void undo()=0;

    /**
        @brief returns RocketReceiver attribute  
        @param none 
        @return Rocket 
    */
    Rocket* getRocketReceiver(); 
    
    /**
        @brief returns EngineReceiver attribute  
        @param none 
        @return Engine 
    */
    Engine* getEngineReceiver();
};


#endif //COMMAND_H
