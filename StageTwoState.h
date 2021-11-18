#ifndef STAGETWOSTATE_H
#define STAGETWOSTATE_H
#include <string>
using namespace std;
class StageTwoState{
protected:
	string stageTwoState;
public:
	virtual void handle() = 0;
	virtual StageTwoState* changeStageTwoState() = 0;
	string getStageTwoState();

};
#endif
