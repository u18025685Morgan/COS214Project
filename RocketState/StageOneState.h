#ifndef STAGEONESTATE_H
#define STAGEONESTATE_H
#include "RocketState.h"
#include "StageTwoState.h"
class StageOneState : public RocketState{
public:
	StageOneState();
	void handle();
	RocketState* changeRocketState();

};
#endif
