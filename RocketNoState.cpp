#include "RocketNoState.h"
#include <iostream>

RocketNoState::RocketNoState(){
	this->rocketState = "completed";
}
void RocketNoState::handle(){
	cout << "Launch and delivery successful!" << endl;
}
RocketState* RocketNoState::changeRocketState(){
	return this;
}
