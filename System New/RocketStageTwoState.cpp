#include "RocketStageTwoState.h"
#include <iostream>

RocketStageTwoState::RocketStageTwoState(){
	this->rocketState = "stage_two";
}
void RocketStageTwoState::handle(){
	cout << "Stage two actions begin to occur." << endl;
}
RocketState* RocketStageTwoState::changeRocketState(){
	return new RocketNoState();
}
