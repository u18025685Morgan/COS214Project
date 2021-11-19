using namespace std;
#include "RocketState.h"
#include "RocketInitialState.h"
#include "StageOneState.h"
#include "StageOneReadyState.h"
#include "StageTwoState.h"
#include "StageTwoReadyState.h"


int main(){
RocketState* rState = new RocketInitialState();
rState->handle();
rState = rState->changeRocketState();
rState->handle();
rState = rState->changeRocketState();
rState->handle();

StageOneState* s1State = new StageOneReadyState();
s1State->handle();
s1State = s1State->changeStageOneState();
s1State->handle();
s1State = s1State->changeStageOneState();
s1State->handle();

StageTwoState* s2State = new StageTwoReadyState();
s2State->handle();
s2State = s2State->changeStageTwoState();
s2State->handle();
s2State = s2State->changeStageTwoState();
s2State->handle();


  return 0;
}
