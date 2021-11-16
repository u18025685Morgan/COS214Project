#include "SeperationState.h"
#include <iostream>

SeperationState::SeperationState(){
	this->stageOneState = "seperating";
}
void SeperationState::handle(){
	cout << "Stage one is seperating and ready to recovery" << endl;
}
