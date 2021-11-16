#ifndef READYSTATE_H
#define READYSTATE_H
#include "StageTwoState.h"
#include "LaunchState.h"

class ReadyState : public StageTwoState{
public:

	ReadyState();
	void handle();
	StageTwoState* changeStageTwoState();

};
#endif
