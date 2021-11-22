#include "StageTwoSeperationState.h"
#include <iostream>

StageTwoSeperationState::StageTwoSeperationState(){
	this->stageTwoState = "none";
}
void StageTwoSeperationState::handle(){
	cout << "Cargo in orbit" << endl;
}
StageTwoState* StageTwoSeperationState::changeStageTwoState(){
	return this;
}
