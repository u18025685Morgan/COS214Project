#ifndef STAGETWOREADYSTATE_H
#define STAGETWOREADYSTATE_H
#include "StageTwoState.h"
#include "StageTwoLaunchState.h"

class StageTwoReadyState : public StageTwoState{
public:

    StageTwoReadyState();
    void handle();
    StageTwoState* changeStageTwoState();

};
#endif