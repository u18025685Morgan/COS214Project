/*!
   \file "StageOneState"
   \brief "Abstract conatiner for states for stage one"
   \author "u19123460"
*/
#ifndef STAGEONESTATE_H
#define STAGEONESTATE_H
#include <string>
using namespace std;
class StageOneState{
protected:
	string stageOneState;
public:
	/*!
	   \brief "Definition of the handle method"
	   \return "void"
	*/
	virtual void handle() = 0;
	/*!
	   \brief "Changes stage ones state"
	   \return "Object of type StageOneState"
	*/
	virtual StageOneState* changeStageOneState() = 0;
	/*!
	   \brief "Gets the current state of stage one"
	   \return "Returns the current value of stage ones state"
	*/
	string getStageOneState();

};
#endif
