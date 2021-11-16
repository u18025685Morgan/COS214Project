#ifndef STAGETWOSTATE_H
#define STAGETWOSTATE_H
#include "RocketState.h"
#include "NoState.h"
class StageTwoState : public RocketState{
public:

	StageTwoState();
	void handle();
	RocketState* changeRocketState();

};
#endif
