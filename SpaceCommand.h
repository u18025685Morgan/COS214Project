#ifndef SPACECOMMAND_H
#define SPACECOMMAND_H

#include <iostream> 
#include <string>

using namespace std;

class SpaceCommand{
	public:
		//print out Falcon Rockets
		virtual void print() = 0;
		//
		virtual ~SpaceCommand();
};
#endif 
	