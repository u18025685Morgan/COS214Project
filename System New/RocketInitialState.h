/*!
   \file "RocketInitialState"
   \brief "Initial State for the rocket"
   \author "u19123460"
*/
#ifndef ROCKETINITIALSTATE_H
#define ROCKETINITIALSTATE_H
#include "RocketState.h"
#include "RocketStaticFireState.h"

class RocketInitialState : public RocketState{
public:
	RocketInitialState();
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
