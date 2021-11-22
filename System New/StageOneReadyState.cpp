#include "StageOneReadyState.h"
#include <iostream>

StageOneReadyState::StageOneReadyState(){
    this->stageOneState = "ready";
}
void StageOneReadyState::handle(){
    cout << "Stage Ready for Action" << endl;
}
StageOneState* StageOneReadyState::changeStageOneState(){
    return new StageOneTestState();
}