#include "TestState.h"
#include <iostream>

TestState::TestState(){
	this->stageOneState = "testing";
}
void TestState::handle(){
	cout << "Testing underway" << endl;
}
StageOneState* TestState::changeStageOneState(){
	return new LaunchState();
}
