/*!
   \file "StageTwoLaunchState"
   \brief "Launch State for stage two"
   \author "u19123460"
*/
#ifndef STAGETWOLAUNCHSTATE_H
#define STAGETWOLAUNCHSTATE_H
#include "StageTwoState.h"
#include "StageTwoSeperationState.h"

class StageTwoLaunchState : public StageTwoState{
public:

	StageTwoLaunchState();
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
