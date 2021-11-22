#include "RocketStageOneState.h"
#include <iostream>

RocketStageOneState::RocketStageOneState(){
	this->rocketState = "stage_one";
}
void RocketStageOneState::handle(){
	cout << "Stage One actions begin to occur." << endl;
}
RocketState* RocketStageOneState::changeRocketState(){
	return new RocketStageTwoState();
}
