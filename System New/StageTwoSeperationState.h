/*!
   \file "StageTwoSeperationState"
   \brief "Seperation State for stage two"
   \author "u19123460"
*/
#ifndef STAGETWOSEPERATIONSTATE_H
#define STAGETWOSEPERATIONSTATE_H
#include "StageTwoState.h"

class StageTwoSeperationState : public StageTwoState{
public:

	StageTwoSeperationState();
	/*!
		 \brief "Handle the event for this state"
		 \return "void"
	*/
		void handle();
		/*!
			 \brief "Changes the state of stage two to the next state"
			 \return "Object of type StageTwoState"
		*/
	StageTwoState* changeStageTwoState();
};
#endif
