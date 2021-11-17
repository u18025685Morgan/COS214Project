#include "TestState.h"
#include <iostream>

TestState::TestState(){
	this->stageOneState = "testing";
}
void TestState::handle(){
	cout << "electronic test pass" << endl;
}
StageOneState* TestState::changeStageOneState(){
	return new LaunchState();
}
