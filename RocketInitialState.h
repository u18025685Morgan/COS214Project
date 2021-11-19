#ifndef ROCKETINITIALSTATE_H
#define ROCKETINITIALSTATE_H
#include "RocketState.h"
#include "RocketStaticFireState.h"
class RocketInitialState : public RocketState{
public:

	RocketInitialState();
	void handle();
	RocketState* changeRocketState();

};
#endif
