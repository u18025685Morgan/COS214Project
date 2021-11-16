#ifndef TESTSTATE_H
#define TESTSTATE_H
#include "StageOneState.h"
#include "LaunchState.h"

class TestState : public StageOneState{
public:

	TestState();
	void handle();
	StageOneState* changeStageOneState();

};
#endif
