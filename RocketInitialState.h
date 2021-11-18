#ifndef ROCKETINITIALSTATE_H
#define ROCKETINITIALSTATE_H
#include "RocketState.h"
#include "StaticFireState.h"
class RocketInitialState : public RocketState{
public:

	RocketInitialState();
	void handle();
	RocketState* changeRocketState();

};
#endif
