#ifndef STAGEONETESTSTATE_H
#define STAGEONETESTSTATE_H
#include "StageOneState.h"
#include "StageOneLaunchState.h"

class StageOneTestState : public StageOneState{
public:

    StageOneTestState();
    void handle();
    StageOneState* changeStageOneState();

};
#endif