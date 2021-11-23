/**
 * Concrete Command participant of Command design pattern
 * **/

#ifndef TURNON_H
#define TURNON_H

#include "Command.h"

class TurnOn : public Command{
public:
    /**
        @brief constructor that initialises RocketReceiver from Command class  
        @param Rocket 
        @return none, it is void 
    */
    TurnOn(Rocket* r);
    
     /**
        @brief constructor that initialises EngineReceiver from Command class  
        @param Engine 
        @return none, it is void 
    */
    TurnOn(Engine* e);
    
     /**
        @brief calls the Rocket or Engine Receiver's on() function
        @param none
        @return none, it is void 
    */
    void execute();
    
    /**
        @brief calls the Rocket or Engine Receiver's off() function
        @param none
        @return none, it is void 
    */
    void undo();
};


#endif //TURNON_H
