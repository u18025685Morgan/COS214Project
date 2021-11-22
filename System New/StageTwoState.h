/*!
   \file "StageTwoState"
   \brief "Abstract conatiner for states of stage two"
   \author "u19123460"
*/
#ifndef STAGETWOSTATE_H
#define STAGETWOSTATE_H
#include <string>
using namespace std;
class StageTwoState{
protected:
	string stageTwoState;
public:
	/*!
	   \brief "Definition of the handle method"
	   \return "void"
	*/
	virtual void handle() = 0;
	/*!
	   \brief "Changes stage two state"
	   \return "Object of type StageTwoState"
	*/
	virtual StageTwoState* changeStageTwoState() = 0;
	/*!
	   \brief "Gets the current state of stage two"
	   \return "Returns the current value of stage two's state"
	*/
	string getStageTwoState();

};
#endif
