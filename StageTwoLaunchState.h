#ifndef STAGETWOLAUNCHSTATE_H
#define STAGETWOLAUNCHSTATE_H
#include "StageTwoState.h"
#include "StageTwoSeperationState.h"

class StageTwoLaunchState : public StageTwoState{
public:

	StageTwoLaunchState();
	void handle();
	StageTwoState* changeStageTwoState();

};
#endif
