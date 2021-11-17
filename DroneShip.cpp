#include "DroneShip.h"

#include <iostream>
#include <string>

using namespace std;

DroneShip::DroneShip(){
}

void DroneShip :: setLanded(bool str){
	landed = str; 
}

bool DroneShip:: getLanded(){
	return landed;
}

void DroneShip::print(){
	if ( getLanded() == true) {
		//SpaceX lands the first stage on a drone ship in the middle of the ocean
		cout<<"Rocket has landed on drone Ship"<<endl; 
	}
}
	
