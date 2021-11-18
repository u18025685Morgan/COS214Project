#ifndef ROCKETLAUNCHSTATE_H
#define ROCKETLAUNCHSTATE_H
#include "RocketState.h"
#include "RocketStageOneState.h"
class RocketLaunchState : public RocketState{
public:

	RocketLaunchState();
	void handle();
	RocketState* changeRocketState();

};
#endif
