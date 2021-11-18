#ifndef STAGEONESTATE_H
#define STAGEONESTATE_H
#include <string>
using namespace std;
class StageOneState{
protected:
	string stageOneState;
public:
	virtual void handle() = 0;
	virtual StageOneState* changeStageOneState() = 0;
	string getStageOneState();

};
#endif
