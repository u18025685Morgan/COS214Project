#include "Rocket.h"
#include "FalconHeavy.h"
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

FalconHeavy::FalconHeavy(string nameR):Rocket(nameR)
{

}
void FalconHeavy::build()
{
    cout<<"A Falcon Heavy rocket is being build."<<endl;

}

	
void FalconHeavy::launch(){	
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
		
		//falconHeavy stage one has 27 Merlin engines
		m-> setNumEngines(27); 
		
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
	


FalconHeavy::~FalconHeavy(){
	delete r;
}
