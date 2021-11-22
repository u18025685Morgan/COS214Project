/*!
   \file "RocketStaticFireState"
   \brief "Static fire test state for the rocket"
   \author "u19123460"
*/
#ifndef ROCKETSTATICFIRESTATE_H
#define ROCKETSTATICFIRESTATE_H
#include "RocketState.h"
#include "RocketLaunchState.h"
class RocketStaticFireState : public RocketState{
public:

	RocketStaticFireState();
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
