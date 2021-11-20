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
#include "GroundReciever.h"

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
        Falcon9(string = "Falcon 9"); //Added by Yane at 16:30
        virtual void print();       //added by Nasiphi
        virtual void launch();
        ~Falcon9();
        Falcon9()
       
    protected:
        void build(); //Added by Yane at 16:28
    private: 
        Rocket *r; 
        Satellite  **sats;
        
    
};

#endif
