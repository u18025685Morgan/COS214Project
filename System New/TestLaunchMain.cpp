#include "SpaceCommand.h"
#include "Rocket.h"
#include "Engine.h"
#include "Falcon9.h"
#include "FalconHeavy.h"
#include <iostream> 

using namespace std;

int main1(){
	
    Rocket* falcH = new FalconHeavy();
    Rocket* falc9 = new Falcon9();
    //spacecommand object calling print
    SpaceCommand* r = new Falcon9();
	
	
    falcH->launch();
    //print this is a Falcon9 rocket
    r->print();
    falc9->launch();
	
	
    return 0;
}