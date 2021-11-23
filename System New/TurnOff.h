/**
 * Concrete Command participant of Command design Pattern
 * **/

#ifndef TURNOFF_H
#define TURNOFF_H

#include "Command.h"

class TurnOff : public Command{
public:
    /**
        @brief constructor that initialises RocketReceiver from Command class  
        @param Rocket 
        @return none, it is void 
    */
    TurnOff(Rocket* r);
    
    /**
        @brief constructor that initialises EngineReceiver from Command class  
        @param Engine 
        @return none, it is void 
    */
    TurnOff(Engine* e);
    
     /**
        @brief calls the Rocket or Engine Receiver's off() function
        @param none
        @return none, it is void 
    */
    void execute();
    
    
    /**
        @brief calls the Rocket or Engine Receiver's on() function
        @param none
        @return none, it is void 
    */
    void undo();
};


#endif //TURNOFF_H
