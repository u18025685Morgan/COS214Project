#include "MissionStrategy.h"
#include "Falcon9.h"
#include "FalconHeavy.h"
#include "Falcon9Factory.h"
#include "FalconHeavyFactory.h"

MissionStrategy::MissionStrategy(string name)               //! Constructor that takes the name of the mission strategy as a parameter
{
    missionStratName = name;                                //! Also outputs a string that has the name
    cout << "Mission strategy: " << missionStratName << " chosen." << endl;
}

MissionStrategy::~MissionStrategy()
{
}

void MissionStrategy::setName(string n)
{
    missionStratName = n;                   //! setter of missionStratName
}

string MissionStrategy::getName()
{
    return missionStratName;                //! getter of missionStratName
}

void MissionStrategy ::buildMission() {}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// RocketStrategy functions
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

RocketStrategy::RocketStrategy() : MissionStrategy("rocket")
{
    //! uses base class constructor to show that a rocket is being chosen
}


void RocketStrategy::buildMission()
{
    int rocket;
    cout << "What kind of Rocket would you like to use for this mission strategy? 1 - Falcon9, 2 - FalconHeavy" << endl;
    cin >> rocket;

    //! Asks client what they want and then depending on that a rocket is created using the Factory method

    if(rocket == 1)
    {
        RocketFactory * n;
        n = new Falcon9Factory();
        Falcon9 nine;
        n->build();                 //! outputs that a Falcon9 is being built
        nine.buildRocket();         //! actually builds the rocket
    }
    else if (rocket == 2)
    {
        RocketFactory * h;
        h = new FalconHeavyFactory();
        FalconHeavy heavy;
        h->build();                 //! outputs that a FalconHeavy is being built
        heavy.buildRocket();        //! actually builds the rocket
    }
    else
    {
        cout << "You did not chose a valid answer, program will exit" << endl;          //! Shows the client that the input was invalid
    }

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// EngineStrategy functions
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EngineStrategy::EngineStrategy() : MissionStrategy("engine")
{
    //! uses base class constructor to show that a rocket is being chosen
}


void EngineStrategy::buildMission()
{

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// DragonStrategy Functions
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

DragonStrategy::DragonStrategy() : MissionStrategy("engine")
{
    //! uses base class constructor to show that a rocket is being chosen
}


void DragonStrategy::buildMission()
{
    
}