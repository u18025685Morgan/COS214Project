#ifndef ROCKETSTATICFIRESTATE_H
#define ROCKETSTATICFIRESTATE_H
#include "RocketState.h"
#include "RocketLaunchState.h"
class RocketStaticFireState : public RocketState{
public:

    RocketStaticFireState();
    void handle();
    RocketState* changeRocketState();

};
#endif