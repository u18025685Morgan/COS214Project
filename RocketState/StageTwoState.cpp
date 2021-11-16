#include "StageTwoState.h"
#include <iostream>

StageTwoState::StageTwoState(){
	this->rocketState = "stage_two";
}
void StageTwoState::handle(){
	cout << "Stage two actions begin to occur." << endl;
}
RocketState* StageTwoState::changeRocketState(){
	return new NoState();
}
