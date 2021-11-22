#ifndef ROCKETSTAGEONESTATE_H
#define ROCKETSTAGEONESTATE_H
#include "RocketState.h"
#include "RocketStageTwoState.h"
class RocketStageOneState : public RocketState{
public:
    RocketStageOneState();
    void handle();
    RocketState* changeRocketState();

};
#endif