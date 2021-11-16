#include "SeperationState.h"
#include <iostream>

SeperationState::SeperationState(){
	this->stageTwoState = "none";
}
void SeperationState::handle(){
	cout << "Cargo in orbit" << endl;
}
