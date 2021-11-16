#include "StaticFireState.h"
#include <iostream>

StaticFireState::StaticFireState(){
	this->rocketState = "static_fire";
}
void StaticFireState::handle(){
	cout << "The rocket is now undergoing static fire testing." << endl;
}
RocketState* StaticFireState::changeRocketState(){
	return new LaunchState();
}
