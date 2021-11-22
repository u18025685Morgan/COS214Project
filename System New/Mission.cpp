#include "Mission.h"

Mission::Mission(MissionStrategy * strategy)
{
    this->strategy = strategy;                      //! copy constructor taking a MissionStrategy object
}


Mission::~Mission()
{
    cout << "Mission Course Completed" << endl;        //! Destructor outputs that the mission is over and the strategy is deleted
    delete strategy;
    strategy = 0;
}

void Mission::startMission()
{
    return strategy->buildMission();                //! returns the strategy's buildMission() function which is implemented in the
    //! ConcreteStrategy class
}