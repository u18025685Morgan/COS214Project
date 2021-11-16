#include "LaunchState.h"
#include <iostream>

LaunchState::LaunchState(){
	this->stageOneState = "launch";
}
void LaunchState::handle(){
	cout << "Launching!" << endl;
}
StageOneState* LaunchState::changeStageOneState(){
	return new SeperationState();
}
