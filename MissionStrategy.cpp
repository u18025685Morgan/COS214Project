#include "MissionStrategy.h"
#include "Falcon9.h"
#include "FalconHeavy.h"
#include "Falcon9Factory.h"
#include "FalconHeavyFactory.h"

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
        Falcon9 nine;
        n->build();
        nine.buildRocket();
    }
    else if (rocket == 2)
    {
        RocketFactory * h;
        h = new FalconHeavyFactory();
        FalconHeavy heavy;
        h->build();
        heavy.buildRocket();
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