/*!
   \file "StageOneSeperationState"
   \brief "Seperation state for stage one"
   \author "u19123460"
*/
#ifndef STAGEONESEPERATIONSTATE_H
#define STAGEONESEPERATIONSTATE_H
#include "StageOneState.h"

class StageOneSeperationState : public StageOneState{
public:

	StageOneSeperationState();
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
