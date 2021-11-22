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
            Falcon9(string = "Falcon 9");       //Constructor that sets the name of the rocket by default.

            virtual void print();               // Print function that display what type of Rocket is being used, in this case a Falcon9
            virtual void launch();              // Launch function that illustrates the different stages falcon9 goes through
            void activate_satelites();
            void add_satellites();
            ~Falcon9();                         //Destructor

        protected:
             void build();                     //Build function that ouputs the rocket is being build.
             //Added by Yane at 16:28

        private:
            Rocket *r;
            Satellite  **sats;
            int max_Satellite_Size;
            int current_size;


        };

#endif
