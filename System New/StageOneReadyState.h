/*!
   \file "StageOneReadyState"
   \brief "Ready state for stage one"
   \author "u19123460"
*/
#ifndef STAGEONEREADYSTATE_H
#define STAGEONEREADYSTATE_H
#include "StageOneState.h"
#include "StageOneTestState.h"

class StageOneReadyState : public StageOneState{
public:

	StageOneReadyState();
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
