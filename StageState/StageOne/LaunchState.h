#ifndef LAUNCHSTATE_H
#define LAUNCHSTATE_H
#include "StageOneState.h"
#include "SeperationState.h"

class LaunchState : public StageOneState{
public:

	LaunchState();
	void handle();
	StageOneState* changeStageOneState();

};
#endif
