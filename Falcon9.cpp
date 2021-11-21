#include "Rocket.h"
#include "Falcon9.h"
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

int const SIIZE = 60;

Falcon9::Falcon9(string nameR):Rocket(nameR)
{
    max_Satellite_Size = SIIZE;
    sats = new Satellite*[max_Satellite_Size];

    for(int i = 0; i < 60; i++)
    {
        sats[i] = new Starlink("");




        /*
        if(i % 2 == 0)
            sats[i] = new Starlink("");

        else
        {
            sats[i] = new Satellite("");//GroundReceiver();

        }*/
    }
}

void Falcon9::build()
{
    cout<<"A Falcon 9 rocket is being build."<<endl;
}

void Falcon9::launch(){
    Engine* e;
    TurnOn* tOn;
    TurnOff* tOff;
    //Rocket* r = new Rocket();


    Engine* m = new MerlinEngine(e);
    Engine* v = new VacuumMerlinEngine(e);

    //Initial state of rocket
    RocketState* rState = new RocketInitialState();



    //check if staticfire test succesful
    if ( r->staticFireTest(rState) == true){
        cout<<"Static Fire Test: SUCCESSFUL "<<endl;


        rState->handle();


        //change to staticFireState
        rState->changeRocketState();
        rState = new RocketStaticFireState();
        //the rocket is now undergoing static fire testing
        //rState->handle();


        //command Turn on rocket
        tOn = new TurnOn(r);
        tOn->execute();

        //change to launch state
        rState->changeRocketState();
        rState = new RocketLaunchState();
        //begin countdown
        rState->handle();

        //begin stage1:RocketStageOneState
        rState->changeRocketState();
        rState = new RocketStageOneState();
        rState->handle(); //stg1 begin

        StageOneState* stg1 = new StageOneReadyState();
        stg1->handle();
        stg1->changeStageOneState();
        stg1 = new StageOneTestState();

        //test state
        stg1->handle();
        stg1->changeStageOneState();
        stg1 = new StageOneLaunchState();

        //launch state
        stg1->changeStageOneState();
        stg1 = new StageOneSeperationState();

        //speration state
        stg1->handle();
        stg1->changeStageOneState();

        //falcon9 stage one has 9 Merlin engines
        m-> setNumEngines(9);

        //droneShip landing
        DroneShip* ship = new DroneShip();
        ship->setLanded(true);
        ship->print();

        //begin stage2: change rocket state
        rState->changeRocketState();
        rState = new RocketStageTwoState();
        //rState->handle();

        //rState->chnge
        StageTwoState* stg2 = new StageTwoReadyState();
        stg2->handle();

        stg2->changeStageTwoState();
        stg2 = new StageTwoLaunchState();

        //launch stage 2:ready for orbital control
        stg2->handle();
        stg2->changeStageTwoState();
        stg2 = new StageTwoSeperationState();

        //set the engines, single vacuum engine, last kick into orbit
        v->setNumEngines(1);

        //final stage2 :cargo in orbit
        stg2->handle();
        stg2->changeStageTwoState();

        //change to seperation state: cargo in orbit
        rState->changeRocketState();
        rState = new RocketNoState();
        rState->handle();

        //change state to no state : launch and delivery successful
        rState->changeRocketState();

        //turn off rocket
        tOff = new TurnOff(r);
        tOff->execute();
    }
    else{
        cout << "Static Fire Test Was Unsuccessful, launching cannot commence"<<endl;
    }
}

void Falcon9::print(){
    cout<<"This is a FALCON 9 type Rocket"<<endl;
}


Falcon9::~Falcon9(){
    delete r;
}