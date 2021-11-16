#ifndef STATICFIRESTATE_H
#define STATICFIRESTATE_H
#include "RocketState.h"
#include "LaunchState.h"
class StaticFireState : public RocketState{
public:

	StaticFireState();
	void handle();
	RocketState* changeRocketState();

};
#endif
