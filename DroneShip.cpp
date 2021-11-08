#include "DroneShip.h"

#include <iostream>
#include <string>

using namespace std;

bool DroneShip:: HasLanded(){
	if (landed == true) {
	    return true;
	}
	else{
		return false;
	}
}

void DroneShip::print(){
	if ( landed == true) {
		//SpaceX lands the first stage on a drone ship in the middle of the ocean
		cout<<"Rocket has landed on drone Ship"<<endl; 
	}
}
	
