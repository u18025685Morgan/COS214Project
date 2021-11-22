/*!
   \file "RocketLaunchState"
   \brief "Launch State for the rocket"
   \author "u19123460"
*/
#ifndef ROCKETLAUNCHSTATE_H
#define ROCKETLAUNCHSTATE_H
#include "RocketState.h"
#include "RocketStageOneState.h"
class RocketLaunchState : public RocketState{
public:

	RocketLaunchState();
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
