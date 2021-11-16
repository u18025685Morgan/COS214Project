#include "StaticFireState.h"
#include <iostream>

NoState::NoState(){
	this->rocketState = "completed";
}
void NoState::handle(){
	cout << "Launch and delivery successful!" << endl;
}
