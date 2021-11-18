#include "RocketStaticFireState.h"
#include <iostream>

RocketStaticFireState::RocketStaticFireState(){
	this->rocketState = "static_fire";
}
void RocketStaticFireState::handle(){
	cout << "The rocket is now undergoing static fire testing." << endl;
}
RocketState* RocketStaticFireState::changeRocketState(){
	return new RocketLaunchState();
}
