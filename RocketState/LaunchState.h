#ifndef LAUNCHSTATE_H
#define LAUNCHSTATE_H
#include "RocketState.h"
#include "StageOneState.h"
class LaunchState : public RocketState{
public:

	LaunchState();
	void handle();
	RocketState* changeRocketState();

};
#endif
