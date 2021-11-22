/*!
   \file "StageOneLaunchState"
   \brief "Launch state for stage one"
   \author "u19123460"
*/
#ifndef STAGEONELAUNCHSTATE_H
#define STAGEONELAUNCHSTATE_H
#include "StageOneState.h"
#include "StageOneSeperationState.h"

class StageOneLaunchState : public StageOneState{
public:

	StageOneLaunchState();
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
