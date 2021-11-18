#include "StageOneLaunchState.h"
#include <iostream>

StageOneLaunchState::StageOneLaunchState(){
	this->stageOneState = "launch";
}
void StageOneLaunchState::handle(){
	cout << "Launching Stage 1!" << endl;
}
StageOneState* StageOneLaunchState::changeStageOneState(){
	return new StageOneSeperationState();
}
