#ifndef STAGEONELAUNCHSTATE_H
#define STAGEONELAUNCHSTATE_H
#include "StageOneState.h"
#include "StageOneSeperationState.h"

class StageOneLaunchState : public StageOneState{
public:

    StageOneLaunchState();
    void handle();
    StageOneState* changeStageOneState();

};
#endif