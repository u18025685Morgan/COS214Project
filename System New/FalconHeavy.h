#ifndef FALCONHEAVY_H
#define FALCONHEAVY_H
#include "Rocket.h"
#include "TurnOn.h" 
#include "TurnOff.h"
#include "Engine.h"
#include "MerlinEngine.h"
#include "VacuumMerlinEngine.h"

#include "RocketState.h"
#include "RocketInitialState.h"

#include "StageOneState.h"
#include "StageOneReadyState.h"

#include "StageTwoState.h"
#include "StageTwoReadyState.h"

#include "DroneShip.h"

#include <iostream>
#include <string>
using namespace std;


class FalconHeavy : public Rocket //A ConcreteProduct participant of the Factory Method design pattern.
{
    public:
    /**
    @brief a construuctor that is called when Falcon Heavy objects are instatiated 
    @param a default string set to "Falcon Heavy"
    @return does not return a value, as it is a constructor 
    */
        FalconHeavy(string  = "Falcon Heavy");
    
        /**
               @brief  Launch function that illustrates the different stages falcon Heavy goes through
               @param none 
               @return no return value, its a void, but prints out the different stages rocket is going through , in launch sequence 
         */
        virtual void launch();
    /**
               @brief a default constructor that will to deallocate memory
               @param none 
               @return no return value 
         */
        ~FalconHeavy();
      /**
               @brief  Print function that display what type of Rocket is being used, in this case a Falcon Heavy
               @param none 
               @return no return value, its a void 
                */
        virtual void print();

    protected:
     /**
               @brief  build function that displays what type of function  is built, in this case Falcon Heavy
               @param none 
               @return no return value, its a void 
                */
        void build();

    private:
        Rocket *r;
};

#endif
