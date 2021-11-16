#include "LaunchState.h"
#include <iostream>

LaunchState::LaunchState(){
	this->rocketState = "launching";
}
void LaunchState::handle(){
	cout << "Countdown beginning:" << endl;
	for(int i = 10; i >= 0; i--){
		cout << i << endl;
		}
		cout << "Launch!" << endl;
}
RocketState* LaunchState::changeRocketState(){
	return new StageOneState();
}
