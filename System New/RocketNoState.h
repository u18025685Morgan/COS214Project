/*!
   \file "RocketNoState"
   \brief "Default nostate for the rocket"
   \author "u19123460"
*/
#ifndef ROCKETNOSTATE_H
#define ROCKETNOSTATE_H
#include "RocketState.h"

class RocketNoState : public RocketState{
public:

	RocketNoState();
	/*!
		 \brief "Handle the event for this state"
		 \return "void"
	*/
		void handle();
		/*!
			 \brief "Changes the state of the rocket to the next state"
			 \return "Object of type RocketState"
		*/
	RocketState* changeRocketState();
};
#endif
