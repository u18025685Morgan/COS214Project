#include "ReadyState.h"
#include <iostream>

ReadyState::ReadyState(){
	this->stageOneState = "ready";
}
void ReadyState::handle(){
	cout << "Stage Ready for Action" << endl;
}
StageOneState* ReadyState::changeStageOneState(){
	return new TestState();
}
