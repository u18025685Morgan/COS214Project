#include "missionStrategy.h"

MissionStrategy::MissionStrategy(string name)
{
    missionStratName = name;
    cout << "Mission strategy: " << missionStratName << " chosen." << endl;
}

MissionStrategy::~MissionStrategy()
{
    

}

void MissionStrategy::setName(string n)
{
    missionStratName = n;
}

RocketStrategy::RocketStrategy() : MissionStrategy("rocket")
{
    
}


void RocketStrategy::buildMission()
{
    int rocket;
    cout << "What kind of Rocket would you like to use for this mission strategy? 1 - Falcon9, 2 - FalconHeavy" << endl;
    cin >> rocket;
    
    
    
    if(rocket == 1)
    {
        RocketFactory * n;
        n = new Falcon9Factory();
        Rocket nine;
        nine->build();
        nine->buildRocket();
    }
    else if (rocket == 2)
    {
        RocketFactory * h;
        h = new FalconHeavyFactory();
        Rocket heavy;
        heavy->build();
        heavy->buildRocket();
    }
    else
    {
        cout << "You did not chose a valid answer, program will exit" << endl;
    }
    
}

EngineStrategy::EngineStrategy() : MissionStrategy("engine")
{
    
}


void EngineStrategy::buildMission()
{
    
}

DragonStrategy::DragonStrategy() : MissionStrategy("engine")
{
    
}


void DragonStrategy::buildMission()
{
    
}