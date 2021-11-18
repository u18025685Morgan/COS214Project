#include "StageOneTestState.h"
#include <iostream>

StageOneTestState::StageOneTestState(){
	this->stageOneState = "testing";
}
void StageOneTestState::handle(){
	cout << "electronic test pass" << endl;
}
StageOneState* StageOneTestState::changeStageOneState(){
	return new StageOneLaunchState();
}
