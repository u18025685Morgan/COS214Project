#ifndef ROCKETSTATE_H
#define ROCKETSTATE_H
#include <string>
using namespace std;
class RocketState{
protected:
	string rocketState;
public:
	virtual void handle() = 0;
	virtual RocketState* changeRocketState() = 0;
	string getrocketState();

};
#endif
