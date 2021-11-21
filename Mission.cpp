#include "Mission.h"

Mission::Mission(MissionStrategy * strategy)
{
    this->strategy = strategy;
}

Mission::~Mission()
{
    cout << "Mission Course Completed" << endl;
    delete strategy;
    strategy = 0;
}

void Mission::startMission()
{
    return strategy->buildMission();
}

