/*!
   \file "RocketStageOneState"
   \brief "Stage one state for the rocket"
   \author "u19123460"
*/
#ifndef ROCKETSTAGEONESTATE_H
#define ROCKETSTAGEONESTATE_H
#include "RocketState.h"
#include "RocketStageTwoState.h"
class RocketStageOneState : public RocketState{
public:
	RocketStageOneState();
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
