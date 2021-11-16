#include "StageOneState.h"
#include <iostream>

StageOneState::StageOneState(){
	this->rocketState = "stage_one";
}
void StageOneState::handle(){
	cout << "Stage One actions begin to occur." << endl;
}
RocketState* StageOneState::changeRocketState(){
	return new StageTwoState();
}
