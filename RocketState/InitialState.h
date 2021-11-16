#ifndef INITIALSTATE_H
#define INITIALSTATE_H
#include "RocketState.h"
#include "StaticFireState.h"
class InitialState : public RocketState{
public:

	InitialState();
	void handle();
	RocketState* changeRocketState();

};
#endif
