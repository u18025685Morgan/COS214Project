#ifndef MISSION_H
#define MISSION_H
#include <iostream>
using namespace

#include "missionStrategy.h"

class Mission
{
private:
    MissionStrategy * strategy;
    
public:
    Mission(MissionStrategy * strategy);
    ~Mission();
    void startMission();

};

#endif // MISSION_H
