#ifndef MISSIONSTRATEGY_H
#define MISSIONSTRATEGY_H
#include <iostream>
#include "RocketFactory.h"
#include "Rocket.h"      
#include "Engine.h"
#include "Dragon.h"         //! added all of the classes used to build the mission
using namespace std;

class MissionStrategy           //! Strategy class of the Strategy design pattern
{
private:
    string missionStratName;    //! given every mission strategy a name to keep track
    Rocket * rocketChoice;      //! shows the type of rocket used in the strategy
    Engine * engineChoice;      //! shows the type of engine used in the strategy
    Dragon * dragonChoice;      //! shows the type of dragon used in the strategy
public:
    MissionStrategy(string name);   //! Constructor that takes the name of the mission as a parameter
    ~MissionStrategy();             //! Destructor 
    virtual void buildMission();    //! virtual function that builds specific parts of the mission depending on what the client wants
    void setName(string n);         //! setter function to set the name of the mission strategy
    string getName();               //! getter function to get the name of the mission strategy
    
    
};

class RocketStrategy : public MissionStrategy   //! ConcreteStrategy class in the Strategy design pattern
{
public:
    RocketStrategy();               //! Constructor that uses the base class's constructor 

    virtual void buildMission();    //! Implementation of the buildMission function that asks the client which type of rocket to use
    
};

class EngineStrategy : public MissionStrategy   //! ConcreteStrategy class in the Strategy design pattern
{
public:
    EngineStrategy();               //! Constructor that uses the base class's constructor
    
    virtual void buildMission();     //! Implementation of the buildMission function that asks the client which type of engine to use
};

class DragonStrategy : public MissionStrategy    //! ConcreteStrategy class in the Strategy design pattern
{
public:
    DragonStrategy();               //! Constructor that uses the base class's constructor
    virtual void buildMission();     //! Implementation of the buildMission function that asks the client which type of dragon to use
};
#endif // MISSIONSTRATEGY_H
