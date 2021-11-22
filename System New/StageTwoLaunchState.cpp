#include "StageTwoLaunchState.h"
#include <iostream>

StageTwoLaunchState::StageTwoLaunchState(){
    this->stageTwoState = "none";
}
void StageTwoLaunchState::handle(){
    cout << "Ready for orbital control" << endl;
}
StageTwoState* StageTwoLaunchState::changeStageTwoState(){
    return new StageTwoSeperationState();
}