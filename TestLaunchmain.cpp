#include "SpaceCommand.h"
#include "Rocket.h"
#include "Engine.h"
#include "Falcon9.h"
#include "FalconHeavy.h"
#include <iostream> 

using namespace std;

int main(){
	
	Rocket* falcH = new FalconHeavy();
	Rocket* falc9 = new Falcon9();
	
	falcH->launch();
	falc9->launch();
	
	
return 0; 
}
