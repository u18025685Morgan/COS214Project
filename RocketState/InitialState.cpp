#include "InitialState.h"
#include <iostream>

InitialState::InitialState(){
	this->rocketState = "initial";
}
void InitialState::handle(){
	cout << "The rocketship is now ready for launch!" << endl;
}
RocketState* InitialState::changeRocketState(){
	return new StaticFireState();
}
