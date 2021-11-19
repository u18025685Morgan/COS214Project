#include "StageOneLaunchState.h"
#include <iostream>

StageOneLaunchState::StageOneLaunchState(){
	this->stageOneState = "launch";
}
void StageOneLaunchState::handle(){
	cout << "Launching!" << endl;
}
StageOneState* StageOneLaunchState::changeStageOneState(){
	return new StageOneSeperationState();
}
