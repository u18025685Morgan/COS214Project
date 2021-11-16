#ifndef LAUNCHSTATE_H
#define LAUNCHSTATE_H
#include "StageTwoState.h"
#include "SeperationState.h"

class LaunchState : public StageTwoState{
public:

	LaunchState();
	void handle();
	StageTwoState* changeStageTwoState();

};
#endif
