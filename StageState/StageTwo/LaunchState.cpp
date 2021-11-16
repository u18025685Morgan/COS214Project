#include "LaunchState.h"
#include <iostream>

LaunchState::LaunchState(){
	this->stageTwoState = "none";
}
void LaunchState::handle(){
	cout << "Ready for orbital control" << endl;
}
StageTwoState* LaunchState::changeStageTwoState(){
	return new SeperationState();
}
