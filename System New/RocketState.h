/*!
   \file "RocketState"
   \brief "Abstract conatiner for states for the rocket"
   \author "u19123460"
*/
#ifndef ROCKETSTATE_H
#define ROCKETSTATE_H
#include <string>
using namespace std;
class RocketState{
protected:
	string rocketState;
public:
	/*!
	   \brief "Definition of the handle method"
	   \return "void"
	*/
	virtual void handle() = 0;
	/*!
	   \brief "Changes the rocket state"
	   \return "Object of type RocketState"
	*/
	virtual RocketState* changeRocketState() = 0;
	/*!
	   \brief "Gets the current state of the rocket"
	   \return "Returns the current value of the rocket state"
	*/
	string getRocketState();

};
#endif
