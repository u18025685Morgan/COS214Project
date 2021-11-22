#ifndef STAGEONESEPERATIONSTATE_H
#define STAGEONESEPERATIONSTATE_H
#include "StageOneState.h"

class StageOneSeperationState : public StageOneState{
public:

    StageOneSeperationState();
    void handle();
    StageOneState* changeStageOneState();

};
#endif