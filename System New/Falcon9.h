#ifndef FALCON9_H
#define FALCON9_H
#include "Rocket.h"
#include "Falcon9.h"
#include "TurnOn.h" 
#include "TurnOff.h"
#include "Engine.h"
#include "MerlinEngine.h"
#include "VacuumMerlinEngine.h"
#include "Satellite.h"
#include "Starlink.h"
#include "GroundReceiver.h"

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
class Falcon9 : public Rocket //A ConcreteProduct participant of the Factory Method design pattern.
        {
        public:
         /**
    @brief a construuctor that is called when Falcon Heavy objects are instatiated 
    @param a default string set to "Falcon9"
    @return does not return a value, as it is a constructor 
    */
            Falcon9(string = "Falcon 9"); //Added by Yane at 16:30
             
            /**
               @brief  Print function that display what type of Rocket is being used, in this case a Falcon9
               @param none 
               @return no return value, its a void 
                */
            virtual void print(); 
       /**
               @brief  Launch function that illustrates the different stages falcon9 goes through
               @param none 
               @return no return value, its a void, but prints out the different stages rocket is going through , in launch sequence 
         */
            virtual void launch();     
            void activate_satelites();
            void add_satellites();
         /**
               @brief  Falcon9 destructor, deallocates memory 
               @param none 
               @return no return value, its a void 
                */
            ~Falcon9();

        protected:
         /**
               @brief  build function that displays what type of function  is built, in this case Falcon9
               @param none 
               @return no return value, its a void 
                */
             void build();
             //Added by Yane at 16:28

        private:
            Rocket *r;
            Satellite  **sats;
            int max_Satellite_Size;
            int current_size;


        };

#endif
