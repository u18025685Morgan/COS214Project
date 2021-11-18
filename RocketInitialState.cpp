#include "RocketInitialState.h"
#include <iostream>

RocketInitialState::RocketInitialState(){
	this->rocketState = "initial";
}
void RocketInitialState::handle(){
	cout << "The rocketship is now ready for launch!" << endl;
}
RocketState* RocketInitialState::changeRocketState(){
	return new RocketStaticFireState();
}
