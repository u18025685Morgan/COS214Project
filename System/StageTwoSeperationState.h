#ifndef STAGETWOSEPERATIONSTATE_H
#define STAGETWOSEPERATIONSTATE_H
#include "StageTwoState.h"

class StageTwoSeperationState : public StageTwoState{
public:

    StageTwoSeperationState();
    void handle();
    StageTwoState* changeStageTwoState();
};
#endif