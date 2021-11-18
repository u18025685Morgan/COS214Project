#include "RocketLaunchState.h"
#include <iostream>

RocketLaunchState::RocketLaunchState(){
	this->rocketState = "launching";
}
void RocketLaunchState::handle(){
	cout << "Countdown beginning:" << endl;
	for(int i = 10; i >= 0; i--){
		cout << i << endl;
		}
		cout << "Launch!" << endl;
}
RocketState* RocketLaunchState::changeRocketState(){
	return new RocketStageOneState();
}
