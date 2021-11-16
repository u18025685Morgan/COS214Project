#ifndef READYSTATE_H
#define READYSTATE_H
#include "StageOneState.h"
#include "TestState.h"

class ReadyState : public StageOneState{
public:

	ReadyState();
	void handle();
	StageOneState* changeStageOneState();

};
#endif
