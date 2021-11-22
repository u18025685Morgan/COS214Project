#ifndef SPACECOMMAND_H
#define SPACECOMMAND_H

#include <iostream> 
#include <string>

using namespace std;

class SpaceCommand{
	public:
		virtual void print() = 0; //pure virtual, responsible for printing out the type of SpaceCommand object being dealt with
		
		virtual ~SpaceCommand(); //Destructor, responsible for deallocating memory
};
#endif 
	
