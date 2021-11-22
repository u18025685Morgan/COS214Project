#include "StageTwoReadyState.h"
#include <iostream>

StageTwoReadyState::StageTwoReadyState(){
    this->stageTwoState = "ready";
}
void StageTwoReadyState::handle(){
    cout << "Stage two is ready" << endl;
}
StageTwoState* StageTwoReadyState::changeStageTwoState(){
    return new StageTwoLaunchState();
}