#ifndef DRONESHIP_H
#define DRONESHIP_H

#include "SpaceCommand.h"
#include <iostream>
#include <string>

using namespace std;

class DroneShip : public SpaceCommand{
	private:
		bool landed;
	public:
		DroneShip();
		void setLanded();
		bool getLanded();
		void print();
	
};
#endif 

