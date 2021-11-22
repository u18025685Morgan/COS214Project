#include "RocketLaunchState.h"
#include <iostream>
#include <unistd.h>

RocketLaunchState::RocketLaunchState(){
	this->rocketState = "launching";
}
void RocketLaunchState::handle(){
	cout << "Countdown beginning:" << endl;
	for(int i = 10; i >= 0; i--){
		cout << i << endl;
		sleep(1);
		}
		cout << "Launch!" << endl;
		sleep(2);
}
RocketState* RocketLaunchState::changeRocketState(){
	return new RocketStageOneState();
}
