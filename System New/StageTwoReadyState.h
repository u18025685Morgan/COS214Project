/*!
   \file "StageTwoReadyState"
   \brief "Ready State for stage two"
   \author "u19123460"
*/
#ifndef STAGETWOREADYSTATE_H
#define STAGETWOREADYSTATE_H
#include "StageTwoState.h"
#include "StageTwoLaunchState.h"

class StageTwoReadyState : public StageTwoState{
public:

	StageTwoReadyState();
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
