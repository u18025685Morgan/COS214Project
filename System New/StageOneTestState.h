/*!
   \file "StageOneTestState"
   \brief "Test state for stage one"
   \author "u19123460"
*/
#ifndef STAGEONETESTSTATE_H
#define STAGEONETESTSTATE_H
#include "StageOneState.h"
#include "StageOneLaunchState.h"

class StageOneTestState : public StageOneState{
public:

	StageOneTestState();
	/*!
		 \brief "Handle the event for this state"
		 \return "void"
	*/
		void handle();
		/*!
			 \brief "Changes the state of stage one to the next state"
			 \return "Object of type StageOneState"
		*/
	StageOneState* changeStageOneState();

};
#endif
