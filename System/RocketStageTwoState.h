#ifndef ROCKETSTAGETWOSTATE_H
#define ROCKETSTAGETWOSTATE_H
#include "RocketState.h"
#include "RocketNoState.h"
class RocketStageTwoState : public RocketState{
public:

    RocketStageTwoState();
    void handle();
    RocketState* changeRocketState();

};
#endif