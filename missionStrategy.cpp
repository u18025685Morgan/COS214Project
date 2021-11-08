#include "missionStrategy.h"

MissionStrategy::MissionStrategy(string name)
{
    missionStratName = name;
    cout << "Mission strategy: " << missionStratName << " chosen." << endl;
}

MissionStrategy::~MissionStrategy()
{
    
}

