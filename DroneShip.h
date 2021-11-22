#ifndef DRONESHIP_H
#define DRONESHIP_H

#include "SpaceCommand.h"
#include <iostream>
#include <string>

using namespace std;

class DroneShip : public SpaceCommand{
	private:
		bool landed;	// a boolean value to check whether the first stage has landed on thr drone ship
	public:
		DroneShip();	// a default constructor for the initialization of this classes objects 
		void setLanded(bool str);	//this function recieves a boolean parameter and sets its value to the landed attribute 
		bool getLanded(); // this function returns the value of landed variable 
		virtual void print(); // print is pure virtual in spacecommand, therefore virtual. This function is responsible for printing the type of SpaceCommand object is accessed.	
};
#endif 

