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
            FalconHeavy(string  = "Falcon Heavy"); // A default constructor that sets the name of the to Falcon Heavy
            virtual void launch();              // A launch function that illustrates the different stages Falcon Heavy goes through during launch 
            ~FalconHeavy();                     // A destructor: deallocates memory 
            virtual void print();               // A function that prints out the type of rocket thats being used (accessed), in this case a Falcon Heavy Rocket  

        protected:
            void build();                    
        
        private:
            Rocket *r;
        };

#endif
