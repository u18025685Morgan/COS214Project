#include "StageOneSeperationState.h"
#include <iostream>

StageOneSeperationState::StageOneSeperationState(){
	this->stageOneState = "seperating";
}
void StageOneSeperationState::handle(){
	cout << "Stage one is seperating and ready to recovery" << endl;
}
