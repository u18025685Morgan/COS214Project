#ifndef STAGEONEREADYSTATE_H
#define STAGEONEREADYSTATE_H
#include "StageOneState.h"
#include "StageOneTestState.h"

class StageOneReadyState : public StageOneState{
public:

    StageOneReadyState();
    void handle();
    StageOneState* changeStageOneState();

};
#endif