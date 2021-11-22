/*!
   \file "RocketStageTwoState"
   \brief "Stage two state for the rocket"
   \author "u19123460"
*/
#ifndef ROCKETSTAGETWOSTATE_H
#define ROCKETSTAGETWOSTATE_H
#include "RocketState.h"
#include "RocketNoState.h"
class RocketStageTwoState : public RocketState{
public:

	RocketStageTwoState();
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
