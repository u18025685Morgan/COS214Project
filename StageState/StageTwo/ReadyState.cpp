#include "ReadyState.h"
#include <iostream>

ReadyState::ReadyState(){
	this->stageTwoState = "ready";
}
void ReadyState::handle(){
	cout << "Stage two is ready" << endl;
}
StageTwoState* ReadyState::changeStageTwoState(){
	return new LaunchState();
}
